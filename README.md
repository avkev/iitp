# iitp t branch

## t2

#### guidance
* 랜딩파트 수정. optimal_path 에서 rosparam get 으로 landing phase를 받아 true면 traveling에서 landing 으로 바뀜. 픽셀이 감지 될 때마다 landing_hz를 증가시키며 10 이후부터는 landing_x, landing_y, -3이 셋포인트가 되며 z=0.4이하가 되면 nan 값이 들어감. 픽셀이 감지 안된다면 landing_not_found가 증가되며 150 이상이면 1.8미터, 300이상이면 2미터까지 올라감. 해보니까 인식된 6번 중 5번이 2.0m에서 이루어짐. 학습 다시 필요?
* constant yaw는 optimal_path 에서 guidance로 옮김
* 랜딩파트 2차 수정. landing_not_found로 인해서 1.8, 2.0미터로 셋포인트가 들어가다가도 인식되면 landing_hz가 10 되기 전에는 1.2로 다시 들어감. 해당 부분 수정함. 
* 랜딩파트 3차 수정. landing_hz가 10 이상이면 헬리포트가 감지되지 않아도 landing_x, y가 

#### optimal_path
* 비행 중 waypoint 변경 시 astar_restart를 1로 바꿔주는데 이때 Obstacle(pose)가 1이라면 다시 astar_restart를 0으로 바꾸면서 경로 생성 안됨
--> 해당 문제 해결 위해 waypoint 변경 시 path_exist를 false로 바꾸고 해당 값이 true일 때만 astar_restart가 0으로 되도록 바꿈. 아직 비행 테스트 안됨
* waypoint gen에서 waypoint flag가 마지막이 되면 landing phase를 true로 바꿈. 해당 값이 true면 astar_restart는 0으로 바꾸면서 경로 재생성 안됨 

## t1

#### guidance

* /mavros/local_position/pose 기준으로 guidance.
* /rtabmap/inlier_num 을 기준으로 호버링 혹은 뒤로 가는 코드가 있으나 실제 비행으로 테스트 되지 않음.
* 임시로 마지막 waypoint 에서 yaw를 특정 값으로 고정하는 부분이 들어가있으나 optimal_path 에서 해주는 부분과 중복됨.

#### optimal_path

* /mavros/local_position/pose 기준으로 A*.
* octomap_server의 /octomap_server/reset 서비스는 경로가 아예 찾아지지 않는 경우(최소 cost가 inf)에만 요청 됨.
* A* 재시작은 

  (1) 찾아진 경로 상에 장애물이 있을 때

  (2) waypoint상의 현재 goal point가 변경되었을 때 
  
  (3) 경로가 아예 찾아지지 않았을 때만 이루어짐
  
#### heliport detect

* HeliportDetector3.mat : 헬리포트 일부만 찍혀도 인식 가능

* ros_detect : pixel_XY 토픽, bboxes 토픽 publish

