#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_generic_service.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block optimal_path_t2/Subscribe1
extern SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped> Sub_optimal_path_t2_456;

// For Block optimal_path_t2/Subscribe5
extern SimulinkSubscriber<sensor_msgs::PointCloud2, SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2> Sub_optimal_path_t2_457;

// For Block optimal_path_t2/Publish1
extern SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_516;

// For Block optimal_path_t2/Publish2
extern SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_452;

// For Block optimal_path_t2/Publish3
extern SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_520;

// For Block optimal_path_t2/Publish4
extern SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_526;

// For Block optimal_path_t2/Publish5
extern SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_453;

// For Block optimal_path_t2/Publish6
extern SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray> Pub_optimal_path_t2_454;

// For Block optimal_path_t2/Set Parameter
extern SimulinkParameterSetter<boolean_T, bool> ParamSet_optimal_path_t2_527;

// For Block optimal_path_t2/Set Parameter1
extern SimulinkParameterSetter<boolean_T, bool> ParamSet_optimal_path_t2_528;

// For Block optimal_path_t2/Reset Octomap /Call Service
extern SimulinkServiceCaller<std_srvs::Empty, SL_Bus_optimal_path_t2_std_srvs_EmptyRequest, SL_Bus_optimal_path_t2_std_srvs_EmptyResponse> ServCall_optimal_path_t2_496;

void slros_node_init(int argc, char** argv);

#endif
