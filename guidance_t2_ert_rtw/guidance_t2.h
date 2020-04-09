//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: guidance_t2.h
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
#ifndef RTW_HEADER_guidance_t2_h_
#define RTW_HEADER_guidance_t2_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef guidance_t2_COMMON_INCLUDES_
# define guidance_t2_COMMON_INCLUDES_
#include <stdio.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // guidance_t2_COMMON_INCLUDES_

#include "guidance_t2_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rt_defines.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  real_T optimal_path_norm[384];
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray In1;// '<S28>/In1'
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray In1_j;// '<S27>/In1'
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray In1_o;// '<S26>/In1'
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray In1_d;// '<S25>/In1'
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray In1_f;// '<S24>/In1'
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray In1_n;// '<S22>/In1'
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray BusAssignment3;// '<Root>/Bus Assignment3' 
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray b_varargout_2;
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray b_varargout_2_m;
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray b_varargout_2_c;
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray b_varargout_2_k;
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray b_varargout_2_cx;
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray b_varargout_2_b;
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T K[128];
  real32_T b_varargout_2_Data[128];
  SL_Bus_guidance_t2_geometry_msgs_PoseStamped In1_h;// '<S23>/In1'
  SL_Bus_guidance_t2_geometry_msgs_PoseStamped In1_hy;// '<S21>/In1'
  SL_Bus_guidance_t2_geometry_msgs_PoseStamped BusAssignment2;// '<Root>/Bus Assignment2' 
  char_T cv[32];
  real_T rtb_TmpSignalConversionAtSFun_p[4];
  char_T cv1[28];
  SL_Bus_guidance_t2_geometry_msgs_Point In1_l;// '<S30>/In1'
  SL_Bus_guidance_t2_geometry_msgs_Point b_varargout_2_cv;
  SL_Bus_guidance_t2_geometry_msgs_Point BusAssignment;// '<Root>/Bus Assignment' 
  real_T euler_angle[3];
  real_T optimal_path_norm_f[3];
  char_T cv2[20];
  char_T cv3[19];
  char_T cv4[16];
  real_T X_cmd;
  real_T Y_cmd;
  real_T Z_cmd;
  real_T hover_x;
  real_T hover_y;
  real_T hover_z;
  real_T euler_angle_g;
  real_T rtb_sincos_o2_idx_0;
  real_T rtb_sincos_o2_idx_1;
  real_T rtb_sincos_o2_idx_2;
  real_T aSinInput;
  real_T b_b;
  real_T eul_tmp;
  real_T eul_tmp_g;
  real32_T yaw_vector3[2];
} B_guidance_t2_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_GetP_T obj; // '<Root>/Get Parameter'
  ros_slros_internal_block_GetP_T obj_k;// '<Root>/Get Parameter1'
  ros_slros_internal_block_Publ_T obj_o;// '<S7>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_c;// '<S6>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_c5;// '<S5>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_g;// '<S18>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_ck;// '<S17>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_ks;// '<S16>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_n;// '<S15>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_f;// '<S14>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_j;// '<S13>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_b;// '<S12>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_d;// '<S11>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_fy;// '<S10>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_l;// '<S9>/SourceBlock'
  real_T XYZ_cmd_temp[3];              // '<Root>/inlier '
  real_T yaw_mem;                      // '<Root>/first'
  real_T hz_20;                        // '<Root>/first'
  real_T pixel_temp[10];               // '<Root>/first'
  real_T landing_x;                    // '<Root>/first'
  real_T landing_y;                    // '<Root>/first'
  real_T landing_hz;                   // '<Root>/first'
  real_T landing_not_found;            // '<Root>/first'
  boolean_T hover_pose_saved;          // '<Root>/inlier '
} DW_guidance_t2_T;

// Parameters (default storage)
struct P_guidance_t2_T_ {
  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                           //  Referenced by: '<S22>/Out1'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                  //  Referenced by: '<S10>/Constant'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                             //  Referenced by: '<S24>/Out1'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Constant_Value_l;// Computed Parameter: Constant_Value_l
                                                                    //  Referenced by: '<S12>/Constant'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                             //  Referenced by: '<S25>/Out1'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                    //  Referenced by: '<S13>/Constant'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                             //  Referenced by: '<S26>/Out1'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                    //  Referenced by: '<S14>/Constant'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                             //  Referenced by: '<S27>/Out1'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                    //  Referenced by: '<S15>/Constant'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Out1_Y0_nu;// Computed Parameter: Out1_Y0_nu
                                                              //  Referenced by: '<S28>/Out1'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                    //  Referenced by: '<S16>/Constant'

  SL_Bus_guidance_t2_std_msgs_Float32MultiArray Constant_Value_a;// Computed Parameter: Constant_Value_a
                                                                    //  Referenced by: '<S2>/Constant'

  SL_Bus_guidance_t2_geometry_msgs_PoseStamped Out1_Y0_c;// Computed Parameter: Out1_Y0_c
                                                            //  Referenced by: '<S21>/Out1'

  SL_Bus_guidance_t2_geometry_msgs_PoseStamped Constant_Value_b;// Computed Parameter: Constant_Value_b
                                                                   //  Referenced by: '<S9>/Constant'

  SL_Bus_guidance_t2_geometry_msgs_PoseStamped Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                            //  Referenced by: '<S23>/Out1'

  SL_Bus_guidance_t2_geometry_msgs_PoseStamped Constant_Value_bw;// Computed Parameter: Constant_Value_bw
                                                                    //  Referenced by: '<S11>/Constant'

  SL_Bus_guidance_t2_geometry_msgs_PoseStamped Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                   //  Referenced by: '<S3>/Constant'

  SL_Bus_guidance_t2_geometry_msgs_Point Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                      //  Referenced by: '<S30>/Out1'

  SL_Bus_guidance_t2_geometry_msgs_Point Constant_Value_ka;// Computed Parameter: Constant_Value_ka
                                                              //  Referenced by: '<S18>/Constant'

  SL_Bus_guidance_t2_geometry_msgs_Point Constant_Value_b5;// Computed Parameter: Constant_Value_b5
                                                              //  Referenced by: '<S1>/Constant'

  SL_Bus_guidance_t2_std_msgs_Int16 Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                 //  Referenced by: '<S29>/Out1'

  SL_Bus_guidance_t2_std_msgs_Int16 Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                        //  Referenced by: '<S17>/Constant'

  real_T Pitch_Value;                  // Expression: 0
                                          //  Referenced by: '<Root>/Pitch'

  real_T Roll_Value;                   // Expression: 0
                                          //  Referenced by: '<Root>/ Roll'

  real_T u2_Gain;                      // Expression: 0.5
                                          //  Referenced by: '<S8>/1//2'

};

// Real-time Model Data Structure
struct tag_RTM_guidance_t2_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_guidance_t2_T guidance_t2_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_guidance_t2_T guidance_t2_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_guidance_t2_T guidance_t2_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void guidance_t2_initialize(void);
  extern void guidance_t2_step(void);
  extern void guidance_t2_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_guidance_t2_T *const guidance_t2_M;

#ifdef __cplusplus

}
#endif

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
//  '<Root>' : 'guidance_t2'
//  '<S1>'   : 'guidance_t2/Blank Message'
//  '<S2>'   : 'guidance_t2/Blank Message1'
//  '<S3>'   : 'guidance_t2/Blank Message4'
//  '<S4>'   : 'guidance_t2/MATLAB Function9'
//  '<S5>'   : 'guidance_t2/Publish1'
//  '<S6>'   : 'guidance_t2/Publish2'
//  '<S7>'   : 'guidance_t2/Publish3'
//  '<S8>'   : 'guidance_t2/Rotation Angles to Quaternions'
//  '<S9>'   : 'guidance_t2/Subscribe'
//  '<S10>'  : 'guidance_t2/Subscribe1'
//  '<S11>'  : 'guidance_t2/Subscribe2'
//  '<S12>'  : 'guidance_t2/Subscribe3'
//  '<S13>'  : 'guidance_t2/Subscribe4'
//  '<S14>'  : 'guidance_t2/Subscribe5'
//  '<S15>'  : 'guidance_t2/Subscribe6'
//  '<S16>'  : 'guidance_t2/Subscribe7'
//  '<S17>'  : 'guidance_t2/Subscribe8'
//  '<S18>'  : 'guidance_t2/Subscribe9'
//  '<S19>'  : 'guidance_t2/first'
//  '<S20>'  : 'guidance_t2/inlier '
//  '<S21>'  : 'guidance_t2/Subscribe/Enabled Subsystem'
//  '<S22>'  : 'guidance_t2/Subscribe1/Enabled Subsystem'
//  '<S23>'  : 'guidance_t2/Subscribe2/Enabled Subsystem'
//  '<S24>'  : 'guidance_t2/Subscribe3/Enabled Subsystem'
//  '<S25>'  : 'guidance_t2/Subscribe4/Enabled Subsystem'
//  '<S26>'  : 'guidance_t2/Subscribe5/Enabled Subsystem'
//  '<S27>'  : 'guidance_t2/Subscribe6/Enabled Subsystem'
//  '<S28>'  : 'guidance_t2/Subscribe7/Enabled Subsystem'
//  '<S29>'  : 'guidance_t2/Subscribe8/Enabled Subsystem'
//  '<S30>'  : 'guidance_t2/Subscribe9/Enabled Subsystem'

#endif                                 // RTW_HEADER_guidance_t2_h_

//
// File trailer for generated code.
//
// [EOF]
//
