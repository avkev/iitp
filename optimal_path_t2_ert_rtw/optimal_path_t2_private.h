//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: optimal_path_t2_private.h
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
#ifndef RTW_HEADER_optimal_path_t2_private_h_
#define RTW_HEADER_optimal_path_t2_private_h_
#include "rtwtypes.h"
#include "optimal_path_t2.h"

extern real_T rt_roundd_snf(real_T u);
extern real32_T rt_roundf_snf(real32_T u);
extern real_T rt_remd_snf(real_T u0, real_T u1);
extern int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator);
extern void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
extern uint32_T mul_u32_sat(uint32_T a, uint32_T b);
extern void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
extern int32_T mul_s32_sat(int32_T a, int32_T b);
extern void optimal_path_t2_MATLABFunction1(const real_T rtu_data[3], real32_T
  rty_test[128], uint32_T *rty_SL);
extern void optimal_path_t_MATLABFunction10(const real32_T rtu_data[128],
  real32_T rty_test[128], uint32_T *rty_SL);

#endif                                 // RTW_HEADER_optimal_path_t2_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
