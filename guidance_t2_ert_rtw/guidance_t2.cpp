//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: guidance_t2.cpp
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
#include "guidance_t2.h"
#include "guidance_t2_private.h"

// Block signals (default storage)
B_guidance_t2_T guidance_t2_B;

// Block states (default storage)
DW_guidance_t2_T guidance_t2_DW;

// Real-time model
RT_MODEL_guidance_t2_T guidance_t2_M_ = RT_MODEL_guidance_t2_T();
RT_MODEL_guidance_t2_T *const guidance_t2_M = &guidance_t2_M_;

// Forward declaration for local functions
static void guidance_t2_SystemCore_step_h(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void guidance_t2_SystemCore_step_hw(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void guidance_t2_SystemCore_step_hwj(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void guidance_t2_SystemCore_step(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void guidance_t_SystemCore_step_hwj5(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void guidance__SystemCore_step_hwj5l(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static real_T guidance_t2_norm(const real_T x[3]);
static real32_T guidance_t2_norm_m(const real32_T x[2]);
static void guidance_t2_quat2eul(real_T q[4], real_T eul[3]);
static void matlabCodegenHandle_matla_hwj5l(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabCo_hw(ros_slros_internal_block_Publ_T *obj);
static void guidance_t2_SystemCore_step_h(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_guidance_t2_343.getLatestMessage
    (&guidance_t2_B.b_varargout_2_b);
  memcpy(&varargout_2_Data[0], &guidance_t2_B.b_varargout_2_b.Data[0], sizeof
         (real32_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    guidance_t2_B.b_varargout_2_b.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    guidance_t2_B.b_varargout_2_b.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    guidance_t2_B.b_varargout_2_b.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &guidance_t2_B.b_varargout_2_b.Layout.Dim[0],
         sizeof(SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    guidance_t2_B.b_varargout_2_b.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    guidance_t2_B.b_varargout_2_b.Layout.Dim_SL_Info.ReceivedLength;
}

static void guidance_t2_SystemCore_step_hw(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_guidance_t2_345.getLatestMessage
    (&guidance_t2_B.b_varargout_2_cx);
  memcpy(&varargout_2_Data[0], &guidance_t2_B.b_varargout_2_cx.Data[0], sizeof
         (real32_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    guidance_t2_B.b_varargout_2_cx.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    guidance_t2_B.b_varargout_2_cx.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    guidance_t2_B.b_varargout_2_cx.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &guidance_t2_B.b_varargout_2_cx.Layout.Dim
         [0], sizeof(SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    guidance_t2_B.b_varargout_2_cx.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    guidance_t2_B.b_varargout_2_cx.Layout.Dim_SL_Info.ReceivedLength;
}

static void guidance_t2_SystemCore_step_hwj(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_guidance_t2_346.getLatestMessage
    (&guidance_t2_B.b_varargout_2_k);
  memcpy(&varargout_2_Data[0], &guidance_t2_B.b_varargout_2_k.Data[0], sizeof
         (real32_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    guidance_t2_B.b_varargout_2_k.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    guidance_t2_B.b_varargout_2_k.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    guidance_t2_B.b_varargout_2_k.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &guidance_t2_B.b_varargout_2_k.Layout.Dim[0],
         sizeof(SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    guidance_t2_B.b_varargout_2_k.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    guidance_t2_B.b_varargout_2_k.Layout.Dim_SL_Info.ReceivedLength;
}

static void guidance_t2_SystemCore_step(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_guidance_t2_453.getLatestMessage
    (&guidance_t2_B.b_varargout_2_c);
  memcpy(&varargout_2_Data[0], &guidance_t2_B.b_varargout_2_c.Data[0], sizeof
         (real32_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    guidance_t2_B.b_varargout_2_c.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    guidance_t2_B.b_varargout_2_c.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    guidance_t2_B.b_varargout_2_c.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &guidance_t2_B.b_varargout_2_c.Layout.Dim[0],
         sizeof(SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    guidance_t2_B.b_varargout_2_c.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    guidance_t2_B.b_varargout_2_c.Layout.Dim_SL_Info.ReceivedLength;
}

static void guidance_t_SystemCore_step_hwj5(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_guidance_t2_454.getLatestMessage
    (&guidance_t2_B.b_varargout_2_m);
  memcpy(&varargout_2_Data[0], &guidance_t2_B.b_varargout_2_m.Data[0], sizeof
         (real32_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    guidance_t2_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    guidance_t2_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    guidance_t2_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &guidance_t2_B.b_varargout_2_m.Layout.Dim[0],
         sizeof(SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    guidance_t2_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    guidance_t2_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void guidance__SystemCore_step_hwj5l(boolean_T *varargout_1, real32_T
  varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_guidance_t2_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_guidance_t2_461.getLatestMessage
    (&guidance_t2_B.b_varargout_2);
  memcpy(&varargout_2_Data[0], &guidance_t2_B.b_varargout_2.Data[0], sizeof
         (real32_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    guidance_t2_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    guidance_t2_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = guidance_t2_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &guidance_t2_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    guidance_t2_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    guidance_t2_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

// Function for MATLAB Function: '<Root>/first'
static real_T guidance_t2_norm(const real_T x[3])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  scale = 3.3121686421112381E-170;
  absxk = fabs(x[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(x[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = fabs(x[2]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * sqrt(y);
}

// Function for MATLAB Function: '<Root>/first'
static real32_T guidance_t2_norm_m(const real32_T x[2])
{
  real32_T y;
  real32_T scale;
  real32_T absxk;
  real32_T t;
  scale = 1.29246971E-26F;
  absxk = static_cast<real32_T>(fabs(static_cast<real_T>(x[0])));
  if (absxk > 1.29246971E-26F) {
    y = 1.0F;
    scale = absxk;
  } else {
    t = absxk / 1.29246971E-26F;
    y = t * t;
  }

  absxk = static_cast<real32_T>(fabs(static_cast<real_T>(x[1])));
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0F;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  return scale * static_cast<real32_T>(sqrt(static_cast<real_T>(y)));
}

real32_T rt_atan2f_snf(real32_T u0, real32_T u1)
{
  real32_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else if (rtIsInfF(u0) && rtIsInfF(u1)) {
    if (u0 > 0.0F) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0F) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = static_cast<real32_T>(atan2(static_cast<real_T>(static_cast<real32_T>
      (u0_0)), static_cast<real_T>(static_cast<real32_T>(u1_0))));
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = static_cast<real32_T>(atan2(static_cast<real_T>(u0), static_cast<real_T>
      (u1)));
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Function for MATLAB Function: '<Root>/first'
static void guidance_t2_quat2eul(real_T q[4], real_T eul[3])
{
  real_T eul_tmp;
  real_T eul_tmp_0;
  guidance_t2_B.b_b = 1.0 / sqrt(((q[0] * q[0] + q[1] * q[1]) + q[2] * q[2]) +
    q[3] * q[3]);
  q[0] *= guidance_t2_B.b_b;
  q[1] *= guidance_t2_B.b_b;
  q[2] *= guidance_t2_B.b_b;
  guidance_t2_B.b_b *= q[3];
  guidance_t2_B.aSinInput = (q[1] * guidance_t2_B.b_b - q[0] * q[2]) * -2.0;
  if (guidance_t2_B.aSinInput > 1.0) {
    guidance_t2_B.aSinInput = 1.0;
  }

  if (guidance_t2_B.aSinInput < -1.0) {
    guidance_t2_B.aSinInput = -1.0;
  }

  guidance_t2_B.eul_tmp = q[0] * q[0];
  guidance_t2_B.eul_tmp_g = q[1] * q[1];
  eul_tmp = q[2] * q[2];
  eul_tmp_0 = guidance_t2_B.b_b * guidance_t2_B.b_b;
  eul[0] = rt_atan2d_snf((q[1] * q[2] + q[0] * guidance_t2_B.b_b) * 2.0,
    ((guidance_t2_B.eul_tmp + guidance_t2_B.eul_tmp_g) - eul_tmp) - eul_tmp_0);
  eul[1] = asin(guidance_t2_B.aSinInput);
  eul[2] = rt_atan2d_snf((q[2] * guidance_t2_B.b_b + q[0] * q[1]) * 2.0,
    ((guidance_t2_B.eul_tmp - guidance_t2_B.eul_tmp_g) - eul_tmp) + eul_tmp_0);
}

static void matlabCodegenHandle_matla_hwj5l(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCo_hw(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void guidance_t2_step(void)
{
  int32_T m;
  real32_T a;
  real32_T b_a;
  int32_T k;
  boolean_T b_varargout_1;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  uint32_T b_varargout_2_Layout_Dim_SL_I_0;
  SL_Bus_guidance_t2_std_msgs_Int16 b_varargout_2;
  boolean_T exitg1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Inport: '<S23>/In1'

  b_varargout_1 = Sub_guidance_t2_297.getLatestMessage
    (&guidance_t2_B.BusAssignment2);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S23>/Enable'

  if (b_varargout_1) {
    guidance_t2_B.In1_h = guidance_t2_B.BusAssignment2;
  }

  // End of MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S12>/SourceBlock' incorporates:
  //   Inport: '<S24>/In1'

  guidance_t2_SystemCore_step_h(&b_varargout_1, guidance_t2_B.b_varargout_2_Data,
    &b_varargout_2_Data_SL_Info_Curr, &b_varargout_2_Data_SL_Info_Rece,
    &b_varargout_2_Layout_DataOffset, guidance_t2_B.b_varargout_2_Layout_Dim,
    &b_varargout_2_Layout_Dim_SL_Inf, &b_varargout_2_Layout_Dim_SL_I_0);

  // Outputs for Enabled SubSystem: '<S12>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S24>/Enable'

  if (b_varargout_1) {
    memcpy(&guidance_t2_B.In1_f.Data[0], &guidance_t2_B.b_varargout_2_Data[0],
           sizeof(real32_T) << 7U);
    guidance_t2_B.In1_f.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    guidance_t2_B.In1_f.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
    guidance_t2_B.In1_f.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&guidance_t2_B.In1_f.Layout.Dim[0],
           &guidance_t2_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
    guidance_t2_B.In1_f.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    guidance_t2_B.In1_f.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
  }

  // End of MATLABSystem: '<S12>/SourceBlock'
  // End of Outputs for SubSystem: '<S12>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe4'
  // MATLABSystem: '<S13>/SourceBlock' incorporates:
  //   Inport: '<S25>/In1'

  guidance_t2_SystemCore_step_hw(&b_varargout_1,
    guidance_t2_B.b_varargout_2_Data, &b_varargout_2_Data_SL_Info_Curr,
    &b_varargout_2_Data_SL_Info_Rece, &b_varargout_2_Layout_DataOffset,
    guidance_t2_B.b_varargout_2_Layout_Dim, &b_varargout_2_Layout_Dim_SL_Inf,
    &b_varargout_2_Layout_Dim_SL_I_0);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S25>/Enable'

  if (b_varargout_1) {
    memcpy(&guidance_t2_B.In1_d.Data[0], &guidance_t2_B.b_varargout_2_Data[0],
           sizeof(real32_T) << 7U);
    guidance_t2_B.In1_d.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    guidance_t2_B.In1_d.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
    guidance_t2_B.In1_d.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&guidance_t2_B.In1_d.Layout.Dim[0],
           &guidance_t2_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
    guidance_t2_B.In1_d.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    guidance_t2_B.In1_d.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
  }

  // End of MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe4'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe5'
  // MATLABSystem: '<S14>/SourceBlock' incorporates:
  //   Inport: '<S26>/In1'

  guidance_t2_SystemCore_step_hwj(&b_varargout_1,
    guidance_t2_B.b_varargout_2_Data, &b_varargout_2_Data_SL_Info_Curr,
    &b_varargout_2_Data_SL_Info_Rece, &b_varargout_2_Layout_DataOffset,
    guidance_t2_B.b_varargout_2_Layout_Dim, &b_varargout_2_Layout_Dim_SL_Inf,
    &b_varargout_2_Layout_Dim_SL_I_0);

  // Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S26>/Enable'

  if (b_varargout_1) {
    memcpy(&guidance_t2_B.In1_o.Data[0], &guidance_t2_B.b_varargout_2_Data[0],
           sizeof(real32_T) << 7U);
    guidance_t2_B.In1_o.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    guidance_t2_B.In1_o.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
    guidance_t2_B.In1_o.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&guidance_t2_B.In1_o.Layout.Dim[0],
           &guidance_t2_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
    guidance_t2_B.In1_o.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    guidance_t2_B.In1_o.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
  }

  // End of MATLABSystem: '<S14>/SourceBlock'
  // End of Outputs for SubSystem: '<S14>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe5'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S21>/In1'

  b_varargout_1 = Sub_guidance_t2_438.getLatestMessage
    (&guidance_t2_B.BusAssignment2);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S21>/Enable'

  if (b_varargout_1) {
    guidance_t2_B.In1_hy = guidance_t2_B.BusAssignment2;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S10>/SourceBlock' incorporates:
  //   Inport: '<S22>/In1'

  guidance_t2_SystemCore_step(&b_varargout_1, guidance_t2_B.b_varargout_2_Data,
    &b_varargout_2_Data_SL_Info_Curr, &b_varargout_2_Data_SL_Info_Rece,
    &b_varargout_2_Layout_DataOffset, guidance_t2_B.b_varargout_2_Layout_Dim,
    &b_varargout_2_Layout_Dim_SL_Inf, &b_varargout_2_Layout_Dim_SL_I_0);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S22>/Enable'

  if (b_varargout_1) {
    memcpy(&guidance_t2_B.In1_n.Data[0], &guidance_t2_B.b_varargout_2_Data[0],
           sizeof(real32_T) << 7U);
    guidance_t2_B.In1_n.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    guidance_t2_B.In1_n.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
    guidance_t2_B.In1_n.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&guidance_t2_B.In1_n.Layout.Dim[0],
           &guidance_t2_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
    guidance_t2_B.In1_n.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    guidance_t2_B.In1_n.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
  }

  // End of MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe6'
  // MATLABSystem: '<S15>/SourceBlock' incorporates:
  //   Inport: '<S27>/In1'

  guidance_t_SystemCore_step_hwj5(&b_varargout_1,
    guidance_t2_B.b_varargout_2_Data, &b_varargout_2_Data_SL_Info_Curr,
    &b_varargout_2_Data_SL_Info_Rece, &b_varargout_2_Layout_DataOffset,
    guidance_t2_B.b_varargout_2_Layout_Dim, &b_varargout_2_Layout_Dim_SL_Inf,
    &b_varargout_2_Layout_Dim_SL_I_0);

  // Outputs for Enabled SubSystem: '<S15>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S27>/Enable'

  if (b_varargout_1) {
    memcpy(&guidance_t2_B.In1_j.Data[0], &guidance_t2_B.b_varargout_2_Data[0],
           sizeof(real32_T) << 7U);
    guidance_t2_B.In1_j.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    guidance_t2_B.In1_j.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
    guidance_t2_B.In1_j.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&guidance_t2_B.In1_j.Layout.Dim[0],
           &guidance_t2_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
    guidance_t2_B.In1_j.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    guidance_t2_B.In1_j.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
  }

  // End of MATLABSystem: '<S15>/SourceBlock'
  // End of Outputs for SubSystem: '<S15>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe6'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe7'
  // MATLABSystem: '<S16>/SourceBlock' incorporates:
  //   Inport: '<S28>/In1'

  guidance__SystemCore_step_hwj5l(&b_varargout_1,
    guidance_t2_B.b_varargout_2_Data, &b_varargout_2_Data_SL_Info_Curr,
    &b_varargout_2_Data_SL_Info_Rece, &b_varargout_2_Layout_DataOffset,
    guidance_t2_B.b_varargout_2_Layout_Dim, &b_varargout_2_Layout_Dim_SL_Inf,
    &b_varargout_2_Layout_Dim_SL_I_0);

  // Outputs for Enabled SubSystem: '<S16>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S28>/Enable'

  if (b_varargout_1) {
    memcpy(&guidance_t2_B.In1.Data[0], &guidance_t2_B.b_varargout_2_Data[0],
           sizeof(real32_T) << 7U);
    guidance_t2_B.In1.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    guidance_t2_B.In1.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
    guidance_t2_B.In1.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&guidance_t2_B.In1.Layout.Dim[0],
           &guidance_t2_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_guidance_t2_std_msgs_MultiArrayDimension) << 4U);
    guidance_t2_B.In1.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    guidance_t2_B.In1.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
  }

  // End of MATLABSystem: '<S16>/SourceBlock'
  // End of Outputs for SubSystem: '<S16>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe7'

  // MATLABSystem: '<Root>/Get Parameter'
  ParamGet_guidance_t2_488.get_parameter(&b_varargout_1);

  // MATLAB Function: '<Root>/first' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter'
  //   SignalConversion generated from: '<S19>/ SFunction '

  guidance_t2_DW.hz_20++;
  if (b_varargout_1) {
    if (guidance_t2_DW.landing_hz >= 20.0) {
      guidance_t2_B.rtb_TmpSignalConversionAtSFun_p[0] =
        guidance_t2_B.In1_h.Pose.Orientation.X;
      guidance_t2_B.rtb_TmpSignalConversionAtSFun_p[1] =
        guidance_t2_B.In1_h.Pose.Orientation.Y;
      guidance_t2_B.rtb_TmpSignalConversionAtSFun_p[2] =
        guidance_t2_B.In1_h.Pose.Orientation.Z;
      guidance_t2_B.rtb_TmpSignalConversionAtSFun_p[3] =
        guidance_t2_B.In1_h.Pose.Orientation.W;
      guidance_t2_quat2eul(guidance_t2_B.rtb_TmpSignalConversionAtSFun_p,
                           guidance_t2_B.euler_angle);
      if ((guidance_t2_DW.landing_x == 0.0) && (guidance_t2_DW.landing_y == 0.0))
      {
        guidance_t2_B.rtb_sincos_o2_idx_0 = cos(guidance_t2_B.euler_angle[0]);
        guidance_t2_B.rtb_sincos_o2_idx_1 = sin(guidance_t2_B.euler_angle[0]);
        guidance_t2_DW.landing_x = (guidance_t2_B.In1_hy.Pose.Position.Y *
          guidance_t2_B.rtb_sincos_o2_idx_0 +
          -guidance_t2_B.In1_hy.Pose.Position.X *
          -guidance_t2_B.rtb_sincos_o2_idx_1) *
          guidance_t2_B.In1_h.Pose.Position.Z / 640.0 +
          guidance_t2_B.In1_h.Pose.Position.X;
        guidance_t2_DW.landing_y = (-guidance_t2_B.In1_hy.Pose.Position.X *
          guidance_t2_B.rtb_sincos_o2_idx_0 +
          guidance_t2_B.In1_hy.Pose.Position.Y *
          guidance_t2_B.rtb_sincos_o2_idx_1) *
          guidance_t2_B.In1_h.Pose.Position.Z / 640.0 +
          guidance_t2_B.In1_h.Pose.Position.Y;
      } else {
        guidance_t2_B.rtb_sincos_o2_idx_0 = cos(guidance_t2_B.euler_angle[0]);
        guidance_t2_B.rtb_sincos_o2_idx_1 = sin(guidance_t2_B.euler_angle[0]);
        guidance_t2_DW.landing_x = ((guidance_t2_B.In1_hy.Pose.Position.Y *
          guidance_t2_B.rtb_sincos_o2_idx_0 +
          -guidance_t2_B.In1_hy.Pose.Position.X *
          -guidance_t2_B.rtb_sincos_o2_idx_1) *
          guidance_t2_B.In1_h.Pose.Position.Z / 640.0 +
          (guidance_t2_DW.landing_x + guidance_t2_B.In1_h.Pose.Position.X)) /
          2.0;
        guidance_t2_DW.landing_y = ((-guidance_t2_B.In1_hy.Pose.Position.X *
          guidance_t2_B.rtb_sincos_o2_idx_0 +
          guidance_t2_B.In1_hy.Pose.Position.Y *
          guidance_t2_B.rtb_sincos_o2_idx_1) *
          guidance_t2_B.In1_h.Pose.Position.Z / 640.0 +
          (guidance_t2_DW.landing_y + guidance_t2_B.In1_h.Pose.Position.Y)) /
          2.0;
      }

      guidance_t2_B.X_cmd = guidance_t2_DW.landing_x;
      guidance_t2_B.Y_cmd = guidance_t2_DW.landing_y;
      guidance_t2_B.Z_cmd = -1.0;
    } else {
      if ((guidance_t2_B.In1_hy.Pose.Position.X != 0.0) &&
          (guidance_t2_B.In1_hy.Pose.Position.Y != 0.0)) {
        guidance_t2_DW.landing_hz++;
        guidance_t2_B.X_cmd = -1.6;
        guidance_t2_B.Y_cmd = -3.6;
        guidance_t2_B.Z_cmd = 1.2;
      } else {
        guidance_t2_B.X_cmd = -1.6;
        guidance_t2_B.Y_cmd = -3.6;
        guidance_t2_B.Z_cmd = 1.2;
        if ((guidance_t2_DW.landing_not_found < 1000.0) &&
            (guidance_t2_DW.landing_not_found >= 500.0)) {
          guidance_t2_B.Z_cmd = 1.6;
          printf("heliport decection failed, z_cmd = 1.6 \n");
          fflush(stdout);
        } else {
          if (guidance_t2_DW.landing_not_found >= 1000.0) {
            guidance_t2_B.Z_cmd = 2.0;
            printf("heliport decection failed, z_cmd = 2.0 \n");
            fflush(stdout);
          }
        }

        guidance_t2_DW.landing_not_found++;
        if (guidance_t2_DW.landing_not_found >= 10000.0) {
          guidance_t2_B.Z_cmd = 0.0;
          printf("heliport detection failed \n");
          fflush(stdout);
        }
      }

      printf("landing_hz : %f    landing_not_found : %f\n", static_cast<real32_T>
             (guidance_t2_DW.landing_hz), static_cast<real32_T>
             (guidance_t2_DW.landing_not_found));
      fflush(stdout);
    }

    guidance_t2_B.rtb_sincos_o2_idx_0 = 3.1415926535897931;
  } else {
    for (m = 0; m < 384; m++) {
      guidance_t2_B.optimal_path_norm[m] = (rtInf);
    }

    for (m = 0; m < 128; m++) {
      guidance_t2_B.optimal_path_norm[m] = guidance_t2_B.In1_f.Data[m] -
        static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.X);
      guidance_t2_B.optimal_path_norm[m + 128] = guidance_t2_B.In1_d.Data[m] -
        static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.Y);
      guidance_t2_B.optimal_path_norm[m + 256] = guidance_t2_B.In1_o.Data[m] -
        static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.Z);
      guidance_t2_B.optimal_path_norm_f[0] = guidance_t2_B.optimal_path_norm[m];
      guidance_t2_B.optimal_path_norm_f[1] = guidance_t2_B.optimal_path_norm[m +
        128];
      guidance_t2_B.optimal_path_norm_f[2] = guidance_t2_B.optimal_path_norm[m +
        256];
      guidance_t2_B.K[m] = guidance_t2_norm(guidance_t2_B.optimal_path_norm_f);
    }

    if (!rtIsNaN(guidance_t2_B.K[0])) {
      m = 1;
    } else {
      m = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 129)) {
        if (!rtIsNaN(guidance_t2_B.K[k - 1])) {
          m = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (m == 0) {
      m = 1;
    } else {
      guidance_t2_B.rtb_sincos_o2_idx_0 = guidance_t2_B.K[m - 1];
      for (k = m; k + 1 < 129; k++) {
        if (guidance_t2_B.rtb_sincos_o2_idx_0 > guidance_t2_B.K[k]) {
          guidance_t2_B.rtb_sincos_o2_idx_0 = guidance_t2_B.K[k];
          m = k + 1;
        }
      }
    }

    if (m >= 128) {
      m = 127;
    }

    guidance_t2_B.Z_cmd = guidance_t2_B.In1_o.Data[m];
    guidance_t2_B.X_cmd = guidance_t2_B.In1_f.Data[m];
    guidance_t2_B.Y_cmd = guidance_t2_B.In1_d.Data[m];
    if (m <= 125) {
      guidance_t2_B.yaw_vector3[0] = guidance_t2_B.In1_f.Data[m + 2] -
        static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.X);
      guidance_t2_B.yaw_vector3[1] = guidance_t2_B.In1_d.Data[m + 2] -
        static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.Y);
      if (guidance_t2_norm_m(guidance_t2_B.yaw_vector3) <= 0.4) {
        guidance_t2_B.rtb_sincos_o2_idx_0 = 0.0;
      } else {
        guidance_t2_B.rtb_sincos_o2_idx_0 = rt_atan2f_snf
          (((guidance_t2_B.In1_d.Data[m + 1] - static_cast<real32_T>
             (guidance_t2_B.In1_h.Pose.Position.Y)) +
            (guidance_t2_B.In1_d.Data[m] - static_cast<real32_T>
             (guidance_t2_B.In1_h.Pose.Position.Y))) +
           guidance_t2_B.yaw_vector3[1], ((guidance_t2_B.In1_f.Data[m + 1] -
             static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.X)) +
            (guidance_t2_B.In1_f.Data[m] - static_cast<real32_T>
             (guidance_t2_B.In1_h.Pose.Position.X))) +
           guidance_t2_B.yaw_vector3[0]);
      }

      guidance_t2_DW.yaw_mem = guidance_t2_B.rtb_sincos_o2_idx_0;
    } else {
      guidance_t2_B.rtb_sincos_o2_idx_0 = guidance_t2_DW.yaw_mem;
    }

    if (guidance_t2_DW.hz_20 == 80.0) {
      guidance_t2_DW.hz_20 = 0.0;
    }

    a = static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.X) -
      guidance_t2_B.In1_n.Data[0];
    b_a = static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.Y) -
      guidance_t2_B.In1_n.Data[1];
    if (static_cast<real32_T>(sqrt(static_cast<real_T>((a * a + b_a * b_a)))) <
        0.8) {
      guidance_t2_B.rtb_sincos_o2_idx_0 = rt_atan2f_snf
        (guidance_t2_B.In1_j.Data[1] - guidance_t2_B.In1_n.Data[1],
         guidance_t2_B.In1_j.Data[0] - guidance_t2_B.In1_n.Data[0]);
    }

    a = static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.X) -
      guidance_t2_B.In1.Data[0];
    b_a = static_cast<real32_T>(guidance_t2_B.In1_h.Pose.Position.Y) -
      guidance_t2_B.In1.Data[1];
    if (static_cast<real32_T>(sqrt(static_cast<real_T>((a * a + b_a * b_a)))) <
        0.8) {
      guidance_t2_B.rtb_sincos_o2_idx_0 = rt_atan2f_snf
        (guidance_t2_B.In1_n.Data[1] - guidance_t2_B.In1.Data[1],
         guidance_t2_B.In1_n.Data[0] - guidance_t2_B.In1.Data[0]);
    }
  }

  // Gain: '<S8>/1//2' incorporates:
  //   Constant: '<Root>/ Roll'
  //   Constant: '<Root>/Pitch'
  //   MATLAB Function: '<Root>/first'

  guidance_t2_B.euler_angle[0] = guidance_t2_P.u2_Gain *
    guidance_t2_B.rtb_sincos_o2_idx_0;
  guidance_t2_B.euler_angle[1] = guidance_t2_P.u2_Gain *
    guidance_t2_P.Pitch_Value;
  guidance_t2_B.euler_angle[2] = guidance_t2_P.u2_Gain *
    guidance_t2_P.Roll_Value;

  // Trigonometry: '<S8>/sincos'
  guidance_t2_B.rtb_sincos_o2_idx_0 = cos(guidance_t2_B.euler_angle[0]);
  guidance_t2_B.euler_angle[0] = sin(guidance_t2_B.euler_angle[0]);
  guidance_t2_B.rtb_sincos_o2_idx_1 = cos(guidance_t2_B.euler_angle[1]);
  guidance_t2_B.euler_angle[1] = sin(guidance_t2_B.euler_angle[1]);
  guidance_t2_B.rtb_sincos_o2_idx_2 = cos(guidance_t2_B.euler_angle[2]);
  guidance_t2_B.euler_angle_g = sin(guidance_t2_B.euler_angle[2]);

  // Outputs for Atomic SubSystem: '<Root>/Subscribe9'
  // MATLABSystem: '<S18>/SourceBlock' incorporates:
  //   Inport: '<S30>/In1'

  b_varargout_1 = Sub_guidance_t2_468.getLatestMessage
    (&guidance_t2_B.b_varargout_2_cv);

  // Outputs for Enabled SubSystem: '<S18>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S30>/Enable'

  if (b_varargout_1) {
    guidance_t2_B.In1_l = guidance_t2_B.b_varargout_2_cv;
  }

  // End of MATLABSystem: '<S18>/SourceBlock'
  // End of Outputs for SubSystem: '<S18>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe9'

  // MATLABSystem: '<Root>/Get Parameter1'
  ParamGet_guidance_t2_489.get_parameter(&b_varargout_1);

  // Outputs for Atomic SubSystem: '<Root>/Subscribe8'
  // MATLABSystem: '<S17>/SourceBlock'
  Sub_guidance_t2_467.getLatestMessage(&b_varargout_2);

  // End of Outputs for SubSystem: '<Root>/Subscribe8'

  // MATLAB Function: '<Root>/inlier ' incorporates:
  //   MATLAB Function: '<Root>/first'
  //   MATLABSystem: '<Root>/Get Parameter1'
  //   SignalConversion generated from: '<S19>/ SFunction '
  //   SignalConversion generated from: '<S20>/ SFunction '

  if (rtIsNaN(guidance_t2_DW.XYZ_cmd_temp[0]) && (sqrt
       (guidance_t2_B.In1_h.Pose.Position.X *
        guidance_t2_B.In1_h.Pose.Position.X +
        guidance_t2_B.In1_h.Pose.Position.Y *
        guidance_t2_B.In1_h.Pose.Position.Y) > 0.5)) {
    guidance_t2_B.X_cmd = (rtNaN);
    guidance_t2_B.Y_cmd = (rtNaN);
    guidance_t2_B.Z_cmd = (rtNaN);
    guidance_t2_B.hover_x = (rtNaN);
    guidance_t2_B.hover_y = (rtNaN);
    guidance_t2_B.hover_z = (rtNaN);
  } else {
    if (!guidance_t2_DW.hover_pose_saved) {
      guidance_t2_B.hover_x = guidance_t2_B.In1_h.Pose.Position.X;
      guidance_t2_B.hover_y = guidance_t2_B.In1_h.Pose.Position.Y;
      guidance_t2_B.hover_z = guidance_t2_B.In1_h.Pose.Position.Z;
      guidance_t2_DW.hover_pose_saved = true;
    } else {
      guidance_t2_B.hover_x = guidance_t2_B.In1_l.X;
      guidance_t2_B.hover_y = guidance_t2_B.In1_l.Y;
      guidance_t2_B.hover_z = guidance_t2_B.In1_l.Z;
    }

    if (b_varargout_1) {
      guidance_t2_B.X_cmd = guidance_t2_B.hover_x;
      guidance_t2_B.Y_cmd = guidance_t2_B.hover_y;
      guidance_t2_B.Z_cmd = guidance_t2_B.hover_z;
    }
  }

  guidance_t2_DW.XYZ_cmd_temp[0] = guidance_t2_B.X_cmd;
  guidance_t2_DW.XYZ_cmd_temp[1] = guidance_t2_B.Y_cmd;
  guidance_t2_DW.XYZ_cmd_temp[2] = guidance_t2_B.Z_cmd;

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<S3>/Constant'
  //   MATLAB Function: '<Root>/inlier '

  guidance_t2_B.BusAssignment2 = guidance_t2_P.Constant_Value_p;
  guidance_t2_B.BusAssignment2.Pose.Position.X = guidance_t2_B.X_cmd;
  guidance_t2_B.BusAssignment2.Pose.Position.Y = guidance_t2_B.Y_cmd;
  guidance_t2_B.BusAssignment2.Pose.Position.Z = guidance_t2_B.Z_cmd;

  // Fcn: '<S8>/q0' incorporates:
  //   Fcn: '<S8>/q1'

  guidance_t2_B.Z_cmd = guidance_t2_B.rtb_sincos_o2_idx_0 *
    guidance_t2_B.rtb_sincos_o2_idx_1;
  guidance_t2_B.X_cmd = guidance_t2_B.euler_angle[0] *
    guidance_t2_B.euler_angle[1];

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Fcn: '<S8>/q0'
  //   Fcn: '<S8>/q1'

  guidance_t2_B.BusAssignment2.Pose.Orientation.W = guidance_t2_B.Z_cmd *
    guidance_t2_B.rtb_sincos_o2_idx_2 + guidance_t2_B.X_cmd *
    guidance_t2_B.euler_angle_g;
  guidance_t2_B.BusAssignment2.Pose.Orientation.X = guidance_t2_B.Z_cmd *
    guidance_t2_B.euler_angle_g - guidance_t2_B.X_cmd *
    guidance_t2_B.rtb_sincos_o2_idx_2;

  // Fcn: '<S8>/q2' incorporates:
  //   Fcn: '<S8>/q0'
  //   Fcn: '<S8>/q3'

  guidance_t2_B.Z_cmd = guidance_t2_B.euler_angle[0] *
    guidance_t2_B.rtb_sincos_o2_idx_1;
  guidance_t2_B.X_cmd = guidance_t2_B.rtb_sincos_o2_idx_0 *
    guidance_t2_B.euler_angle[1];

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Fcn: '<S8>/q0'
  //   Fcn: '<S8>/q2'
  //   Fcn: '<S8>/q3'

  guidance_t2_B.BusAssignment2.Pose.Orientation.Y = guidance_t2_B.X_cmd *
    guidance_t2_B.rtb_sincos_o2_idx_2 + guidance_t2_B.Z_cmd *
    guidance_t2_B.euler_angle_g;
  guidance_t2_B.BusAssignment2.Pose.Orientation.Z = guidance_t2_B.Z_cmd *
    guidance_t2_B.rtb_sincos_o2_idx_2 - guidance_t2_B.X_cmd *
    guidance_t2_B.euler_angle_g;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S6>/SinkBlock'
  Pub_guidance_t2_350.publish(&guidance_t2_B.BusAssignment2);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   MATLAB Function: '<Root>/inlier '

  guidance_t2_B.BusAssignment.X = guidance_t2_B.hover_x;
  guidance_t2_B.BusAssignment.Y = guidance_t2_B.hover_y;
  guidance_t2_B.BusAssignment.Z = guidance_t2_B.hover_z;

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // MATLABSystem: '<S7>/SinkBlock'
  Pub_guidance_t2_475.publish(&guidance_t2_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // BusAssignment: '<Root>/Bus Assignment3' incorporates:
  //   Constant: '<S2>/Constant'

  guidance_t2_B.BusAssignment3 = guidance_t2_P.Constant_Value_a;

  // MATLAB Function: '<Root>/MATLAB Function9'
  for (m = 0; m < 5; m++) {
    // BusAssignment: '<Root>/Bus Assignment3' incorporates:
    //   MATLAB Function: '<Root>/first'

    guidance_t2_B.BusAssignment3.Data[m] = static_cast<real32_T>
      (guidance_t2_DW.pixel_temp[m]);
    guidance_t2_B.BusAssignment3.Data[m + 5] = static_cast<real32_T>
      (guidance_t2_DW.pixel_temp[m + 5]);
  }

  for (m = 0; m < 118; m++) {
    // BusAssignment: '<Root>/Bus Assignment3'
    guidance_t2_B.BusAssignment3.Data[m + 10] = (rtNaNF);
  }

  // BusAssignment: '<Root>/Bus Assignment3' incorporates:
  //   MATLAB Function: '<Root>/MATLAB Function9'

  guidance_t2_B.BusAssignment3.Data_SL_Info.CurrentLength = 10U;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S5>/SinkBlock'
  Pub_guidance_t2_446.publish(&guidance_t2_B.BusAssignment3);

  // End of Outputs for SubSystem: '<Root>/Publish1'
}

// Model initialize function
void guidance_t2_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // block I/O
  (void) memset((static_cast<void *>(&guidance_t2_B)), 0,
                sizeof(B_guidance_t2_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&guidance_t2_DW), 0,
                sizeof(DW_guidance_t2_T));

  {
    char_T tmp[14];
    char_T tmp_0[12];
    char_T tmp_1[15];
    char_T tmp_2[10];
    int32_T i;
    static const char_T tmp_3[27] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'l', 'o', 'c', 'a', 'l', '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n', '/',
      'p', 'o', 's', 'e' };

    static const char_T tmp_4[15] = { '/', 'o', 'p', 't', 'i', 'm', 'a', 'l',
      '_', 'p', 'a', 't', 'h', '_', 'x' };

    static const char_T tmp_5[15] = { '/', 'o', 'p', 't', 'i', 'm', 'a', 'l',
      '_', 'p', 'a', 't', 'h', '_', 'y' };

    static const char_T tmp_6[15] = { '/', 'o', 'p', 't', 'i', 'm', 'a', 'l',
      '_', 'p', 'a', 't', 'h', '_', 'z' };

    static const char_T tmp_7[9] = { '/', 'p', 'i', 'x', 'e', 'l', '_', 'X', 'Y'
    };

    static const char_T tmp_8[18] = { '/', 'c', 'u', 'r', 'r', 'e', 'n', 't',
      '_', 'p', 'o', 'i', 'n', 't', '_', 'c', 'm', 'd' };

    static const char_T tmp_9[15] = { '/', 'n', 'e', 'x', 't', '_', 'p', 'o',
      'i', 'n', 't', '_', 'c', 'm', 'd' };

    static const char_T tmp_a[19] = { '/', 'p', 'r', 'e', 'v', 'i', 'o', 'u',
      's', '_', 'p', 'o', 'i', 'n', 't', '_', 'c', 'm', 'd' };

    static const char_T tmp_b[14] = { '/', 'l', 'a', 'n', 'd', 'i', 'n', 'g',
      '_', 'p', 'h', 'a', 's', 'e' };

    static const char_T tmp_c[11] = { '/', 'h', 'o', 'v', 'e', 'r', '_', 'p',
      'o', 's', 'e' };

    static const char_T tmp_d[11] = { '/', 'h', 'o', 'v', 'e', 'r', '_', 'f',
      'l', 'a', 'g' };

    static const char_T tmp_e[19] = { '/', 'r', 't', 'a', 'b', 'm', 'a', 'p',
      '/', 'i', 'n', 'l', 'i', 'e', 'r', '_', 'n', 'u', 'm' };

    static const char_T tmp_f[31] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      's', 'e', 't', 'p', 'o', 'i', 'n', 't', '_', 'p', 'o', 's', 'i', 't', 'i',
      'o', 'n', '/', 'l', 'o', 'c', 'a', 'l' };

    static const char_T tmp_g[13] = { '/', 'p', 'i', 'x', 'e', 'l', '_', 'x',
      'y', '_', 'l', 'o', 'g' };

    // Start for Atomic SubSystem: '<Root>/Subscribe2'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    guidance_t2_DW.obj_d.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      guidance_t2_B.cv1[i] = tmp_3[i];
    }

    guidance_t2_B.cv1[27] = '\x00';
    Sub_guidance_t2_297.createSubscriber(guidance_t2_B.cv1, 1);
    guidance_t2_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe2'

    // Start for Atomic SubSystem: '<Root>/Subscribe3'
    // Start for MATLABSystem: '<S12>/SourceBlock'
    guidance_t2_DW.obj_b.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      guidance_t2_B.cv4[i] = tmp_4[i];
    }

    guidance_t2_B.cv4[15] = '\x00';
    Sub_guidance_t2_343.createSubscriber(guidance_t2_B.cv4, 1);
    guidance_t2_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe3'

    // Start for Atomic SubSystem: '<Root>/Subscribe4'
    // Start for MATLABSystem: '<S13>/SourceBlock'
    guidance_t2_DW.obj_j.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      guidance_t2_B.cv4[i] = tmp_5[i];
    }

    guidance_t2_B.cv4[15] = '\x00';
    Sub_guidance_t2_345.createSubscriber(guidance_t2_B.cv4, 1);
    guidance_t2_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe4'

    // Start for Atomic SubSystem: '<Root>/Subscribe5'
    // Start for MATLABSystem: '<S14>/SourceBlock'
    guidance_t2_DW.obj_f.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      guidance_t2_B.cv4[i] = tmp_6[i];
    }

    guidance_t2_B.cv4[15] = '\x00';
    Sub_guidance_t2_346.createSubscriber(guidance_t2_B.cv4, 1);
    guidance_t2_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S14>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe5'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S9>/SourceBlock'
    guidance_t2_DW.obj_l.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      tmp_2[i] = tmp_7[i];
    }

    tmp_2[9] = '\x00';
    Sub_guidance_t2_438.createSubscriber(tmp_2, 1);
    guidance_t2_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    guidance_t2_DW.obj_fy.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_fy.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      guidance_t2_B.cv3[i] = tmp_8[i];
    }

    guidance_t2_B.cv3[18] = '\x00';
    Sub_guidance_t2_453.createSubscriber(guidance_t2_B.cv3, 1);
    guidance_t2_DW.obj_fy.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Subscribe6'
    // Start for MATLABSystem: '<S15>/SourceBlock'
    guidance_t2_DW.obj_n.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      guidance_t2_B.cv4[i] = tmp_9[i];
    }

    guidance_t2_B.cv4[15] = '\x00';
    Sub_guidance_t2_454.createSubscriber(guidance_t2_B.cv4, 1);
    guidance_t2_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S15>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe6'

    // Start for Atomic SubSystem: '<Root>/Subscribe7'
    // Start for MATLABSystem: '<S16>/SourceBlock'
    guidance_t2_DW.obj_ks.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_ks.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      guidance_t2_B.cv2[i] = tmp_a[i];
    }

    guidance_t2_B.cv2[19] = '\x00';
    Sub_guidance_t2_461.createSubscriber(guidance_t2_B.cv2, 1);
    guidance_t2_DW.obj_ks.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S16>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe7'

    // Start for MATLABSystem: '<Root>/Get Parameter'
    guidance_t2_DW.obj.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_1[i] = tmp_b[i];
    }

    tmp_1[14] = '\x00';
    ParamGet_guidance_t2_488.initialize(tmp_1);
    ParamGet_guidance_t2_488.initialize_error_codes(0, 1, 2, 3);
    ParamGet_guidance_t2_488.set_initial_value(false);
    guidance_t2_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter'

    // Start for Atomic SubSystem: '<Root>/Subscribe9'
    // Start for MATLABSystem: '<S18>/SourceBlock'
    guidance_t2_DW.obj_g.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_0[i] = tmp_c[i];
    }

    tmp_0[11] = '\x00';
    Sub_guidance_t2_468.createSubscriber(tmp_0, 1);
    guidance_t2_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S18>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe9'

    // Start for MATLABSystem: '<Root>/Get Parameter1'
    guidance_t2_DW.obj_k.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_0[i] = tmp_d[i];
    }

    tmp_0[11] = '\x00';
    ParamGet_guidance_t2_489.initialize(tmp_0);
    ParamGet_guidance_t2_489.initialize_error_codes(0, 1, 2, 3);
    ParamGet_guidance_t2_489.set_initial_value(false);
    guidance_t2_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter1'

    // Start for Atomic SubSystem: '<Root>/Subscribe8'
    // Start for MATLABSystem: '<S17>/SourceBlock'
    guidance_t2_DW.obj_ck.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_ck.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      guidance_t2_B.cv2[i] = tmp_e[i];
    }

    guidance_t2_B.cv2[19] = '\x00';
    Sub_guidance_t2_467.createSubscriber(guidance_t2_B.cv2, 1);
    guidance_t2_DW.obj_ck.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S17>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe8'

    // Start for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    guidance_t2_DW.obj_c.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 31; i++) {
      guidance_t2_B.cv[i] = tmp_f[i];
    }

    guidance_t2_B.cv[31] = '\x00';
    Pub_guidance_t2_350.createPublisher(guidance_t2_B.cv, 1);
    guidance_t2_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish2'

    // Start for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    guidance_t2_DW.obj_o.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_0[i] = tmp_c[i];
    }

    tmp_0[11] = '\x00';
    Pub_guidance_t2_475.createPublisher(tmp_0, 1);
    guidance_t2_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish3'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    guidance_t2_DW.obj_c5.matlabCodegenIsDeleted = false;
    guidance_t2_DW.obj_c5.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      tmp[i] = tmp_g[i];
    }

    tmp[13] = '\x00';
    Pub_guidance_t2_446.createPublisher(tmp, 1);
    guidance_t2_DW.obj_c5.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S23>/Out1'
    guidance_t2_B.In1_h = guidance_t2_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S12>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S24>/Out1'
    guidance_t2_B.In1_f = guidance_t2_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S12>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S25>/Out1'
    guidance_t2_B.In1_d = guidance_t2_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe5'
    // SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S26>/Out1'
    guidance_t2_B.In1_o = guidance_t2_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S21>/Out1'
    guidance_t2_B.In1_hy = guidance_t2_P.Out1_Y0_c;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S22>/Out1'
    guidance_t2_B.In1_n = guidance_t2_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S15>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S27>/Out1'
    guidance_t2_B.In1_j = guidance_t2_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S15>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe7'
    // SystemInitialize for Enabled SubSystem: '<S16>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S28>/Out1'
    guidance_t2_B.In1 = guidance_t2_P.Out1_Y0_nu;

    // End of SystemInitialize for SubSystem: '<S16>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe7'

    // SystemInitialize for MATLAB Function: '<Root>/first'
    guidance_t2_DW.yaw_mem = 0.0;
    guidance_t2_DW.hz_20 = 0.0;
    memset(&guidance_t2_DW.pixel_temp[0], 0, 10U * sizeof(real_T));
    guidance_t2_DW.landing_x = 0.0;
    guidance_t2_DW.landing_y = 0.0;
    guidance_t2_DW.landing_hz = 0.0;
    guidance_t2_DW.landing_not_found = 0.0;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe9'
    // SystemInitialize for Enabled SubSystem: '<S18>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S30>/Out1'
    guidance_t2_B.In1_l = guidance_t2_P.Out1_Y0_g;

    // End of SystemInitialize for SubSystem: '<S18>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe9'

    // SystemInitialize for MATLAB Function: '<Root>/inlier '
    guidance_t2_DW.XYZ_cmd_temp[0] = 0.0;
    guidance_t2_DW.XYZ_cmd_temp[1] = 0.0;
    guidance_t2_DW.XYZ_cmd_temp[2] = 0.0;
    guidance_t2_DW.hover_pose_saved = false;
  }
}

// Model terminate function
void guidance_t2_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_d);

  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S12>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_b);

  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe4'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_j);

  // End of Terminate for SubSystem: '<Root>/Subscribe4'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe5'
  // Terminate for MATLABSystem: '<S14>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Subscribe5'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_l);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_fy);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe6'
  // Terminate for MATLABSystem: '<S15>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_n);

  // End of Terminate for SubSystem: '<Root>/Subscribe6'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe7'
  // Terminate for MATLABSystem: '<S16>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_ks);

  // End of Terminate for SubSystem: '<Root>/Subscribe7'

  // Terminate for MATLABSystem: '<Root>/Get Parameter'
  matlabCodegenHandle_matlabCodeg(&guidance_t2_DW.obj);

  // Terminate for Atomic SubSystem: '<Root>/Subscribe9'
  // Terminate for MATLABSystem: '<S18>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_g);

  // End of Terminate for SubSystem: '<Root>/Subscribe9'

  // Terminate for MATLABSystem: '<Root>/Get Parameter1'
  matlabCodegenHandle_matlabCodeg(&guidance_t2_DW.obj_k);

  // Terminate for Atomic SubSystem: '<Root>/Subscribe8'
  // Terminate for MATLABSystem: '<S17>/SourceBlock'
  matlabCodegenHandle_matla_hwj5l(&guidance_t2_DW.obj_ck);

  // End of Terminate for SubSystem: '<Root>/Subscribe8'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  matlabCodegenHandle_matlabCo_hw(&guidance_t2_DW.obj_c);

  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  matlabCodegenHandle_matlabCo_hw(&guidance_t2_DW.obj_o);

  // End of Terminate for SubSystem: '<Root>/Publish3'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  matlabCodegenHandle_matlabCo_hw(&guidance_t2_DW.obj_c5);

  // End of Terminate for SubSystem: '<Root>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
