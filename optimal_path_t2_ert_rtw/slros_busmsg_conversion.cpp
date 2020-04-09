#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_optimal_path_t2_geometry_msgs_Point and geometry_msgs::Point

void convertFromBus(geometry_msgs::Point* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_Point const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_Point* busPtr, geometry_msgs::Point const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_optimal_path_t2_geometry_msgs_Pose and geometry_msgs::Pose

void convertFromBus(geometry_msgs::Pose* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_Pose const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertFromBus(&msgPtr->orientation, &busPtr->Orientation);
  convertFromBus(&msgPtr->position, &busPtr->Position);
}

void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_Pose* busPtr, geometry_msgs::Pose const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertToBus(&busPtr->Orientation, &msgPtr->orientation);
  convertToBus(&busPtr->Position, &msgPtr->position);
}


// Conversions between SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped and geometry_msgs::PoseStamped

void convertFromBus(geometry_msgs::PoseStamped* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseStamped");

  convertFromBus(&msgPtr->header, &busPtr->Header);
  convertFromBus(&msgPtr->pose, &busPtr->Pose);
}

void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped* busPtr, geometry_msgs::PoseStamped const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseStamped");

  convertToBus(&busPtr->Header, &msgPtr->header);
  convertToBus(&busPtr->Pose, &msgPtr->pose);
}


// Conversions between SL_Bus_optimal_path_t2_geometry_msgs_Quaternion and geometry_msgs::Quaternion

void convertFromBus(geometry_msgs::Quaternion* msgPtr, SL_Bus_optimal_path_t2_geometry_msgs_Quaternion const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  msgPtr->w =  busPtr->W;
  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_optimal_path_t2_geometry_msgs_Quaternion* busPtr, geometry_msgs::Quaternion const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  busPtr->W =  msgPtr->w;
  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_optimal_path_t2_ros_time_Time and ros::Time

void convertFromBus(ros::Time* msgPtr, SL_Bus_optimal_path_t2_ros_time_Time const* busPtr)
{
  const std::string rosMessageType("ros_time/Time");

  msgPtr->sec =  busPtr->Sec;
  msgPtr->nsec =  busPtr->Nsec;
}

void convertToBus(SL_Bus_optimal_path_t2_ros_time_Time* busPtr, ros::Time const* msgPtr)
{
  const std::string rosMessageType("ros_time/Time");

  busPtr->Sec =  msgPtr->sec;
  busPtr->Nsec =  msgPtr->nsec;
}


// Conversions between SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 and sensor_msgs::PointCloud2

void convertFromBus(sensor_msgs::PointCloud2* msgPtr, SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/PointCloud2");

  convertFromBusVariablePrimitiveArray(msgPtr->data, busPtr->Data, busPtr->Data_SL_Info);
  convertFromBusVariableNestedArray(msgPtr->fields, busPtr->Fields, busPtr->Fields_SL_Info);
  convertFromBus(&msgPtr->header, &busPtr->Header);
  msgPtr->height =  busPtr->Height;
  msgPtr->is_bigendian =  busPtr->IsBigendian;
  msgPtr->is_dense =  busPtr->IsDense;
  msgPtr->point_step =  busPtr->PointStep;
  msgPtr->row_step =  busPtr->RowStep;
  msgPtr->width =  busPtr->Width;
}

void convertToBus(SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2* busPtr, sensor_msgs::PointCloud2 const* msgPtr)
{
  const std::string rosMessageType("sensor_msgs/PointCloud2");

  convertToBusVariablePrimitiveArray(busPtr->Data, busPtr->Data_SL_Info, msgPtr->data, slros::EnabledWarning(rosMessageType, "data"));
  convertToBusVariableNestedArray(busPtr->Fields, busPtr->Fields_SL_Info, msgPtr->fields, slros::EnabledWarning(rosMessageType, "fields"));
  convertToBus(&busPtr->Header, &msgPtr->header);
  busPtr->Height =  msgPtr->height;
  busPtr->IsBigendian =  msgPtr->is_bigendian;
  busPtr->IsDense =  msgPtr->is_dense;
  busPtr->PointStep =  msgPtr->point_step;
  busPtr->RowStep =  msgPtr->row_step;
  busPtr->Width =  msgPtr->width;
}


// Conversions between SL_Bus_optimal_path_t2_sensor_msgs_PointField and sensor_msgs::PointField

void convertFromBus(sensor_msgs::PointField* msgPtr, SL_Bus_optimal_path_t2_sensor_msgs_PointField const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/PointField");

  msgPtr->count =  busPtr->Count;
  msgPtr->datatype =  busPtr->Datatype;
  convertFromBusVariablePrimitiveArray(msgPtr->name, busPtr->Name, busPtr->Name_SL_Info);
  msgPtr->offset =  busPtr->Offset;
}

void convertToBus(SL_Bus_optimal_path_t2_sensor_msgs_PointField* busPtr, sensor_msgs::PointField const* msgPtr)
{
  const std::string rosMessageType("sensor_msgs/PointField");

  busPtr->Count =  msgPtr->count;
  busPtr->Datatype =  msgPtr->datatype;
  convertToBusVariablePrimitiveArray(busPtr->Name, busPtr->Name_SL_Info, msgPtr->name, slros::EnabledWarning(rosMessageType, "name"));
  busPtr->Offset =  msgPtr->offset;
}


// Conversions between SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray and std_msgs::Float32MultiArray

void convertFromBus(std_msgs::Float32MultiArray* msgPtr, SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float32MultiArray");

  convertFromBusVariablePrimitiveArray(msgPtr->data, busPtr->Data, busPtr->Data_SL_Info);
  convertFromBus(&msgPtr->layout, &busPtr->Layout);
}

void convertToBus(SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray* busPtr, std_msgs::Float32MultiArray const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float32MultiArray");

  convertToBusVariablePrimitiveArray(busPtr->Data, busPtr->Data_SL_Info, msgPtr->data, slros::EnabledWarning(rosMessageType, "data"));
  convertToBus(&busPtr->Layout, &msgPtr->layout);
}


// Conversions between SL_Bus_optimal_path_t2_std_msgs_Header and std_msgs::Header

void convertFromBus(std_msgs::Header* msgPtr, SL_Bus_optimal_path_t2_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr->frame_id, busPtr->FrameId, busPtr->FrameId_SL_Info);
  msgPtr->seq =  busPtr->Seq;
  convertFromBus(&msgPtr->stamp, &busPtr->Stamp);
}

void convertToBus(SL_Bus_optimal_path_t2_std_msgs_Header* busPtr, std_msgs::Header const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->FrameId, busPtr->FrameId_SL_Info, msgPtr->frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  busPtr->Seq =  msgPtr->seq;
  convertToBus(&busPtr->Stamp, &msgPtr->stamp);
}


// Conversions between SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension and std_msgs::MultiArrayDimension

void convertFromBus(std_msgs::MultiArrayDimension* msgPtr, SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension const* busPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayDimension");

  convertFromBusVariablePrimitiveArray(msgPtr->label, busPtr->Label, busPtr->Label_SL_Info);
  msgPtr->size =  busPtr->Size;
  msgPtr->stride =  busPtr->Stride;
}

void convertToBus(SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension* busPtr, std_msgs::MultiArrayDimension const* msgPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayDimension");

  convertToBusVariablePrimitiveArray(busPtr->Label, busPtr->Label_SL_Info, msgPtr->label, slros::EnabledWarning(rosMessageType, "label"));
  busPtr->Size =  msgPtr->size;
  busPtr->Stride =  msgPtr->stride;
}


// Conversions between SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout and std_msgs::MultiArrayLayout

void convertFromBus(std_msgs::MultiArrayLayout* msgPtr, SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout const* busPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayLayout");

  msgPtr->data_offset =  busPtr->DataOffset;
  convertFromBusVariableNestedArray(msgPtr->dim, busPtr->Dim, busPtr->Dim_SL_Info);
}

void convertToBus(SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout* busPtr, std_msgs::MultiArrayLayout const* msgPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayLayout");

  busPtr->DataOffset =  msgPtr->data_offset;
  convertToBusVariableNestedArray(busPtr->Dim, busPtr->Dim_SL_Info, msgPtr->dim, slros::EnabledWarning(rosMessageType, "dim"));
}


// Conversions between SL_Bus_optimal_path_t2_std_srvs_EmptyRequest and std_srvs::EmptyRequest

void convertFromBus(std_srvs::EmptyRequest* msgPtr, SL_Bus_optimal_path_t2_std_srvs_EmptyRequest const* busPtr)
{
  const std::string rosMessageType("std_srvs/EmptyRequest");

}

void convertToBus(SL_Bus_optimal_path_t2_std_srvs_EmptyRequest* busPtr, std_srvs::EmptyRequest const* msgPtr)
{
  const std::string rosMessageType("std_srvs/EmptyRequest");

}


// Conversions between SL_Bus_optimal_path_t2_std_srvs_EmptyResponse and std_srvs::EmptyResponse

void convertFromBus(std_srvs::EmptyResponse* msgPtr, SL_Bus_optimal_path_t2_std_srvs_EmptyResponse const* busPtr)
{
  const std::string rosMessageType("std_srvs/EmptyResponse");

}

void convertToBus(SL_Bus_optimal_path_t2_std_srvs_EmptyResponse* busPtr, std_srvs::EmptyResponse const* msgPtr)
{
  const std::string rosMessageType("std_srvs/EmptyResponse");

}

