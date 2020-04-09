#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "guidance_t2";

// For Block guidance_t2/Subscribe
SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_guidance_t2_geometry_msgs_PoseStamped> Sub_guidance_t2_438;

// For Block guidance_t2/Subscribe1
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_guidance_t2_std_msgs_Float32MultiArray> Sub_guidance_t2_453;

// For Block guidance_t2/Subscribe2
SimulinkSubscriber<geometry_msgs::PoseStamped, SL_Bus_guidance_t2_geometry_msgs_PoseStamped> Sub_guidance_t2_297;

// For Block guidance_t2/Subscribe3
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_guidance_t2_std_msgs_Float32MultiArray> Sub_guidance_t2_343;

// For Block guidance_t2/Subscribe4
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_guidance_t2_std_msgs_Float32MultiArray> Sub_guidance_t2_345;

// For Block guidance_t2/Subscribe5
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_guidance_t2_std_msgs_Float32MultiArray> Sub_guidance_t2_346;

// For Block guidance_t2/Subscribe6
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_guidance_t2_std_msgs_Float32MultiArray> Sub_guidance_t2_454;

// For Block guidance_t2/Subscribe7
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_guidance_t2_std_msgs_Float32MultiArray> Sub_guidance_t2_461;

// For Block guidance_t2/Subscribe8
SimulinkSubscriber<std_msgs::Int16, SL_Bus_guidance_t2_std_msgs_Int16> Sub_guidance_t2_467;

// For Block guidance_t2/Subscribe9
SimulinkSubscriber<geometry_msgs::Point, SL_Bus_guidance_t2_geometry_msgs_Point> Sub_guidance_t2_468;

// For Block guidance_t2/Publish1
SimulinkPublisher<std_msgs::Float32MultiArray, SL_Bus_guidance_t2_std_msgs_Float32MultiArray> Pub_guidance_t2_446;

// For Block guidance_t2/Publish2
SimulinkPublisher<geometry_msgs::PoseStamped, SL_Bus_guidance_t2_geometry_msgs_PoseStamped> Pub_guidance_t2_350;

// For Block guidance_t2/Publish3
SimulinkPublisher<geometry_msgs::Point, SL_Bus_guidance_t2_geometry_msgs_Point> Pub_guidance_t2_475;

// For Block guidance_t2/Get Parameter
SimulinkParameterGetter<boolean_T, bool> ParamGet_guidance_t2_488;

// For Block guidance_t2/Get Parameter1
SimulinkParameterGetter<boolean_T, bool> ParamGet_guidance_t2_489;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

