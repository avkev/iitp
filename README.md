# iitp t branch

## t2

#### optimal_path
* 비행 중 waypoint 변경 시 astar_restart를 1로 바꿔주는데 이때 Obstacle(pose)가 1이라면 다시 astar_restart를 0으로 바꾸면서 경로 생성 안됨
--> 해당 문제 해결 위해 waypoint 변경 시 path_exist를 false로 바꾸고 해당 값이 true일 때만 astar_restart가 0으로 되도록 바꿈. 아직 비행 테스트 안됨

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

