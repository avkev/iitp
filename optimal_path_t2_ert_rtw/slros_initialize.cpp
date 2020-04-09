#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "optimal_path_t2";

// For Block optimal_path_t2/Subscribe1
SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped> Sub_optimal_path_t2_456;

// For Block optimal_path_t2/Subscribe5
SimulinkSubscriber<sensor_msgs::PointCloud2, SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2> Sub_optimal_path_t2_457;

// For Block optimal_path_t2/Publish1
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_516;

// For Block optimal_path_t2/Publish2
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_452;

// For Block optimal_path_t2/Publish3
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_520;

// For Block optimal_path_t2/Publish4
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_526;

// For Block optimal_path_t2/Publish5
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_453;

// For Block optimal_path_t2/Publish6
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_454;

// For Block optimal_path_t2/Set Parameter
SimulinkParameterSetter<boolean_T, bool> ParamSet_optimal_path_t2_527;

// For Block optimal_path_t2/Set Parameter1
SimulinkParameterSetter<boolean_T, bool> ParamSet_optimal_path_t2_528;

// For Block optimal_path_t2/Reset Octomap /Call Service
SimulinkServiceCaller<std_srvs::Empty, SL_Bus_optimal_path_t2_std_srvs_EmptyRequest, SL_Bus_optimal_path_t2_std_srvs_EmptyResponse> ServCall_optimal_path_t2_496;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

