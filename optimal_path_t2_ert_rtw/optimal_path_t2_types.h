//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: optimal_path_t2_types.h
//
// Code generated for Simulink model 'optimal_path_t2'.
//
// Model version                  : 1.748
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Thu Apr  9 19:38:38 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_optimal_path_t2_types_h_
#define RTW_HEADER_optimal_path_t2_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  uint32_T DataOffset;

  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_optimal_path_t2_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray_

// MsgType=std_msgs/Float32MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real32_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_optimal_path_t2_std_msgs_MultiArrayLayout Layout;
} SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_srvs_EmptyRequest_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_srvs_EmptyRequest_

// MsgType=std_srvs/EmptyRequest
typedef struct {
  boolean_T SL_DummyData;
} SL_Bus_optimal_path_t2_std_srvs_EmptyRequest;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_srvs_EmptyResponse_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_srvs_EmptyResponse_

// MsgType=std_srvs/EmptyResponse
typedef struct {
  boolean_T SL_DummyData;
} SL_Bus_optimal_path_t2_std_srvs_EmptyResponse;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_optimal_path_t2_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_optimal_path_t2_ros_time_Time Stamp;
} SL_Bus_optimal_path_t2_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_optimal_path_t2_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_optimal_path_t2_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_optimal_path_t2_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_optimal_path_t2_geometry_msgs_Quaternion Orientation;
} SL_Bus_optimal_path_t2_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped_

// MsgType=geometry_msgs/PoseStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_optimal_path_t2_std_msgs_Header Header;

  // MsgType=geometry_msgs/Pose
  SL_Bus_optimal_path_t2_geometry_msgs_Pose Pose;
} SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_sensor_msgs_PointField_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_sensor_msgs_PointField_

// MsgType=sensor_msgs/PointField
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Name_SL_Info:TruncateAction=warn 
  uint8_T Name[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Name
  SL_Bus_ROSVariableLengthArrayInfo Name_SL_Info;
  uint32_T Offset;
  uint8_T Datatype;
  uint32_T Count;
} SL_Bus_optimal_path_t2_sensor_msgs_PointField;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2_
#define DEFINED_TYPEDEF_FOR_SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2_

// MsgType=sensor_msgs/PointCloud2
typedef struct {
  uint32_T Height;
  uint32_T Width;
  boolean_T IsBigendian;
  uint32_T PointStep;
  uint32_T RowStep;
  boolean_T IsDense;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  uint8_T Data[600000];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_optimal_path_t2_std_msgs_Header Header;

  // MsgType=sensor_msgs/PointField:IsVarLen=1:VarLenCategory=data:VarLenElem=Fields_SL_Info:TruncateAction=warn 
  SL_Bus_optimal_path_t2_sensor_msgs_PointField Fields[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Fields
  SL_Bus_ROSVariableLengthArrayInfo Fields_SL_Info;
  boolean_T PreserveStructureOnRead;
} SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2;

#endif

#ifndef typedef_ros_slros_internal_block_SetP_T
#define typedef_ros_slros_internal_block_SetP_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_SetP_T;

#endif                                 //typedef_ros_slros_internal_block_SetP_T

// Custom Type definition for MATLAB Function: '<Root>/MATLAB Function8'
#ifndef struct_tag_skA4KFEZ4HPkJJBOYCrevdH
#define struct_tag_skA4KFEZ4HPkJJBOYCrevdH

struct tag_skA4KFEZ4HPkJJBOYCrevdH
{
  uint32_T SafeEq;
  uint32_T Absolute;
  uint32_T NaNBias;
  uint32_T NaNWithFinite;
  uint32_T FiniteWithNaN;
  uint32_T NaNWithNaN;
};

#endif                                 //struct_tag_skA4KFEZ4HPkJJBOYCrevdH

#ifndef typedef_skA4KFEZ4HPkJJBOYCrevdH_optim_T
#define typedef_skA4KFEZ4HPkJJBOYCrevdH_optim_T

typedef struct tag_skA4KFEZ4HPkJJBOYCrevdH skA4KFEZ4HPkJJBOYCrevdH_optim_T;

#endif                                 //typedef_skA4KFEZ4HPkJJBOYCrevdH_optim_T

// Custom Type definition for MATLAB Function: '<Root>/MATLAB Function7'
#ifndef struct_tag_sL6LJlPlxhdTxZzXh5NTaQC
#define struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

struct tag_sL6LJlPlxhdTxZzXh5NTaQC
{
  int32_T intNumBits;
};

#endif                                 //struct_tag_sL6LJlPlxhdTxZzXh5NTaQC

#ifndef typedef_sL6LJlPlxhdTxZzXh5NTaQC_optim_T
#define typedef_sL6LJlPlxhdTxZzXh5NTaQC_optim_T

typedef struct tag_sL6LJlPlxhdTxZzXh5NTaQC sL6LJlPlxhdTxZzXh5NTaQC_optim_T;

#endif                                 //typedef_sL6LJlPlxhdTxZzXh5NTaQC_optim_T

// Custom Type definition for MATLAB Function: '<Root>/MATLAB Function8'
#ifndef struct_tag_spGKsvEVm7uA89hv31XX4LH
#define struct_tag_spGKsvEVm7uA89hv31XX4LH

struct tag_spGKsvEVm7uA89hv31XX4LH
{
  uint32_T MissingPlacement;
  uint32_T ComparisonMethod;
};

#endif                                 //struct_tag_spGKsvEVm7uA89hv31XX4LH

#ifndef typedef_spGKsvEVm7uA89hv31XX4LH_optim_T
#define typedef_spGKsvEVm7uA89hv31XX4LH_optim_T

typedef struct tag_spGKsvEVm7uA89hv31XX4LH spGKsvEVm7uA89hv31XX4LH_optim_T;

#endif                                 //typedef_spGKsvEVm7uA89hv31XX4LH_optim_T

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef typedef_ros_slros_internal_block_Serv_T
#define typedef_ros_slros_internal_block_Serv_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Serv_T;

#endif                                 //typedef_ros_slros_internal_block_Serv_T

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef typedef_c_cell_wrap_optimal_path_t2_T
#define typedef_c_cell_wrap_optimal_path_t2_T

typedef struct {
  uint32_T f1[8];
} c_cell_wrap_optimal_path_t2_T;

#endif                                 //typedef_c_cell_wrap_optimal_path_t2_T

// Custom Type definition for MATLAB Function: '<Root>/MATLAB Function8'
#ifndef struct_tag_sJCxfmxS8gBOONUZjbjUd9E
#define struct_tag_sJCxfmxS8gBOONUZjbjUd9E

struct tag_sJCxfmxS8gBOONUZjbjUd9E
{
  boolean_T CaseSensitivity;
  boolean_T StructExpand;
  char_T PartialMatching[6];
  boolean_T IgnoreNulls;
};

#endif                                 //struct_tag_sJCxfmxS8gBOONUZjbjUd9E

#ifndef typedef_sJCxfmxS8gBOONUZjbjUd9E_optim_T
#define typedef_sJCxfmxS8gBOONUZjbjUd9E_optim_T

typedef struct tag_sJCxfmxS8gBOONUZjbjUd9E sJCxfmxS8gBOONUZjbjUd9E_optim_T;

#endif                                 //typedef_sJCxfmxS8gBOONUZjbjUd9E_optim_T

// Custom Type definition for MATLAB Function: '<Root>/MATLAB Function11'
#ifndef typedef_struct_T_optimal_path_t2_T
#define typedef_struct_T_optimal_path_t2_T

typedef struct {
  char_T Value[20];
} struct_T_optimal_path_t2_T;

#endif                                 //typedef_struct_T_optimal_path_t2_T

// Custom Type definition for MATLAB Function: '<Root>/MATLAB Function7'
#ifndef typedef_struct_T_optimal_path_t2_k_T
#define typedef_struct_T_optimal_path_t2_k_T

typedef struct {
  char_T Value[10];
} struct_T_optimal_path_t2_k_T;

#endif                                 //typedef_struct_T_optimal_path_t2_k_T

#ifndef typedef_b_struct_T_optimal_path_t2_T
#define typedef_b_struct_T_optimal_path_t2_T

typedef struct {
  char_T Value[35];
} b_struct_T_optimal_path_t2_T;

#endif                                 //typedef_b_struct_T_optimal_path_t2_T

#ifndef typedef_c_struct_T_optimal_path_t2_T
#define typedef_c_struct_T_optimal_path_t2_T

typedef struct {
  char_T Value[14];
} c_struct_T_optimal_path_t2_T;

#endif                                 //typedef_c_struct_T_optimal_path_t2_T

#ifndef typedef_d_struct_T_optimal_path_t2_T
#define typedef_d_struct_T_optimal_path_t2_T

typedef struct {
  char_T Value[18];
} d_struct_T_optimal_path_t2_T;

#endif                                 //typedef_d_struct_T_optimal_path_t2_T

#ifndef typedef_struct_T_optimal_path_t2_n_T
#define typedef_struct_T_optimal_path_t2_n_T

typedef struct {
  char_T Value[6];
} struct_T_optimal_path_t2_n_T;

#endif                                 //typedef_struct_T_optimal_path_t2_n_T

#ifndef typedef_b_struct_T_optimal_path_t2_n_T
#define typedef_b_struct_T_optimal_path_t2_n_T

typedef struct {
  char_T Value[3];
} b_struct_T_optimal_path_t2_n_T;

#endif                                 //typedef_b_struct_T_optimal_path_t2_n_T

#ifndef typedef_c_ros_slros_internal_block_Se_T
#define typedef_c_ros_slros_internal_block_Se_T

typedef uint8_T c_ros_slros_internal_block_Se_T;

#endif                                 //typedef_c_ros_slros_internal_block_Se_T

#ifndef c_ros_slros_internal_block_Serv_constants
#define c_ros_slros_internal_block_Serv_constants

// enum c_ros_slros_internal_block_Serv
const c_ros_slros_internal_block_Se_T SLSuccess = 0U;
const c_ros_slros_internal_block_Se_T SLConnectionTimeout = 1U;
const c_ros_slros_internal_block_Se_T SLCallFailure = 2U;
const c_ros_slros_internal_block_Se_T SLOtherError = 3U;

#endif                               //c_ros_slros_internal_block_Serv_constants

#ifndef typedef_ros_slros_internal_block_Read_T
#define typedef_ros_slros_internal_block_Read_T

typedef struct {
  int32_T isInitialized;
  c_cell_wrap_optimal_path_t2_T inputVarSize;
} ros_slros_internal_block_Read_T;

#endif                                 //typedef_ros_slros_internal_block_Read_T

#ifndef struct_emxArray_real_T_650000
#define struct_emxArray_real_T_650000

struct emxArray_real_T_650000
{
  real_T data[650000];
  int32_T size;
};

#endif                                 //struct_emxArray_real_T_650000

#ifndef typedef_emxArray_real_T_650000_optima_T
#define typedef_emxArray_real_T_650000_optima_T

typedef struct emxArray_real_T_650000 emxArray_real_T_650000_optima_T;

#endif                                 //typedef_emxArray_real_T_650000_optima_T

// Parameters (default storage)
typedef struct P_optimal_path_t2_T_ P_optimal_path_t2_T;

// Forward declaration for rtModel
typedef struct tag_RTM_optimal_path_t2_T RT_MODEL_optimal_path_t2_T;

#endif                                 // RTW_HEADER_optimal_path_t2_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
