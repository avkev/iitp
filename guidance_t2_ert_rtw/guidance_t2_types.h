//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: guidance_t2_types.h
//
// Code generated for Simulink model 'guidance_t2'.
//
// Model version                  : 1.592
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Thu Apr  9 19:51:28 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_guidance_t2_types_h_
#define RTW_HEADER_guidance_t2_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_guidance_t2_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_guidance_t2_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  uint32_T DataOffset;

  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_guidance_t2_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_Float32MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_Float32MultiArray_

// MsgType=std_msgs/Float32MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real32_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_guidance_t2_std_msgs_MultiArrayLayout Layout;
} SL_Bus_guidance_t2_std_msgs_Float32MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_guidance_t2_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_guidance_t2_ros_time_Time Stamp;
} SL_Bus_guidance_t2_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_guidance_t2_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_guidance_t2_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_guidance_t2_geometry_msgs_Quaternion Orientation;
} SL_Bus_guidance_t2_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_PoseStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_geometry_msgs_PoseStamped_

// MsgType=geometry_msgs/PoseStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_guidance_t2_std_msgs_Header Header;

  // MsgType=geometry_msgs/Pose
  SL_Bus_guidance_t2_geometry_msgs_Pose Pose;
} SL_Bus_guidance_t2_geometry_msgs_PoseStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_Int16_
#define DEFINED_TYPEDEF_FOR_SL_Bus_guidance_t2_std_msgs_Int16_

// MsgType=std_msgs/Int16
typedef struct {
  int16_T Data;
} SL_Bus_guidance_t2_std_msgs_Int16;

#endif

#ifndef typedef_d_robotics_slcore_internal_bl_T
#define typedef_d_robotics_slcore_internal_bl_T

typedef struct {
  int32_T __dummy;
} d_robotics_slcore_internal_bl_T;

#endif                                 //typedef_d_robotics_slcore_internal_bl_T

#ifndef typedef_ros_slros_internal_block_GetP_T
#define typedef_ros_slros_internal_block_GetP_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  d_robotics_slcore_internal_bl_T SampleTimeHandler;
} ros_slros_internal_block_GetP_T;

#endif                                 //typedef_ros_slros_internal_block_GetP_T

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

// Custom Type definition for MATLAB Function: '<Root>/first'
#ifndef struct_tag_sL6LJlPlxhdTxZzXh5NTaQC
#define struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

struct tag_sL6LJlPlxhdTxZzXh5NTaQC
{
  int32_T intNumBits;
};

#endif                                 //struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

#ifndef typedef_sL6LJlPlxhdTxZzXh5NTaQC_guida_T
#define typedef_sL6LJlPlxhdTxZzXh5NTaQC_guida_T

typedef struct tag_sL6LJlPlxhdTxZzXh5NTaQC sL6LJlPlxhdTxZzXh5NTaQC_guida_T;

#endif                                 //typedef_sL6LJlPlxhdTxZzXh5NTaQC_guida_T

#ifndef typedef_struct_T_guidance_t2_T
#define typedef_struct_T_guidance_t2_T

typedef struct {
  char_T Value[41];
} struct_T_guidance_t2_T;

#endif                                 //typedef_struct_T_guidance_t2_T

#ifndef typedef_b_struct_T_guidance_t2_T
#define typedef_b_struct_T_guidance_t2_T

typedef struct {
  char_T Value[28];
} b_struct_T_guidance_t2_T;

#endif                                 //typedef_b_struct_T_guidance_t2_T

#ifndef typedef_c_struct_T_guidance_t2_T
#define typedef_c_struct_T_guidance_t2_T

typedef struct {
  char_T Value[43];
} c_struct_T_guidance_t2_T;

#endif                                 //typedef_c_struct_T_guidance_t2_T

// Parameters (default storage)
typedef struct P_guidance_t2_T_ P_guidance_t2_T;

// Forward declaration for rtModel
typedef struct tag_RTM_guidance_t2_T RT_MODEL_guidance_t2_T;

#endif                                 // RTW_HEADER_guidance_t2_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
