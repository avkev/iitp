//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: optimal_path_t2.h
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
#ifndef RTW_HEADER_optimal_path_t2_h_
#define RTW_HEADER_optimal_path_t2_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef optimal_path_t2_COMMON_INCLUDES_
# define optimal_path_t2_COMMON_INCLUDES_
#include <stdio.h>
#include <string.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // optimal_path_t2_COMMON_INCLUDES_

#include "optimal_path_t2_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef typedef_c_ros_slros_internal_block_Po_T
#define typedef_c_ros_slros_internal_block_Po_T

typedef struct {
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 BusStruct;
  uint32_T NumFields;
} c_ros_slros_internal_block_Po_T;

#endif                                 //typedef_c_ros_slros_internal_block_Po_T

// Block signals (default storage)
typedef struct {
  real_T byteIdx_data[5200000];
  real_T byteIdx_data_m[5200000];
  real_T byteIdx_data_c[5200000];
  real_T tmp_data[5200000];
  real_T byteIdx_data_k[5200000];
  real32_T b_xyzTmp_data[3900000];
  real_T rgbTmp_data[1950000];
  real_T rgb_data[1950000];
  real32_T c_y0_data[1950000];
  real32_T ReadPointCloud1[1950000];   // '<Root>/Read Point Cloud1'
  real32_T xyzTmp_data[1950000];
  emxArray_real_T_650000_optima_T align2_data;
  real32_T b_intensityTmp_data[1300000];
  real32_T varargin_1_data[1300000];
  real32_T varargin_2_data[1300000];
  real32_T varargin_3_data[1300000];
  real32_T validPoints_data[1300000];
  real32_T d_data[1300000];
  uint8_T data_data[5200000];
  uint8_T data_data_c[5200000];
  uint8_T rgbRaw_data[5200000];
  uint8_T validPoints_data_b[5200000];
  uint8_T data_data_p[5200000];
  uint8_T data_data_cv[5200000];
  real_T dv[650000];
  real_T pc_data[650000];
  int16_T align1_data[1950000];
  int16_T align2_data_f[1950000];
  int16_T align3_data[1950000];
  real32_T intensityTmp_data[650000];
  real32_T intensity_data[650000];
  int32_T g_data[650000];
  int32_T i_data[650000];
  int32_T g_data_g[650000];
  int32_T i_data_g[650000];
  int32_T c_data[650000];
  int32_T e_data[650000];
  int32_T g_data_m[650000];
  int32_T i_data_n[650000];
  int32_T idx_data[650000];
  int32_T iwork_data[650000];
  int16_T ycol_data[650000];
  boolean_T pointIdxIsValid[650000];
  boolean_T pointIdxIsValid_p[650000];
  boolean_T e[650000];
  boolean_T f[650000];
  boolean_T pointIdxIsValid_l[650000];
  boolean_T pointIdxIsValid_j[650000];
  boolean_T pointIdxIsValid_d[650000];
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 In1;// '<S29>/In1'
  c_ros_slros_internal_block_Po_T pc;
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 b_varargout_2;
  uint8_T b_varargout_2_Data[600000];
  uint8_T tmp_data_g[600000];
  uint8_T data_data_l[600000];
  uint8_T b_data[600000];
  uint8_T tmp_data_d[600000];
  real_T GScore[65000];
  real_T HScore[65000];
  real_T FScore[65000];
  real_T ParentX[65000];
  real_T ParentY[65000];
  real_T ParentZ[65000];
  int32_T ii_data[65000];
  int32_T jj_data[65000];
  int16_T index_x_data[32834];
  int16_T c_data_d[32834];
  int16_T y_data[32834];
  int16_T b_y_data[32834];
  int16_T e_data_l[32808];
  int16_T d_data_o[32793];
  int8_T ClosedMAT[65000];
  int8_T Obstacle[65000];              // '<Root>/MATLAB Function8'
  boolean_T FScore_b[65000];
  real_T minval[1000];
  SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray BusAssignment6;// '<Root>/Bus Assignment6' 
  SL_Bus_optimal_path_t2_sensor_msgs_PointField b_varargout_2_Fields[16];
  real_T G_cost[125];
  real_T GScore_temp[125];
  real32_T test_m[128];                // '<Root>/MATLAB Function3'
  real32_T test_p[128];                // '<Root>/MATLAB Function2'
  real32_T optimal_path_y[128];        // '<Root>/MATLAB Function7'
  real32_T test[128];                  // '<Root>/MATLAB Function9'
  real32_T optimal_path_x[128];        // '<Root>/MATLAB Function7'
  real32_T optimal_path_z[128];        // '<Root>/MATLAB Function7'
  SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped In1_d;// '<S28>/In1'
  SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped b_varargout_2_n;
  real_T b_minval[25];
  boolean_T nan_check[128];
  uint8_T b_varargout_2_Header_FrameId[128];
  int32_T G_row1_data[25];
  int32_T G_row2_data[25];
  int32_T G_row3_data[25];
  int32_T G_row4_data[25];
  int32_T G_row5_data[25];
  real_T waypoint_path_norm[12];
  real_T HScore_temp[10];
  real_T y_data_b[8];
  real_T K[4];
  char_T cv[29];
  char_T cv1[28];
  int8_T G_col1_data[25];
  int8_T G_col2_data[25];
  int8_T G_col3_data[25];
  int8_T G_col4_data[25];
  int8_T G_col5_data[25];
  boolean_T x[25];
  real_T odom[3];
  real_T previous_point_cmd[3];        // '<Root>/MATLAB Function11'
  real_T next_point_cmd[3];            // '<Root>/MATLAB Function11'
  real_T dv1[3];
  real_T dv2[3];
  real_T dv3[3];
  char_T cv2[22];
  char_T cv3[20];
  char_T cv4[19];
  SL_Bus_optimal_path_t2_ros_time_Time b_varargout_2_Header_Stamp;
  int32_T Goal[3];
  int32_T iv[3];
  int32_T col_data[3];
  int8_T minHScore_data[10];
  int8_T b_ii_data[10];
  real_T scale;
  real_T absxk;
  real_T t;
  real_T MinFScore;
  real_T yOff;
  real_T zOff;
  real_T u;
  SL_Bus_ROSVariableLengthArrayInfo b_varargout_2_Fields_SL_Info;
  int32_T align2_size[2];
  int32_T c_y0_size[2];
  int32_T xyzTmp_size[2];
  int32_T b_xyzTmp_size[2];
  int32_T byteIdx_size[2];
  int32_T byteIdx_size_l[2];
  int32_T byteIdx_size_h[2];
  int32_T unusedU0_size[2];
  int32_T y_size[2];
  int32_T col_size[2];
  int32_T rgbRaw_size[2];
  int32_T byteIdx_size_b[2];
  char_T unusedU0_data[6];
  real32_T f_d;
  int32_T nb;
  int32_T k;
  int32_T k0;
  int32_T CY;
  int32_T b_idx;
  int32_T b_jj;
  int32_T xPageOffset;
  int32_T xOffset;
  int32_T ii_size;
  int32_T jj_size;
  int32_T G_col2_size_idx_0;
  int32_T G_col3_size_idx_0;
  int32_T G_col4_size_idx_0;
  int32_T Current_pose_idx_0;
  int32_T Current_pose_idx_2;
  int32_T q0;
  int32_T q0_e;
  int32_T q0_b;
  int32_T q1;
  int32_T align2_data_tmp;
  int32_T ParentX_tmp;
  int32_T GScore_tmp;
  int32_T GScore_temp_tmp;
  int32_T GScore_temp_tmp_j;
  int32_T GScore_tmp_tmp;
  int32_T ClosedMAT_tmp;
  int32_T x_tmp;
  int32_T loop_ub;
  int32_T tmp_size;
  int32_T data_size;
  int32_T varargin_2_size;
  int32_T varargin_3_size;
  int32_T yOff_tmp;
  int32_T loop_ub_tmp;
  int32_T loop_ub_f;
  int32_T b_i;
  int32_T i;
  int32_T b_size;
  int32_T k_a;
  int32_T i1;
  int32_T idx_size;
  int32_T loop_ub_j;
  int32_T k_j;
  int32_T i_o;
  int32_T i2;
  int32_T j;
  int32_T trueCount;
  int32_T i_n;
  int32_T tmp_size_i;
  int32_T c_size_idx_1;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Header_Seq;
  uint32_T b_varargout_2_Header_FrameId_SL;
  uint32_T b_varargout_2_Header_FrameId__m;
  uint32_T SL_m;                       // '<Root>/MATLAB Function3'
  uint32_T SL_b;                       // '<Root>/MATLAB Function2'
  uint32_T SL_l0;                      // '<Root>/MATLAB Function1'
  uint32_T SL_l;                       // '<Root>/MATLAB Function10'
  uint32_T SL;                         // '<Root>/MATLAB Function9'
  uint32_T xIdx;
  uint32_T yIdx;
  uint32_T zIdx;
  uint32_T rgbIdx;
  uint32_T intensityIdx;
  uint32_T numPointsActual;
} B_optimal_path_t2_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Read_T obj; // '<Root>/Read Point Cloud1'
  ros_slros_internal_block_Publ_T obj_e;// '<S22>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_h;// '<S21>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_f;// '<S20>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_j;// '<S19>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_i;// '<S18>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_o;// '<S17>/SinkBlock'
  ros_slros_internal_block_Serv_T obj_c;// '<S27>/ServiceCaller'
  ros_slros_internal_block_SetP_T obj_ic;// '<Root>/Set Parameter1'
  ros_slros_internal_block_SetP_T obj_a;// '<Root>/Set Parameter'
  ros_slros_internal_block_Subs_T obj_os;// '<S25>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_l;// '<S24>/SourceBlock'
  real_T optimal[384];                 // '<Root>/MATLAB Function7'
  real_T astar_restart;                // '<Root>/MATLAB Function7'
  real_T curr_point[3];                // '<Root>/MATLAB Function7'
  real_T waypoint_flag[10];            // '<Root>/MATLAB Function11'
  int32_T SFunction_DIMS2[3];          // '<Root>/MATLAB Function8'
  int32_T ReadPointCloud1_DIMS1[2];    // '<Root>/Read Point Cloud1'
  boolean_T optimal_not_empty;         // '<Root>/MATLAB Function7'
  boolean_T hover_flag;                // '<Root>/MATLAB Function7'
  boolean_T path_exist;                // '<Root>/MATLAB Function7'
} DW_optimal_path_t2_T;

// Parameters (default storage)
struct P_optimal_path_t2_T_ {
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 Out1_Y0;// Computed Parameter: Out1_Y0
                                                            //  Referenced by: '<S29>/Out1'

  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 Constant_Value;// Computed Parameter: Constant_Value
                                                                   //  Referenced by: '<S25>/Constant'

  SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                      //  Referenced by: '<S4>/Constant'

  SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                      //  Referenced by: '<S5>/Constant'

  SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S6>/Constant'

  SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                      //  Referenced by: '<S1>/Constant'

  SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                      //  Referenced by: '<S2>/Constant'

  SL_Bus_optimal_path_t2_std_msgs_Float32MultiArray Constant_Value_lh;// Computed Parameter: Constant_Value_lh
                                                                      //  Referenced by: '<S3>/Constant'

  SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                                //  Referenced by: '<S28>/Out1'

  SL_Bus_optimal_path_t2_geometry_msgs_PoseStamped Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                      //  Referenced by: '<S24>/Constant'

  SL_Bus_optimal_path_t2_std_srvs_EmptyRequest Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                   //  Referenced by: '<S26>/Constant'

  SL_Bus_optimal_path_t2_std_srvs_EmptyResponse Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                    //  Referenced by: '<S27>/Constant'

  real_T Constant_Value_ic;            // Expression: 0
                                          //  Referenced by: '<S23>/Constant'

  real_T StartGridCase_J1_Value[3];    // Expression: [25 32 5]
                                          //  Referenced by: '<Root>/Start Grid (Case_J1)'

  real_T GridWaypoint_J_fortest_Value[12];
                   // Expression: [0 0 1.2;5.5 0 1.2;5.5 -4.0 1.2;-1.6 -3.6 1.2]
                      //  Referenced by: '<Root>/Grid Waypoint_J_fortest'

};

// Real-time Model Data Structure
struct tag_RTM_optimal_path_t2_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_optimal_path_t2_T optimal_path_t2_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_optimal_path_t2_T optimal_path_t2_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_optimal_path_t2_T optimal_path_t2_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void optimal_path_t2_initialize(void);
  extern void optimal_path_t2_step(void);
  extern void optimal_path_t2_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_optimal_path_t2_T *const optimal_path_t2_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/MAP Size' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'optimal_path_t2'
//  '<S1>'   : 'optimal_path_t2/Blank Message1'
//  '<S2>'   : 'optimal_path_t2/Blank Message2'
//  '<S3>'   : 'optimal_path_t2/Blank Message3'
//  '<S4>'   : 'optimal_path_t2/Blank Message4'
//  '<S5>'   : 'optimal_path_t2/Blank Message5'
//  '<S6>'   : 'optimal_path_t2/Blank Message6'
//  '<S7>'   : 'optimal_path_t2/MATLAB Function1'
//  '<S8>'   : 'optimal_path_t2/MATLAB Function10'
//  '<S9>'   : 'optimal_path_t2/MATLAB Function11'
//  '<S10>'  : 'optimal_path_t2/MATLAB Function12'
//  '<S11>'  : 'optimal_path_t2/MATLAB Function13'
//  '<S12>'  : 'optimal_path_t2/MATLAB Function2'
//  '<S13>'  : 'optimal_path_t2/MATLAB Function3'
//  '<S14>'  : 'optimal_path_t2/MATLAB Function7'
//  '<S15>'  : 'optimal_path_t2/MATLAB Function8'
//  '<S16>'  : 'optimal_path_t2/MATLAB Function9'
//  '<S17>'  : 'optimal_path_t2/Publish1'
//  '<S18>'  : 'optimal_path_t2/Publish2'
//  '<S19>'  : 'optimal_path_t2/Publish3'
//  '<S20>'  : 'optimal_path_t2/Publish4'
//  '<S21>'  : 'optimal_path_t2/Publish5'
//  '<S22>'  : 'optimal_path_t2/Publish6'
//  '<S23>'  : 'optimal_path_t2/Reset Octomap '
//  '<S24>'  : 'optimal_path_t2/Subscribe1'
//  '<S25>'  : 'optimal_path_t2/Subscribe5'
//  '<S26>'  : 'optimal_path_t2/Reset Octomap /Blank Message2'
//  '<S27>'  : 'optimal_path_t2/Reset Octomap /Call Service'
//  '<S28>'  : 'optimal_path_t2/Subscribe1/Enabled Subsystem'
//  '<S29>'  : 'optimal_path_t2/Subscribe5/Enabled Subsystem'

#endif                                 // RTW_HEADER_optimal_path_t2_h_

//
// File trailer for generated code.
//
// [EOF]
//
