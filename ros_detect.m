
load('HeliportDetector3.mat');
% load('HeliportDetector.mat');

image_log = rossubscriber('/camera3/color/image_raw');
imagewidth = 640;
imageheight = 480;

while 1
    I=permute(reshape(image_log.LatestMessage.Data,3,imagewidth,imageheight),[3 2 1]);
    [bboxes,scores] = detect(hpdetector,I);
    if ~isempty(bboxes)
        [pub, msg] = rospublisher('/pixel_XY', 'geometry_msgs/PoseStamped');
        pixel_x = bboxes(1,1)+bboxes(1,3)/2;
        pixel_y = bboxes(1,2)+bboxes(1,4)/2;
        msg.Pose.Position.X = pixel_x - imagewidth/2;
        msg.Pose.Position.Y = -pixel_y+imageheight -imageheight/2;
        send(pub,msg);
        [pub2, msg2] = rospublisher('/bboxes_log', 'std_msgs/Float32MultiArray');
        msg2.Data=bboxes(1,:);
        send(pub2,msg2);
    else
        [pub, msg] = rospublisher('/pixel_XY', 'geometry_msgs/PoseStamped');
        msg.Pose.Position.X = 0;
        msg.Pose.Position.Y = 0;
        send(pub,msg);
        [pub2, msg2] = rospublisher('/bboxes_log', 'std_msgs/Float32MultiArray');
        msg2.Data=[0 0 0 0];
        send(pub2,msg2);
    end
end

