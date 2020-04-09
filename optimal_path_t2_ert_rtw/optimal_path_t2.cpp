//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: optimal_path_t2.cpp
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
#include "optimal_path_t2.h"
#include "optimal_path_t2_private.h"

// Block signals (default storage)
B_optimal_path_t2_T optimal_path_t2_B;

// Block states (default storage)
DW_optimal_path_t2_T optimal_path_t2_DW;

// Real-time model
RT_MODEL_optimal_path_t2_T optimal_path_t2_M_ = RT_MODEL_optimal_path_t2_T();
RT_MODEL_optimal_path_t2_T *const optimal_path_t2_M = &optimal_path_t2_M_;

// Forward declaration for local functions
static void optimal_pat_Subscriber_stepImpl(boolean_T *isNewData,
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 *msg);
static void optimal_path_t2_SystemCore_step(boolean_T *varargout_1, uint32_T
  *varargout_2_Height, uint32_T *varargout_2_Width, boolean_T
  *varargout_2_IsBigendian, uint32_T *varargout_2_PointStep, uint32_T
  *varargout_2_RowStep, boolean_T *varargout_2_IsDense, uint8_T
  varargout_2_Data[600000], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T *
  varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Header_Seq, uint8_T
  varargout_2_Header_FrameId[128], uint32_T *varargout_2_Header_FrameId_SL_I,
  uint32_T *varargout_2_Header_FrameId_SL_0,
  SL_Bus_optimal_path_t2_ros_time_Time *varargout_2_Header_Stamp,
  SL_Bus_optimal_path_t2_sensor_msgs_PointField varargout_2_Fields[16],
  SL_Bus_ROSVariableLengthArrayInfo *varargout_2_Fields_SL_Info, boolean_T
  *varargout_2_PreserveStructureOn);
static uint32_T PointCloud2BusWrapper_getFieldI(const
  c_ros_slros_internal_block_Po_T *obj);
static uint32_T PointCloud2BusWrapper_getFiel_n(const
  c_ros_slros_internal_block_Po_T *obj);
static uint32_T PointCloud2BusWrapper_getFie_nh(const
  c_ros_slros_internal_block_Po_T *obj);
static uint32_T PointCloud2BusWrapper_getFi_nhj(const
  c_ros_slros_internal_block_Po_T *obj);
static uint32_T PointCloud2BusWrapper_getF_nhjw(const
  c_ros_slros_internal_block_Po_T *obj);
static void PointCloud2BusWrapper_get_Data(const c_ros_slros_internal_block_Po_T
  *obj, uint8_T val_data[], int32_T *val_size);
static void PointCloud2Types_rosToMATLABTyp(uint8_T type, char_T mlType_data[],
  int32_T mlType_size[2], real_T *numBytes);
static void optimal_path_t2_bsxfun(const real_T a_data[], const int32_T *a_size,
  const real_T b_data[], const int32_T b_size[2], real_T c_data[], int32_T
  c_size[2]);
static void PointCloud2Reader_getByteIndexF(const
  c_ros_slros_internal_block_Po_T *pc, uint32_T fieldIdx, const real_T
  pointIndices[650000], real_T byteIdx_data[], int32_T byteIdx_size[2],
  boolean_T pointIdxIsValid[650000]);
static void optimal_path_t2_typecast(const uint8_T x_data[], const int32_T
  *x_size, real32_T y_data[], int32_T *y_size);
static boolean_T optimal_path_t2_any(const boolean_T x[650000]);
static void PointCloud2Reader_readFieldFrom(const uint8_T data_data[], const
  real_T byteIdx_data[], const int32_T byteIdx_size[2], const boolean_T
  pointIdxIsValid[650000], real32_T fieldPoints_data[], int32_T
  *fieldPoints_size);
static void optim_PointCloud2Reader_readXYZ(const
  c_ros_slros_internal_block_Po_T *pc, uint32_T xIdx, uint32_T yIdx, uint32_T
  zIdx, const real_T pointIndices[650000], real32_T xyz_data[], int32_T
  xyz_size[2]);
static void optimal_path_t2_typecast_n(const uint8_T x_data[], const int32_T
  *x_size, uint8_T y_data[], int32_T *y_size);
static void PointCloud2Reader_readFieldFr_n(const uint8_T data_data[], const
  real_T byteIdx_data[], const int32_T byteIdx_size[2], const boolean_T
  pointIdxIsValid[650000], uint8_T fieldPoints_data[], int32_T fieldPoints_size
  [2]);
static void optim_PointCloud2Reader_readRGB(const
  c_ros_slros_internal_block_Po_T *pc, uint32_T rgbIdx, const real_T
  pointIndices[650000], real_T rgb[1950000]);
static void op_ReadPointCloud_resizeOutputs(const real32_T xyzIn_data[], const
  int32_T xyzIn_size[2], const real_T rgbIn_data[], const real32_T
  intensityIn_data[], uint32_T pcHeight, uint32_T pcWidth, real32_T xyz_data[],
  int32_T xyz_size[2], real_T rgb_data[], int32_T rgb_size[2], real32_T
  intensity_data[], int32_T *intensity_size);
static void optimal_ReadPointCloud_stepImpl(const
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 *busstruct, real32_T
  varargout_1_data[], int32_T varargout_1_size[2]);
static boolean_T optimal_path_t2_sortLE(const int16_T v_data[], const int32_T
  v_size[2], const int32_T dir_data[], const int32_T dir_size[2], int32_T idx1,
  int32_T idx2);
static void optimal_path_t2_mergesort(int32_T idx_data[], const int16_T x_data[],
  const int32_T x_size[2], const int32_T dir_data[], const int32_T dir_size[2],
  int32_T n);
static void optimal_path_t2_sortIdx(const int16_T x_data[], const int32_T
  x_size[2], const int32_T col_data[], const int32_T col_size[2], int32_T
  idx_data[], int32_T *idx_size);
static void optimal_p_apply_row_permutation(int16_T y_data[], const int32_T
  y_size[2], const int32_T idx_data[]);
static void optimal_path_t2_sortrows(int16_T y_data[], const int32_T y_size[2],
  real_T ndx_data[], int32_T *ndx_size);
static boolean_T optimal_path_t2_rows_differ(const int16_T b_data[], const
  int32_T b_size[2], int32_T k0, int32_T k);
static void optimal_path_t2_abs(const real_T x[3], real_T y[3]);
static void optimal_path_t2_power(const real_T a[3], real_T y[3]);
static real_T optimal_path_t2_sum(const real_T x[3]);
static void optimal_path_t2_abs_l(const int32_T x[3], int32_T y[3]);
static void optimal_path_t2_power_e(const int32_T a[3], int32_T y[3]);
static real_T optimal_path_t2_sum_i(const int32_T x[3]);
static void optimal_path_t2_eml_find(const boolean_T x[65000], int32_T i_data[],
  int32_T *i_size, int32_T j_data[], int32_T *j_size);
static int32_T optimal_path_t2_abs_li(int32_T x);
static void optimal_path_t2_flip(real32_T x[128]);
static void matlabCodegenHandle_m_nhjwvvggb(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCo_nh(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_ma_nhjwvvgg(ros_slros_internal_block_Serv_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_SetP_T *obj);
int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator)
{
  uint32_T absNumerator;
  uint32_T absDenominator;
  uint32_T tempAbsQuotient;
  boolean_T quotientNeedsNegation;
  absNumerator = numerator < 0 ? ~static_cast<uint32_T>(numerator) + 1U :
    static_cast<uint32_T>(numerator);
  absDenominator = denominator < 0 ? ~static_cast<uint32_T>(denominator) + 1U :
    static_cast<uint32_T>(denominator);
  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  tempAbsQuotient = absNumerator / absDenominator;
  if (quotientNeedsNegation) {
    absNumerator %= absDenominator;
    if (absNumerator > 0U) {
      tempAbsQuotient++;
    }
  }

  return quotientNeedsNegation ? -static_cast<int32_T>(tempAbsQuotient) :
    static_cast<int32_T>(tempAbsQuotient);
}

void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T outBitsLo;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

uint32_T mul_u32_sat(uint32_T a, uint32_T b)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  if (u32_chi) {
    result = MAX_uint32_T;
  }

  return result;
}

void mul_wide_s32(int32_T in0, int32_T in1, uint32_T *ptrOutBitsHi, uint32_T
                  *ptrOutBitsLo)
{
  uint32_T absIn0;
  uint32_T absIn1;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  absIn0 = in0 < 0 ? ~static_cast<uint32_T>(in0) + 1U : static_cast<uint32_T>
    (in0);
  absIn1 = in1 < 0 ? ~static_cast<uint32_T>(in1) + 1U : static_cast<uint32_T>
    (in1);
  in0Hi = absIn0 >> 16U;
  in0Lo = absIn0 & 65535U;
  in1Hi = absIn1 >> 16U;
  absIn0 = absIn1 & 65535U;
  productHiLo = in0Hi * absIn0;
  productLoHi = in0Lo * in1Hi;
  absIn0 *= in0Lo;
  absIn1 = 0U;
  in0Lo = (productLoHi << /*MW:OvBitwiseOk*/ 16U) + /*MW:OvCarryOk*/ absIn0;
  if (in0Lo < absIn0) {
    absIn1 = 1U;
  }

  absIn0 = in0Lo;
  in0Lo += /*MW:OvCarryOk*/ productHiLo << /*MW:OvBitwiseOk*/ 16U;
  if (in0Lo < absIn0) {
    absIn1++;
  }

  absIn0 = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi) +
    absIn1;
  if (static_cast<int32_T>(((in0 != 0) && ((in1 != 0) && ((in0 > 0) != (in1 > 0))))))
  {
    absIn0 = ~absIn0;
    in0Lo = ~in0Lo;
    in0Lo++;
    if (in0Lo == 0U) {
      absIn0++;
    }
  }

  *ptrOutBitsHi = absIn0;
  *ptrOutBitsLo = in0Lo;
}

int32_T mul_s32_sat(int32_T a, int32_T b)
{
  int32_T result;
  uint32_T u32_chi;
  uint32_T u32_clo;
  mul_wide_s32(a, b, &u32_chi, &u32_clo);
  if ((static_cast<int32_T>(u32_chi) > 0) || ((u32_chi == 0U) && (u32_clo >=
        2147483648U))) {
    result = MAX_int32_T;
  } else if ((static_cast<int32_T>(u32_chi) < -1) || ((static_cast<int32_T>
               (u32_chi) == -1) && (u32_clo < 2147483648U))) {
    result = MIN_int32_T;
  } else {
    result = static_cast<int32_T>(u32_clo);
  }

  return result;
}

//
// Output and update for atomic system:
//    '<Root>/MATLAB Function1'
//    '<Root>/MATLAB Function2'
//    '<Root>/MATLAB Function3'
//
void optimal_path_t2_MATLABFunction1(const real_T rtu_data[3], real32_T
  rty_test[128], uint32_T *rty_SL)
{
  int32_T i;
  rty_test[0] = static_cast<real32_T>(rtu_data[0]);
  rty_test[1] = static_cast<real32_T>(rtu_data[1]);
  rty_test[2] = static_cast<real32_T>(rtu_data[2]);
  for (i = 0; i < 125; i++) {
    rty_test[i + 3] = (rtNaNF);
  }

  *rty_SL = 3U;
}

//
// Output and update for atomic system:
//    '<Root>/MATLAB Function10'
//    '<Root>/MATLAB Function9'
//
void optimal_path_t_MATLABFunction10(const real32_T rtu_data[128], real32_T
  rty_test[128], uint32_T *rty_SL)
{
  memcpy(&rty_test[0], &rtu_data[0], sizeof(real32_T) << 7U);
  *rty_SL = 128U;
}

static void optimal_pat_Subscriber_stepImpl(boolean_T *isNewData,
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 *msg)
{
  *isNewData = Sub_optimal_path_t2_457.getLatestMessage(msg);
}

static void optimal_path_t2_SystemCore_step(boolean_T *varargout_1, uint32_T
  *varargout_2_Height, uint32_T *varargout_2_Width, boolean_T
  *varargout_2_IsBigendian, uint32_T *varargout_2_PointStep, uint32_T
  *varargout_2_RowStep, boolean_T *varargout_2_IsDense, uint8_T
  varargout_2_Data[600000], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T *
  varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Header_Seq, uint8_T
  varargout_2_Header_FrameId[128], uint32_T *varargout_2_Header_FrameId_SL_I,
  uint32_T *varargout_2_Header_FrameId_SL_0,
  SL_Bus_optimal_path_t2_ros_time_Time *varargout_2_Header_Stamp,
  SL_Bus_optimal_path_t2_sensor_msgs_PointField varargout_2_Fields[16],
  SL_Bus_ROSVariableLengthArrayInfo *varargout_2_Fields_SL_Info, boolean_T
  *varargout_2_PreserveStructureOn)
{
  optimal_pat_Subscriber_stepImpl(varargout_1, &optimal_path_t2_B.b_varargout_2);
  *varargout_2_Height = optimal_path_t2_B.b_varargout_2.Height;
  *varargout_2_Width = optimal_path_t2_B.b_varargout_2.Width;
  *varargout_2_IsBigendian = optimal_path_t2_B.b_varargout_2.IsBigendian;
  *varargout_2_PointStep = optimal_path_t2_B.b_varargout_2.PointStep;
  *varargout_2_RowStep = optimal_path_t2_B.b_varargout_2.RowStep;
  *varargout_2_IsDense = optimal_path_t2_B.b_varargout_2.IsDense;
  memcpy(&varargout_2_Data[0], &optimal_path_t2_B.b_varargout_2.Data[0], 600000U
         * sizeof(uint8_T));
  *varargout_2_Data_SL_Info_Curren =
    optimal_path_t2_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    optimal_path_t2_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Header_Seq = optimal_path_t2_B.b_varargout_2.Header.Seq;
  memcpy(&varargout_2_Header_FrameId[0],
         &optimal_path_t2_B.b_varargout_2.Header.FrameId[0], sizeof(uint8_T) <<
         7U);
  *varargout_2_Header_FrameId_SL_I =
    optimal_path_t2_B.b_varargout_2.Header.FrameId_SL_Info.CurrentLength;
  *varargout_2_Header_FrameId_SL_0 =
    optimal_path_t2_B.b_varargout_2.Header.FrameId_SL_Info.ReceivedLength;
  *varargout_2_Header_Stamp = optimal_path_t2_B.b_varargout_2.Header.Stamp;
  memcpy(&varargout_2_Fields[0], &optimal_path_t2_B.b_varargout_2.Fields[0],
         sizeof(SL_Bus_optimal_path_t2_sensor_msgs_PointField) << 4U);
  *varargout_2_Fields_SL_Info = optimal_path_t2_B.b_varargout_2.Fields_SL_Info;
  *varargout_2_PreserveStructureOn =
    optimal_path_t2_B.b_varargout_2.PreserveStructureOnRead;
}

static uint32_T PointCloud2BusWrapper_getFieldI(const
  c_ros_slros_internal_block_Po_T *obj)
{
  uint32_T fieldIdx;
  uint32_T i;
  int32_T b_i;
  boolean_T out;
  boolean_T exitg1;
  fieldIdx = 0U;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= static_cast<int32_T>(obj->NumFields) - 1)) {
    i = b_i + 1U;
    out = false;
    if (!(static_cast<int8_T>(obj->BusStruct.Fields[static_cast<int32_T>(i) - 1]
          .Name[0]) != 'x')) {
      out = true;
    }

    if (out) {
      fieldIdx = i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  return fieldIdx;
}

static uint32_T PointCloud2BusWrapper_getFiel_n(const
  c_ros_slros_internal_block_Po_T *obj)
{
  uint32_T fieldIdx;
  uint32_T i;
  int32_T b_i;
  boolean_T out;
  boolean_T exitg1;
  fieldIdx = 0U;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= static_cast<int32_T>(obj->NumFields) - 1)) {
    i = b_i + 1U;
    out = false;
    if (!(static_cast<int8_T>(obj->BusStruct.Fields[static_cast<int32_T>(i) - 1]
          .Name[0]) != 'y')) {
      out = true;
    }

    if (out) {
      fieldIdx = i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  return fieldIdx;
}

static uint32_T PointCloud2BusWrapper_getFie_nh(const
  c_ros_slros_internal_block_Po_T *obj)
{
  uint32_T fieldIdx;
  uint32_T i;
  int32_T b_i;
  boolean_T out;
  boolean_T exitg1;
  fieldIdx = 0U;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= static_cast<int32_T>(obj->NumFields) - 1)) {
    i = b_i + 1U;
    out = false;
    if (!(static_cast<int8_T>(obj->BusStruct.Fields[static_cast<int32_T>(i) - 1]
          .Name[0]) != 'z')) {
      out = true;
    }

    if (out) {
      fieldIdx = i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  return fieldIdx;
}

static uint32_T PointCloud2BusWrapper_getFi_nhj(const
  c_ros_slros_internal_block_Po_T *obj)
{
  uint32_T fieldIdx;
  uint32_T i;
  int32_T b_i;
  char_T b[3];
  int32_T ret;
  char_T a[3];
  boolean_T exitg1;
  fieldIdx = 0U;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= static_cast<int32_T>(obj->NumFields) - 1)) {
    i = b_i + 1U;
    ret = static_cast<int32_T>(i) - 1;
    b[0] = static_cast<int8_T>(obj->BusStruct.Fields[ret].Name[0]);
    a[0] = 'r';
    b[1] = static_cast<int8_T>(obj->BusStruct.Fields[ret].Name[1]);
    a[1] = 'g';
    b[2] = static_cast<int8_T>(obj->BusStruct.Fields[ret].Name[2]);
    a[2] = 'b';
    ret = memcmp(&a[0], &b[0], 3);
    if (ret == 0) {
      fieldIdx = i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  return fieldIdx;
}

static uint32_T PointCloud2BusWrapper_getF_nhjw(const
  c_ros_slros_internal_block_Po_T *obj)
{
  uint32_T fieldIdx;
  uint32_T i;
  int32_T b_i;
  char_T b[9];
  int32_T ret;
  char_T a[9];
  static const char_T tmp[9] = { 'i', 'n', 't', 'e', 'n', 's', 'i', 't', 'y' };

  boolean_T exitg1;
  fieldIdx = 0U;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= static_cast<int32_T>(obj->NumFields) - 1)) {
    i = b_i + 1U;
    for (ret = 0; ret < 9; ret++) {
      b[ret] = static_cast<int8_T>(obj->BusStruct.Fields[static_cast<int32_T>(i)
        - 1].Name[ret]);
      a[ret] = tmp[ret];
    }

    ret = memcmp(&a[0], &b[0], 9);
    if (ret == 0) {
      fieldIdx = i;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  return fieldIdx;
}

static void PointCloud2BusWrapper_get_Data(const c_ros_slros_internal_block_Po_T
  *obj, uint8_T val_data[], int32_T *val_size)
{
  int32_T c;
  if (1U > obj->BusStruct.Data_SL_Info.CurrentLength) {
    c = -1;
  } else {
    c = static_cast<int32_T>(obj->BusStruct.Data_SL_Info.CurrentLength) - 1;
  }

  *val_size = c + 1;
  if (0 <= c) {
    memcpy(&val_data[0], &obj->BusStruct.Data[0], (c + 1) * sizeof(uint8_T));
  }
}

static void PointCloud2Types_rosToMATLABTyp(uint8_T type, char_T mlType_data[],
  int32_T mlType_size[2], real_T *numBytes)
{
  int32_T i;
  static const char_T tmp[5] = { 'u', 'i', 'n', 't', '8' };

  static const char_T tmp_0[5] = { 'i', 'n', 't', '1', '6' };

  static const char_T tmp_1[6] = { 'u', 'i', 'n', 't', '1', '6' };

  static const char_T tmp_2[5] = { 'i', 'n', 't', '3', '2' };

  static const char_T tmp_3[6] = { 'u', 'i', 'n', 't', '3', '2' };

  static const char_T tmp_4[6] = { 's', 'i', 'n', 'g', 'l', 'e' };

  static const char_T tmp_5[6] = { 'd', 'o', 'u', 'b', 'l', 'e' };

  switch (type) {
   case 1:
    mlType_size[0] = 1;
    mlType_size[1] = 4;
    mlType_data[0] = 'i';
    mlType_data[1] = 'n';
    mlType_data[2] = 't';
    mlType_data[3] = '8';
    *numBytes = 1.0;
    break;

   case 2:
    mlType_size[0] = 1;
    mlType_size[1] = 5;
    for (i = 0; i < 5; i++) {
      mlType_data[i] = tmp[i];
    }

    *numBytes = 1.0;
    break;

   case 3:
    mlType_size[0] = 1;
    mlType_size[1] = 5;
    for (i = 0; i < 5; i++) {
      mlType_data[i] = tmp_0[i];
    }

    *numBytes = 2.0;
    break;

   case 4:
    mlType_size[0] = 1;
    mlType_size[1] = 6;
    for (i = 0; i < 6; i++) {
      mlType_data[i] = tmp_1[i];
    }

    *numBytes = 2.0;
    break;

   case 5:
    mlType_size[0] = 1;
    mlType_size[1] = 5;
    for (i = 0; i < 5; i++) {
      mlType_data[i] = tmp_2[i];
    }

    *numBytes = 4.0;
    break;

   case 6:
    mlType_size[0] = 1;
    mlType_size[1] = 6;
    for (i = 0; i < 6; i++) {
      mlType_data[i] = tmp_3[i];
    }

    *numBytes = 4.0;
    break;

   case 7:
    mlType_size[0] = 1;
    mlType_size[1] = 6;
    for (i = 0; i < 6; i++) {
      mlType_data[i] = tmp_4[i];
    }

    *numBytes = 4.0;
    break;

   case 8:
    mlType_size[0] = 1;
    mlType_size[1] = 6;
    for (i = 0; i < 6; i++) {
      mlType_data[i] = tmp_5[i];
    }

    *numBytes = 8.0;
    break;
  }
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void optimal_path_t2_bsxfun(const real_T a_data[], const int32_T *a_size,
  const real_T b_data[], const int32_T b_size[2], real_T c_data[], int32_T
  c_size[2])
{
  int32_T bcoef;
  int32_T ib;
  int32_T d;
  int32_T k;
  int32_T acoef;
  int32_T k_0;
  int32_T csz_idx_0;
  csz_idx_0 = *a_size;
  c_size[0] = *a_size;
  c_size[1] = b_size[1];
  if (*a_size != 0) {
    bcoef = (b_size[1] != 1);
    d = b_size[1];
    for (k = 0; k < d; k++) {
      ib = bcoef * k;
      acoef = (*a_size != 1);
      for (k_0 = 0; k_0 < csz_idx_0; k_0++) {
        c_data[k_0 + *a_size * k] = a_data[acoef * k_0] + b_data[ib];
      }
    }
  }
}

static void PointCloud2Reader_getByteIndexF(const
  c_ros_slros_internal_block_Po_T *pc, uint32_T fieldIdx, const real_T
  pointIndices[650000], real_T byteIdx_data[], int32_T byteIdx_size[2],
  boolean_T pointIdxIsValid[650000])
{
  int32_T pc_size;
  boolean_T e;
  boolean_T f;
  uint32_T qY;
  int32_T byteIdx_size_tmp;
  PointCloud2BusWrapper_get_Data(pc, optimal_path_t2_B.b_data,
    &optimal_path_t2_B.b_size);
  optimal_path_t2_B.u = static_cast<real_T>(optimal_path_t2_B.b_size) /
    static_cast<real_T>(pc->BusStruct.PointStep);
  if (optimal_path_t2_B.u < 0.0) {
    optimal_path_t2_B.u = ceil(optimal_path_t2_B.u);
  } else {
    optimal_path_t2_B.u = floor(optimal_path_t2_B.u);
  }

  optimal_path_t2_B.numPointsActual = mul_u32_sat(pc->BusStruct.Height,
    pc->BusStruct.Width);
  if ((!rtIsNaN(optimal_path_t2_B.u)) && (optimal_path_t2_B.numPointsActual >
       optimal_path_t2_B.u)) {
    if (optimal_path_t2_B.u >= 0.0) {
      optimal_path_t2_B.numPointsActual = static_cast<uint32_T>
        (optimal_path_t2_B.u);
    } else {
      optimal_path_t2_B.numPointsActual = 0U;
    }
  }

  PointCloud2Types_rosToMATLABTyp(pc->BusStruct.Fields[static_cast<int32_T>
    (fieldIdx) - 1].Datatype, optimal_path_t2_B.unusedU0_data,
    optimal_path_t2_B.unusedU0_size, &optimal_path_t2_B.u);
  byteIdx_size[0] = 650000;
  byteIdx_size_tmp = static_cast<int32_T>(optimal_path_t2_B.u);
  byteIdx_size[1] = byteIdx_size_tmp;
  optimal_path_t2_B.loop_ub_f = 650000 * byteIdx_size_tmp - 1;
  if (0 <= optimal_path_t2_B.loop_ub_f) {
    memset(&byteIdx_data[0], 0, (optimal_path_t2_B.loop_ub_f + 1) * sizeof
           (real_T));
  }

  byteIdx_size_tmp = 0;
  for (optimal_path_t2_B.b_i = 0; optimal_path_t2_B.b_i < 650000;
       optimal_path_t2_B.b_i++) {
    e = (0.0 < pointIndices[optimal_path_t2_B.b_i]);
    f = (pointIndices[optimal_path_t2_B.b_i] <=
         optimal_path_t2_B.numPointsActual);
    pointIdxIsValid[optimal_path_t2_B.b_i] = (e && f);
    if (e && f) {
      byteIdx_size_tmp++;
    }

    optimal_path_t2_B.e[optimal_path_t2_B.b_i] = e;
    optimal_path_t2_B.f[optimal_path_t2_B.b_i] = f;
  }

  optimal_path_t2_B.loop_ub_f = byteIdx_size_tmp;
  byteIdx_size_tmp = 0;
  for (optimal_path_t2_B.b_i = 0; optimal_path_t2_B.b_i < 650000;
       optimal_path_t2_B.b_i++) {
    if (optimal_path_t2_B.e[optimal_path_t2_B.b_i] &&
        optimal_path_t2_B.f[optimal_path_t2_B.b_i]) {
      optimal_path_t2_B.g_data[byteIdx_size_tmp] = optimal_path_t2_B.b_i + 1;
      byteIdx_size_tmp++;
    }
  }

  if (rtIsNaN(optimal_path_t2_B.u)) {
    optimal_path_t2_B.y_size[0] = 1;
    optimal_path_t2_B.y_size[1] = 1;
    optimal_path_t2_B.y_data_b[0] = (rtNaN);
  } else {
    optimal_path_t2_B.y_size[0] = 1;
    optimal_path_t2_B.b_i = static_cast<int32_T>(floor(optimal_path_t2_B.u - 1.0));
    optimal_path_t2_B.y_size[1] = optimal_path_t2_B.b_i + 1;
    for (byteIdx_size_tmp = 0; byteIdx_size_tmp <= optimal_path_t2_B.b_i;
         byteIdx_size_tmp++) {
      optimal_path_t2_B.y_data_b[byteIdx_size_tmp] = static_cast<real_T>
        (byteIdx_size_tmp) + 1.0;
    }
  }

  byteIdx_size_tmp = 0;
  for (optimal_path_t2_B.b_i = 0; optimal_path_t2_B.b_i < 650000;
       optimal_path_t2_B.b_i++) {
    if (optimal_path_t2_B.e[optimal_path_t2_B.b_i] &&
        optimal_path_t2_B.f[optimal_path_t2_B.b_i]) {
      optimal_path_t2_B.i_data[byteIdx_size_tmp] = optimal_path_t2_B.b_i + 1;
      byteIdx_size_tmp++;
    }
  }

  pc_size = optimal_path_t2_B.loop_ub_f;
  for (byteIdx_size_tmp = 0; byteIdx_size_tmp < optimal_path_t2_B.loop_ub_f;
       byteIdx_size_tmp++) {
    optimal_path_t2_B.numPointsActual = pc->BusStruct.Fields[static_cast<int32_T>
      (fieldIdx) - 1].Offset;
    optimal_path_t2_B.u = rt_roundd_snf
      (pointIndices[optimal_path_t2_B.g_data[byteIdx_size_tmp] - 1] - 1.0);
    if (optimal_path_t2_B.u < 4.294967296E+9) {
      if (optimal_path_t2_B.u >= 0.0) {
        qY = static_cast<uint32_T>(optimal_path_t2_B.u);
      } else {
        qY = 0U;
      }
    } else {
      qY = MAX_uint32_T;
    }

    qY = optimal_path_t2_B.numPointsActual + /*MW:OvSatOk*/ mul_u32_sat
      (pc->BusStruct.PointStep, qY);
    if (qY < optimal_path_t2_B.numPointsActual) {
      qY = MAX_uint32_T;
    }

    optimal_path_t2_B.pc_data[byteIdx_size_tmp] = qY;
  }

  optimal_path_t2_bsxfun(optimal_path_t2_B.pc_data, &pc_size,
    optimal_path_t2_B.y_data_b, optimal_path_t2_B.y_size,
    optimal_path_t2_B.tmp_data, optimal_path_t2_B.unusedU0_size);
  optimal_path_t2_B.loop_ub_f = optimal_path_t2_B.unusedU0_size[1];
  for (byteIdx_size_tmp = 0; byteIdx_size_tmp < optimal_path_t2_B.loop_ub_f;
       byteIdx_size_tmp++) {
    optimal_path_t2_B.b_i = optimal_path_t2_B.unusedU0_size[0];
    for (optimal_path_t2_B.i = 0; optimal_path_t2_B.i < optimal_path_t2_B.b_i;
         optimal_path_t2_B.i++) {
      byteIdx_data[(optimal_path_t2_B.i_data[optimal_path_t2_B.i] + 650000 *
                    byteIdx_size_tmp) - 1] =
        optimal_path_t2_B.tmp_data[optimal_path_t2_B.unusedU0_size[0] *
        byteIdx_size_tmp + optimal_path_t2_B.i];
    }
  }
}

static void optimal_path_t2_typecast(const uint8_T x_data[], const int32_T
  *x_size, real32_T y_data[], int32_T *y_size)
{
  int32_T ny;
  if (*x_size == 0) {
    ny = 0;
  } else {
    ny = *x_size >> 2;
  }

  *y_size = ny;
  memcpy((void *)&y_data[0], (void *)&x_data[0], (uint32_T)((size_t)ny * sizeof
          (real32_T)));
}

static boolean_T optimal_path_t2_any(const boolean_T x[650000])
{
  boolean_T y;
  int32_T b_k;
  boolean_T exitg1;
  y = false;
  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 650000)) {
    if (!x[b_k]) {
      b_k++;
    } else {
      y = true;
      exitg1 = true;
    }
  }

  return y;
}

static void PointCloud2Reader_readFieldFrom(const uint8_T data_data[], const
  real_T byteIdx_data[], const int32_T byteIdx_size[2], const boolean_T
  pointIdxIsValid[650000], real32_T fieldPoints_data[], int32_T
  *fieldPoints_size)
{
  int32_T b_trueCount;
  int32_T d_i;
  int32_T d_size;
  int32_T g_size_idx_1;
  b_trueCount = 0;
  for (d_i = 0; d_i < 650000; d_i++) {
    if (pointIdxIsValid[d_i]) {
      b_trueCount++;
    }
  }

  g_size_idx_1 = b_trueCount;
  b_trueCount = 0;
  for (d_i = 0; d_i < 650000; d_i++) {
    if (pointIdxIsValid[d_i]) {
      optimal_path_t2_B.g_data_g[b_trueCount] = d_i + 1;
      b_trueCount++;
    }
  }

  d_i = byteIdx_size[1];
  for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
    for (d_size = 0; d_size < d_i; d_size++) {
      optimal_path_t2_B.data_data_c[d_size + d_i * b_trueCount] = data_data[
        static_cast<int32_T>(byteIdx_data[(650000 * d_size +
        optimal_path_t2_B.g_data_g[b_trueCount]) - 1]) - 1];
    }
  }

  g_size_idx_1 *= byteIdx_size[1];
  if (0 <= g_size_idx_1 - 1) {
    memcpy(&optimal_path_t2_B.data_data[0], &optimal_path_t2_B.data_data_c[0],
           g_size_idx_1 * sizeof(uint8_T));
  }

  optimal_path_t2_typecast(optimal_path_t2_B.data_data, &g_size_idx_1,
    optimal_path_t2_B.d_data, &d_size);
  if (0 <= d_size - 1) {
    memcpy(&optimal_path_t2_B.validPoints_data[0], &optimal_path_t2_B.d_data[0],
           d_size * sizeof(real32_T));
  }

  for (b_trueCount = 0; b_trueCount < 650000; b_trueCount++) {
    optimal_path_t2_B.pointIdxIsValid_l[b_trueCount] =
      !pointIdxIsValid[b_trueCount];
  }

  if (optimal_path_t2_any(optimal_path_t2_B.pointIdxIsValid_l)) {
    *fieldPoints_size = 650000;
    b_trueCount = 0;
    for (d_i = 0; d_i < 650000; d_i++) {
      fieldPoints_data[d_i] = (rtNaNF);
      if (pointIdxIsValid[d_i]) {
        optimal_path_t2_B.i_data_g[b_trueCount] = d_i + 1;
        b_trueCount++;
      }
    }

    for (b_trueCount = 0; b_trueCount < d_size; b_trueCount++) {
      fieldPoints_data[optimal_path_t2_B.i_data_g[b_trueCount] - 1] =
        optimal_path_t2_B.validPoints_data[b_trueCount];
    }
  } else {
    *fieldPoints_size = d_size;
    if (0 <= d_size - 1) {
      memcpy(&fieldPoints_data[0], &optimal_path_t2_B.validPoints_data[0],
             d_size * sizeof(real32_T));
    }
  }
}

static void optim_PointCloud2Reader_readXYZ(const
  c_ros_slros_internal_block_Po_T *pc, uint32_T xIdx, uint32_T yIdx, uint32_T
  zIdx, const real_T pointIndices[650000], real32_T xyz_data[], int32_T
  xyz_size[2])
{
  PointCloud2BusWrapper_get_Data(pc, optimal_path_t2_B.data_data_l,
    &optimal_path_t2_B.data_size);
  PointCloud2Reader_getByteIndexF(pc, xIdx, pointIndices,
    optimal_path_t2_B.byteIdx_data_m, optimal_path_t2_B.byteIdx_size,
    optimal_path_t2_B.pointIdxIsValid_p);
  optimal_path_t2_B.yOff_tmp = static_cast<int32_T>(xIdx) - 1;
  optimal_path_t2_B.yOff = static_cast<real_T>(pc->BusStruct.Fields
    [static_cast<int32_T>(yIdx) - 1].Offset) - static_cast<real_T>
    (pc->BusStruct.Fields[optimal_path_t2_B.yOff_tmp].Offset);
  optimal_path_t2_B.zOff = static_cast<real_T>(pc->BusStruct.Fields
    [static_cast<int32_T>(zIdx) - 1].Offset) - static_cast<real_T>
    (pc->BusStruct.Fields[optimal_path_t2_B.yOff_tmp].Offset);
  PointCloud2Reader_readFieldFrom(optimal_path_t2_B.data_data_l,
    optimal_path_t2_B.byteIdx_data_m, optimal_path_t2_B.byteIdx_size,
    optimal_path_t2_B.pointIdxIsValid_p, optimal_path_t2_B.varargin_1_data,
    &optimal_path_t2_B.data_size);
  optimal_path_t2_B.byteIdx_size_h[0] = 650000;
  optimal_path_t2_B.byteIdx_size_h[1] = optimal_path_t2_B.byteIdx_size[1];
  optimal_path_t2_B.loop_ub_tmp = optimal_path_t2_B.byteIdx_size[0] *
    optimal_path_t2_B.byteIdx_size[1];
  for (optimal_path_t2_B.yOff_tmp = 0; optimal_path_t2_B.yOff_tmp <
       optimal_path_t2_B.loop_ub_tmp; optimal_path_t2_B.yOff_tmp++) {
    optimal_path_t2_B.byteIdx_data_c[optimal_path_t2_B.yOff_tmp] =
      optimal_path_t2_B.byteIdx_data_m[optimal_path_t2_B.yOff_tmp] +
      optimal_path_t2_B.yOff;
  }

  PointCloud2Reader_readFieldFrom(optimal_path_t2_B.data_data_l,
    optimal_path_t2_B.byteIdx_data_c, optimal_path_t2_B.byteIdx_size_h,
    optimal_path_t2_B.pointIdxIsValid_p, optimal_path_t2_B.varargin_2_data,
    &optimal_path_t2_B.varargin_2_size);
  optimal_path_t2_B.byteIdx_size_l[0] = 650000;
  optimal_path_t2_B.byteIdx_size_l[1] = optimal_path_t2_B.byteIdx_size[1];
  for (optimal_path_t2_B.yOff_tmp = 0; optimal_path_t2_B.yOff_tmp <
       optimal_path_t2_B.loop_ub_tmp; optimal_path_t2_B.yOff_tmp++) {
    optimal_path_t2_B.byteIdx_data_c[optimal_path_t2_B.yOff_tmp] =
      optimal_path_t2_B.byteIdx_data_m[optimal_path_t2_B.yOff_tmp] +
      optimal_path_t2_B.zOff;
  }

  PointCloud2Reader_readFieldFrom(optimal_path_t2_B.data_data_l,
    optimal_path_t2_B.byteIdx_data_c, optimal_path_t2_B.byteIdx_size_l,
    optimal_path_t2_B.pointIdxIsValid_p, optimal_path_t2_B.varargin_3_data,
    &optimal_path_t2_B.varargin_3_size);
  xyz_size[0] = optimal_path_t2_B.data_size;
  xyz_size[1] = 3;
  optimal_path_t2_B.loop_ub_tmp = optimal_path_t2_B.data_size;
  if (0 <= optimal_path_t2_B.loop_ub_tmp - 1) {
    memcpy(&xyz_data[0], &optimal_path_t2_B.varargin_1_data[0],
           optimal_path_t2_B.loop_ub_tmp * sizeof(real32_T));
  }

  optimal_path_t2_B.loop_ub_tmp = optimal_path_t2_B.varargin_2_size;
  for (optimal_path_t2_B.yOff_tmp = 0; optimal_path_t2_B.yOff_tmp <
       optimal_path_t2_B.loop_ub_tmp; optimal_path_t2_B.yOff_tmp++) {
    xyz_data[optimal_path_t2_B.yOff_tmp + optimal_path_t2_B.data_size] =
      optimal_path_t2_B.varargin_2_data[optimal_path_t2_B.yOff_tmp];
  }

  optimal_path_t2_B.loop_ub_tmp = optimal_path_t2_B.varargin_3_size;
  for (optimal_path_t2_B.yOff_tmp = 0; optimal_path_t2_B.yOff_tmp <
       optimal_path_t2_B.loop_ub_tmp; optimal_path_t2_B.yOff_tmp++) {
    xyz_data[(optimal_path_t2_B.yOff_tmp + optimal_path_t2_B.data_size) +
      optimal_path_t2_B.varargin_2_size] =
      optimal_path_t2_B.varargin_3_data[optimal_path_t2_B.yOff_tmp];
  }
}

static void optimal_path_t2_typecast_n(const uint8_T x_data[], const int32_T
  *x_size, uint8_T y_data[], int32_T *y_size)
{
  *y_size = *x_size;
  memcpy((void *)&y_data[0], (void *)&x_data[0], (uint32_T)((size_t)*x_size *
          sizeof(uint8_T)));
}

static void PointCloud2Reader_readFieldFr_n(const uint8_T data_data[], const
  real_T byteIdx_data[], const int32_T byteIdx_size[2], const boolean_T
  pointIdxIsValid[650000], uint8_T fieldPoints_data[], int32_T fieldPoints_size
  [2])
{
  int32_T b_trueCount;
  int32_T d_i;
  int32_T i;
  int32_T g_size_idx_1;
  b_trueCount = 0;
  for (d_i = 0; d_i < 650000; d_i++) {
    if (pointIdxIsValid[d_i]) {
      b_trueCount++;
    }
  }

  g_size_idx_1 = b_trueCount;
  b_trueCount = 0;
  for (d_i = 0; d_i < 650000; d_i++) {
    if (pointIdxIsValid[d_i]) {
      optimal_path_t2_B.g_data_m[b_trueCount] = d_i + 1;
      b_trueCount++;
    }
  }

  d_i = byteIdx_size[1];
  for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
    for (i = 0; i < d_i; i++) {
      optimal_path_t2_B.data_data_cv[i + d_i * b_trueCount] = data_data[
        static_cast<int32_T>(byteIdx_data[(650000 * i +
        optimal_path_t2_B.g_data_m[b_trueCount]) - 1]) - 1];
    }
  }

  g_size_idx_1 *= byteIdx_size[1];
  if (0 <= g_size_idx_1 - 1) {
    memcpy(&optimal_path_t2_B.data_data_p[0], &optimal_path_t2_B.data_data_cv[0],
           g_size_idx_1 * sizeof(uint8_T));
  }

  optimal_path_t2_typecast_n(optimal_path_t2_B.data_data_p, &g_size_idx_1,
    optimal_path_t2_B.data_data_cv, &b_trueCount);
  g_size_idx_1 = ((b_trueCount < 0 ? 3 : 0) + b_trueCount) >> 2;
  for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
    d_i = b_trueCount << 2;
    optimal_path_t2_B.validPoints_data_b[b_trueCount] =
      optimal_path_t2_B.data_data_cv[d_i];
    optimal_path_t2_B.validPoints_data_b[b_trueCount + g_size_idx_1] =
      optimal_path_t2_B.data_data_cv[d_i + 1];
  }

  for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
    optimal_path_t2_B.validPoints_data_b[b_trueCount + (g_size_idx_1 << 1)] =
      optimal_path_t2_B.data_data_cv[(b_trueCount << 2) + 2];
  }

  for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
    optimal_path_t2_B.validPoints_data_b[b_trueCount + g_size_idx_1 * 3] =
      optimal_path_t2_B.data_data_cv[(b_trueCount << 2) + 3];
  }

  for (b_trueCount = 0; b_trueCount < 650000; b_trueCount++) {
    optimal_path_t2_B.pointIdxIsValid_d[b_trueCount] =
      !pointIdxIsValid[b_trueCount];
  }

  if (optimal_path_t2_any(optimal_path_t2_B.pointIdxIsValid_d)) {
    fieldPoints_size[0] = 650000;
    fieldPoints_size[1] = 4;
    memset(&fieldPoints_data[0], 0, 2600000U * sizeof(uint8_T));
    b_trueCount = 0;
    for (d_i = 0; d_i < 650000; d_i++) {
      if (pointIdxIsValid[d_i]) {
        optimal_path_t2_B.i_data_n[b_trueCount] = d_i + 1;
        b_trueCount++;
      }
    }

    for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
      fieldPoints_data[optimal_path_t2_B.i_data_n[b_trueCount] - 1] =
        optimal_path_t2_B.validPoints_data_b[b_trueCount];
    }

    for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
      fieldPoints_data[optimal_path_t2_B.i_data_n[b_trueCount] + 649999] =
        optimal_path_t2_B.validPoints_data_b[b_trueCount + g_size_idx_1];
    }

    for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
      fieldPoints_data[optimal_path_t2_B.i_data_n[b_trueCount] + 1299999] =
        optimal_path_t2_B.validPoints_data_b[(g_size_idx_1 << 1) + b_trueCount];
    }

    for (b_trueCount = 0; b_trueCount < g_size_idx_1; b_trueCount++) {
      fieldPoints_data[optimal_path_t2_B.i_data_n[b_trueCount] + 1949999] =
        optimal_path_t2_B.validPoints_data_b[g_size_idx_1 * 3 + b_trueCount];
    }
  } else {
    fieldPoints_size[0] = g_size_idx_1;
    fieldPoints_size[1] = 4;
    d_i = (g_size_idx_1 << 2) - 1;
    if (0 <= d_i) {
      memcpy(&fieldPoints_data[0], &optimal_path_t2_B.validPoints_data_b[0],
             (d_i + 1) * sizeof(uint8_T));
    }
  }
}

static void optim_PointCloud2Reader_readRGB(const
  c_ros_slros_internal_block_Po_T *pc, uint32_T rgbIdx, const real_T
  pointIndices[650000], real_T rgb[1950000])
{
  PointCloud2Reader_getByteIndexF(pc, rgbIdx, pointIndices,
    optimal_path_t2_B.byteIdx_data_k, optimal_path_t2_B.byteIdx_size_b,
    optimal_path_t2_B.pointIdxIsValid_j);
  PointCloud2BusWrapper_get_Data(pc, optimal_path_t2_B.tmp_data_d,
    &optimal_path_t2_B.tmp_size_i);
  PointCloud2Reader_readFieldFr_n(optimal_path_t2_B.tmp_data_d,
    optimal_path_t2_B.byteIdx_data_k, optimal_path_t2_B.byteIdx_size_b,
    optimal_path_t2_B.pointIdxIsValid_j, optimal_path_t2_B.rgbRaw_data,
    optimal_path_t2_B.rgbRaw_size);
  for (optimal_path_t2_B.trueCount = 0; optimal_path_t2_B.trueCount < 1950000;
       optimal_path_t2_B.trueCount++) {
    rgb[optimal_path_t2_B.trueCount] = (rtNaN);
  }

  optimal_path_t2_B.trueCount = 0;
  for (optimal_path_t2_B.i_n = 0; optimal_path_t2_B.i_n < 650000;
       optimal_path_t2_B.i_n++) {
    if (optimal_path_t2_B.pointIdxIsValid_j[optimal_path_t2_B.i_n]) {
      optimal_path_t2_B.trueCount++;
    }
  }

  optimal_path_t2_B.c_size_idx_1 = optimal_path_t2_B.trueCount;
  optimal_path_t2_B.trueCount = 0;
  for (optimal_path_t2_B.i_n = 0; optimal_path_t2_B.i_n < 650000;
       optimal_path_t2_B.i_n++) {
    if (optimal_path_t2_B.pointIdxIsValid_j[optimal_path_t2_B.i_n]) {
      optimal_path_t2_B.c_data[optimal_path_t2_B.trueCount] =
        optimal_path_t2_B.i_n + 1;
      optimal_path_t2_B.trueCount++;
    }
  }

  optimal_path_t2_B.trueCount = 0;
  for (optimal_path_t2_B.i_n = 0; optimal_path_t2_B.i_n < 650000;
       optimal_path_t2_B.i_n++) {
    if (optimal_path_t2_B.pointIdxIsValid_j[optimal_path_t2_B.i_n]) {
      optimal_path_t2_B.e_data[optimal_path_t2_B.trueCount] =
        optimal_path_t2_B.i_n + 1;
      optimal_path_t2_B.trueCount++;
    }
  }

  for (optimal_path_t2_B.trueCount = 0; optimal_path_t2_B.trueCount < 3;
       optimal_path_t2_B.trueCount++) {
    for (optimal_path_t2_B.i_n = 0; optimal_path_t2_B.i_n <
         optimal_path_t2_B.c_size_idx_1; optimal_path_t2_B.i_n++) {
      rgb[(optimal_path_t2_B.e_data[optimal_path_t2_B.i_n] + 650000 *
           optimal_path_t2_B.trueCount) - 1] = static_cast<real_T>
        (optimal_path_t2_B.rgbRaw_data[((2 - optimal_path_t2_B.trueCount) *
          optimal_path_t2_B.rgbRaw_size[0] +
          optimal_path_t2_B.c_data[optimal_path_t2_B.i_n]) - 1]) / 255.0;
    }
  }
}

static void op_ReadPointCloud_resizeOutputs(const real32_T xyzIn_data[], const
  int32_T xyzIn_size[2], const real_T rgbIn_data[], const real32_T
  intensityIn_data[], uint32_T pcHeight, uint32_T pcWidth, real32_T xyz_data[],
  int32_T xyz_size[2], real_T rgb_data[], int32_T rgb_size[2], real32_T
  intensity_data[], int32_T *intensity_size)
{
  uint32_T minNumPoints;
  int32_T b;
  int32_T i;
  int32_T i_0;
  uint32_T minNumPoints_tmp;
  minNumPoints_tmp = mul_u32_sat(pcHeight, pcWidth);
  minNumPoints = minNumPoints_tmp;
  if (650000U <= minNumPoints_tmp) {
    minNumPoints = 650000U;
  }

  if (1U > minNumPoints) {
    b = -1;
  } else {
    b = static_cast<int32_T>(minNumPoints) - 1;
  }

  xyz_size[0] = b + 1;
  xyz_size[1] = 3;
  for (i_0 = 0; i_0 < 3; i_0++) {
    for (i = 0; i <= b; i++) {
      xyz_data[i + xyz_size[0] * i_0] = xyzIn_data[xyzIn_size[0] * i_0 + i];
    }
  }

  minNumPoints = minNumPoints_tmp;
  if (650000U <= minNumPoints_tmp) {
    minNumPoints = 650000U;
  }

  if (1U > minNumPoints) {
    b = -1;
  } else {
    b = static_cast<int32_T>(minNumPoints) - 1;
  }

  rgb_size[0] = b + 1;
  rgb_size[1] = 3;
  for (i_0 = 0; i_0 < 3; i_0++) {
    for (i = 0; i <= b; i++) {
      rgb_data[i + rgb_size[0] * i_0] = rgbIn_data[650000 * i_0 + i];
    }
  }

  minNumPoints = minNumPoints_tmp;
  if (650000U <= minNumPoints_tmp) {
    minNumPoints = 650000U;
  }

  if (1U > minNumPoints) {
    b = -1;
  } else {
    b = static_cast<int32_T>(minNumPoints) - 1;
  }

  *intensity_size = b + 1;
  if (0 <= b) {
    memcpy(&intensity_data[0], &intensityIn_data[0], (b + 1) * sizeof(real32_T));
  }
}

static void optimal_ReadPointCloud_stepImpl(const
  SL_Bus_optimal_path_t2_sensor_msgs_PointCloud2 *busstruct, real32_T
  varargout_1_data[], int32_T varargout_1_size[2])
{
  optimal_path_t2_B.pc.BusStruct = *busstruct;
  optimal_path_t2_B.pc.NumFields = busstruct->Fields_SL_Info.CurrentLength;
  optimal_path_t2_B.pc.BusStruct.PreserveStructureOnRead = false;
  optimal_path_t2_B.xIdx = PointCloud2BusWrapper_getFieldI(&optimal_path_t2_B.pc);
  optimal_path_t2_B.yIdx = PointCloud2BusWrapper_getFiel_n(&optimal_path_t2_B.pc);
  optimal_path_t2_B.zIdx = PointCloud2BusWrapper_getFie_nh(&optimal_path_t2_B.pc);
  optimal_path_t2_B.rgbIdx = PointCloud2BusWrapper_getFi_nhj
    (&optimal_path_t2_B.pc);
  optimal_path_t2_B.intensityIdx = PointCloud2BusWrapper_getF_nhjw
    (&optimal_path_t2_B.pc);
  if ((optimal_path_t2_B.xIdx != 0U) && (optimal_path_t2_B.yIdx != 0U) &&
      (optimal_path_t2_B.zIdx != 0U)) {
    for (optimal_path_t2_B.loop_ub = 0; optimal_path_t2_B.loop_ub < 650000;
         optimal_path_t2_B.loop_ub++) {
      optimal_path_t2_B.dv[optimal_path_t2_B.loop_ub] = static_cast<real_T>
        (optimal_path_t2_B.loop_ub) + 1.0;
    }

    optim_PointCloud2Reader_readXYZ(&optimal_path_t2_B.pc,
      optimal_path_t2_B.xIdx, optimal_path_t2_B.yIdx, optimal_path_t2_B.zIdx,
      optimal_path_t2_B.dv, optimal_path_t2_B.b_xyzTmp_data,
      optimal_path_t2_B.b_xyzTmp_size);
    optimal_path_t2_B.xyzTmp_size[0] = optimal_path_t2_B.b_xyzTmp_size[0];
    optimal_path_t2_B.xyzTmp_size[1] = 3;
    optimal_path_t2_B.loop_ub = optimal_path_t2_B.b_xyzTmp_size[0] *
      optimal_path_t2_B.b_xyzTmp_size[1] - 1;
    if (0 <= optimal_path_t2_B.loop_ub) {
      memcpy(&optimal_path_t2_B.xyzTmp_data[0],
             &optimal_path_t2_B.b_xyzTmp_data[0], (optimal_path_t2_B.loop_ub + 1)
             * sizeof(real32_T));
    }
  } else {
    optimal_path_t2_B.xyzTmp_size[0] = 650000;
    optimal_path_t2_B.xyzTmp_size[1] = 3;
    for (optimal_path_t2_B.loop_ub = 0; optimal_path_t2_B.loop_ub < 1950000;
         optimal_path_t2_B.loop_ub++) {
      optimal_path_t2_B.xyzTmp_data[optimal_path_t2_B.loop_ub] = (rtNaNF);
    }
  }

  if (optimal_path_t2_B.rgbIdx != 0U) {
    for (optimal_path_t2_B.loop_ub = 0; optimal_path_t2_B.loop_ub < 650000;
         optimal_path_t2_B.loop_ub++) {
      optimal_path_t2_B.dv[optimal_path_t2_B.loop_ub] = static_cast<real_T>
        (optimal_path_t2_B.loop_ub) + 1.0;
    }

    optim_PointCloud2Reader_readRGB(&optimal_path_t2_B.pc,
      optimal_path_t2_B.rgbIdx, optimal_path_t2_B.dv,
      optimal_path_t2_B.rgbTmp_data);
  } else {
    for (optimal_path_t2_B.loop_ub = 0; optimal_path_t2_B.loop_ub < 1950000;
         optimal_path_t2_B.loop_ub++) {
      optimal_path_t2_B.rgbTmp_data[optimal_path_t2_B.loop_ub] = (rtNaN);
    }
  }

  if (optimal_path_t2_B.intensityIdx != 0U) {
    for (optimal_path_t2_B.loop_ub = 0; optimal_path_t2_B.loop_ub < 650000;
         optimal_path_t2_B.loop_ub++) {
      optimal_path_t2_B.dv[optimal_path_t2_B.loop_ub] = static_cast<real_T>
        (optimal_path_t2_B.loop_ub) + 1.0;
    }

    PointCloud2Reader_getByteIndexF(&optimal_path_t2_B.pc,
      optimal_path_t2_B.intensityIdx, optimal_path_t2_B.dv,
      optimal_path_t2_B.byteIdx_data, optimal_path_t2_B.b_xyzTmp_size,
      optimal_path_t2_B.pointIdxIsValid);
    PointCloud2BusWrapper_get_Data(&optimal_path_t2_B.pc,
      optimal_path_t2_B.tmp_data_g, &optimal_path_t2_B.tmp_size);
    PointCloud2Reader_readFieldFrom(optimal_path_t2_B.tmp_data_g,
      optimal_path_t2_B.byteIdx_data, optimal_path_t2_B.b_xyzTmp_size,
      optimal_path_t2_B.pointIdxIsValid, optimal_path_t2_B.b_intensityTmp_data,
      &optimal_path_t2_B.tmp_size);
    optimal_path_t2_B.loop_ub = optimal_path_t2_B.tmp_size;
    if (0 <= optimal_path_t2_B.loop_ub - 1) {
      memcpy(&optimal_path_t2_B.intensityTmp_data[0],
             &optimal_path_t2_B.b_intensityTmp_data[0],
             optimal_path_t2_B.loop_ub * sizeof(real32_T));
    }
  } else {
    for (optimal_path_t2_B.loop_ub = 0; optimal_path_t2_B.loop_ub < 650000;
         optimal_path_t2_B.loop_ub++) {
      optimal_path_t2_B.intensityTmp_data[optimal_path_t2_B.loop_ub] = (rtNaNF);
    }
  }

  op_ReadPointCloud_resizeOutputs(optimal_path_t2_B.xyzTmp_data,
    optimal_path_t2_B.xyzTmp_size, optimal_path_t2_B.rgbTmp_data,
    optimal_path_t2_B.intensityTmp_data, busstruct->Height, busstruct->Width,
    varargout_1_data, varargout_1_size, optimal_path_t2_B.rgb_data,
    optimal_path_t2_B.b_xyzTmp_size, optimal_path_t2_B.intensity_data,
    &optimal_path_t2_B.tmp_size);
}

real32_T rt_roundf_snf(real32_T u)
{
  real32_T y;
  if (static_cast<real32_T>(fabs(static_cast<real_T>(u))) < 8.388608E+6F) {
    if (u >= 0.5F) {
      y = static_cast<real32_T>(floor(static_cast<real_T>((u + 0.5F))));
    } else if (u > -0.5F) {
      y = u * 0.0F;
    } else {
      y = static_cast<real32_T>(ceil(static_cast<real_T>((u - 0.5F))));
    }
  } else {
    y = u;
  }

  return y;
}

// Function for MATLAB Function: '<Root>/MATLAB Function8'
static boolean_T optimal_path_t2_sortLE(const int16_T v_data[], const int32_T
  v_size[2], const int32_T dir_data[], const int32_T dir_size[2], int32_T idx1,
  int32_T idx2)
{
  boolean_T p;
  int16_T v1;
  int16_T v2;
  int32_T k;
  int32_T v1_tmp;
  boolean_T exitg1;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= dir_size[1] - 1)) {
    v1_tmp = (dir_data[k] - 1) * v_size[0];
    v1 = v_data[(v1_tmp + idx1) - 1];
    v2 = v_data[(v1_tmp + idx2) - 1];
    if (v1 != v2) {
      p = (v1 <= v2);
      exitg1 = true;
    } else {
      k++;
    }
  }

  return p;
}

// Function for MATLAB Function: '<Root>/MATLAB Function8'
static void optimal_path_t2_mergesort(int32_T idx_data[], const int16_T x_data[],
  const int32_T x_size[2], const int32_T dir_data[], const int32_T dir_size[2],
  int32_T n)
{
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  int32_T tmp;
  int32_T tmp_0;
  optimal_path_t2_B.i_o = 1;
  while (optimal_path_t2_B.i_o <= n - 1) {
    if (optimal_path_t2_sortLE(x_data, x_size, dir_data, dir_size,
         optimal_path_t2_B.i_o, optimal_path_t2_B.i_o + 1)) {
      idx_data[optimal_path_t2_B.i_o - 1] = optimal_path_t2_B.i_o;
      idx_data[optimal_path_t2_B.i_o] = optimal_path_t2_B.i_o + 1;
    } else {
      idx_data[optimal_path_t2_B.i_o - 1] = optimal_path_t2_B.i_o + 1;
      idx_data[optimal_path_t2_B.i_o] = optimal_path_t2_B.i_o;
    }

    optimal_path_t2_B.i_o += 2;
  }

  if ((n & 1U) != 0U) {
    idx_data[n - 1] = n;
  }

  optimal_path_t2_B.i_o = 2;
  while (optimal_path_t2_B.i_o < n) {
    optimal_path_t2_B.i2 = optimal_path_t2_B.i_o << 1;
    optimal_path_t2_B.j = 1;
    pEnd = optimal_path_t2_B.i_o + 1;
    while (pEnd < n + 1) {
      p = optimal_path_t2_B.j;
      q = pEnd;
      qEnd = optimal_path_t2_B.j + optimal_path_t2_B.i2;
      if (qEnd > n + 1) {
        qEnd = n + 1;
      }

      optimal_path_t2_B.k_j = 0;
      kEnd = qEnd - optimal_path_t2_B.j;
      while (optimal_path_t2_B.k_j + 1 <= kEnd) {
        tmp = idx_data[q - 1];
        tmp_0 = idx_data[p - 1];
        if (optimal_path_t2_sortLE(x_data, x_size, dir_data, dir_size, tmp_0,
             tmp)) {
          optimal_path_t2_B.iwork_data[optimal_path_t2_B.k_j] = tmp_0;
          p++;
          if (p == pEnd) {
            while (q < qEnd) {
              optimal_path_t2_B.k_j++;
              optimal_path_t2_B.iwork_data[optimal_path_t2_B.k_j] = idx_data[q -
                1];
              q++;
            }
          }
        } else {
          optimal_path_t2_B.iwork_data[optimal_path_t2_B.k_j] = tmp;
          q++;
          if (q == qEnd) {
            while (p < pEnd) {
              optimal_path_t2_B.k_j++;
              optimal_path_t2_B.iwork_data[optimal_path_t2_B.k_j] = idx_data[p -
                1];
              p++;
            }
          }
        }

        optimal_path_t2_B.k_j++;
      }

      for (pEnd = -1; pEnd < kEnd - 1; pEnd++) {
        idx_data[optimal_path_t2_B.j + pEnd] = optimal_path_t2_B.iwork_data[pEnd
          + 1];
      }

      optimal_path_t2_B.j = qEnd;
      pEnd = qEnd + optimal_path_t2_B.i_o;
    }

    optimal_path_t2_B.i_o = optimal_path_t2_B.i2;
  }
}

// Function for MATLAB Function: '<Root>/MATLAB Function8'
static void optimal_path_t2_sortIdx(const int16_T x_data[], const int32_T
  x_size[2], const int32_T col_data[], const int32_T col_size[2], int32_T
  idx_data[], int32_T *idx_size)
{
  *idx_size = x_size[0];
  optimal_path_t2_B.loop_ub_j = x_size[0];
  if (0 <= optimal_path_t2_B.loop_ub_j - 1) {
    memset(&idx_data[0], 0, optimal_path_t2_B.loop_ub_j * sizeof(int32_T));
  }

  if (x_size[1] == 0) {
    optimal_path_t2_B.loop_ub_j = 0;
    while (optimal_path_t2_B.loop_ub_j <= x_size[0] - 1) {
      idx_data[optimal_path_t2_B.loop_ub_j] = optimal_path_t2_B.loop_ub_j + 1;
      optimal_path_t2_B.loop_ub_j++;
    }
  } else {
    optimal_path_t2_mergesort(idx_data, x_data, x_size, col_data, col_size,
      x_size[0]);
  }
}

// Function for MATLAB Function: '<Root>/MATLAB Function8'
static void optimal_p_apply_row_permutation(int16_T y_data[], const int32_T
  y_size[2], const int32_T idx_data[])
{
  int32_T m;
  int32_T j;
  int32_T i;
  m = y_size[0] - 1;
  for (j = 0; j < y_size[1]; j++) {
    for (i = 0; i <= m; i++) {
      optimal_path_t2_B.ycol_data[i] = y_data[(y_size[0] * j + idx_data[i]) - 1];
    }

    for (i = 0; i <= m; i++) {
      y_data[i + y_size[0] * j] = optimal_path_t2_B.ycol_data[i];
    }
  }
}

// Function for MATLAB Function: '<Root>/MATLAB Function8'
static void optimal_path_t2_sortrows(int16_T y_data[], const int32_T y_size[2],
  real_T ndx_data[], int32_T *ndx_size)
{
  optimal_path_t2_B.col_size[0] = 1;
  optimal_path_t2_B.col_size[1] = y_size[1];
  optimal_path_t2_B.k_a = 0;
  while (optimal_path_t2_B.k_a <= y_size[1] - 1) {
    optimal_path_t2_B.col_data[optimal_path_t2_B.k_a] = optimal_path_t2_B.k_a +
      1;
    optimal_path_t2_B.k_a++;
  }

  optimal_path_t2_sortIdx(y_data, y_size, optimal_path_t2_B.col_data,
    optimal_path_t2_B.col_size, optimal_path_t2_B.idx_data,
    &optimal_path_t2_B.idx_size);
  optimal_p_apply_row_permutation(y_data, y_size, optimal_path_t2_B.idx_data);
  *ndx_size = optimal_path_t2_B.idx_size;
  optimal_path_t2_B.k_a = optimal_path_t2_B.idx_size;
  for (optimal_path_t2_B.i1 = 0; optimal_path_t2_B.i1 < optimal_path_t2_B.k_a;
       optimal_path_t2_B.i1++) {
    ndx_data[optimal_path_t2_B.i1] =
      optimal_path_t2_B.idx_data[optimal_path_t2_B.i1];
  }
}

// Function for MATLAB Function: '<Root>/MATLAB Function8'
static boolean_T optimal_path_t2_rows_differ(const int16_T b_data[], const
  int32_T b_size[2], int32_T k0, int32_T k)
{
  boolean_T p;
  int32_T j;
  int32_T tmp;
  boolean_T exitg1;
  p = false;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j <= b_size[1] - 1)) {
    tmp = b_size[0] * j;
    if (b_data[(tmp + k0) - 1] != b_data[(tmp + k) - 1]) {
      p = true;
      exitg1 = true;
    } else {
      j++;
    }
  }

  return p;
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static void optimal_path_t2_abs(const real_T x[3], real_T y[3])
{
  y[0] = fabs(x[0]);
  y[1] = fabs(x[1]);
  y[2] = fabs(x[2]);
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static void optimal_path_t2_power(const real_T a[3], real_T y[3])
{
  y[0] = a[0] * a[0];
  y[1] = a[1] * a[1];
  y[2] = a[2] * a[2];
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static real_T optimal_path_t2_sum(const real_T x[3])
{
  return (x[0] + x[1]) + x[2];
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static void optimal_path_t2_abs_l(const int32_T x[3], int32_T y[3])
{
  if (x[0] < 0) {
    if (x[0] <= MIN_int32_T) {
      y[0] = MAX_int32_T;
    } else {
      y[0] = -x[0];
    }
  } else {
    y[0] = x[0];
  }

  if (x[1] < 0) {
    if (x[1] <= MIN_int32_T) {
      y[1] = MAX_int32_T;
    } else {
      y[1] = -x[1];
    }
  } else {
    y[1] = x[1];
  }

  if (x[2] < 0) {
    if (x[2] <= MIN_int32_T) {
      y[2] = MAX_int32_T;
    } else {
      y[2] = -x[2];
    }
  } else {
    y[2] = x[2];
  }
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static void optimal_path_t2_power_e(const int32_T a[3], int32_T y[3])
{
  int32_T b_y;
  int32_T b_a;
  uint32_T bu;
  int32_T exitg1;
  b_a = a[0];
  b_y = 1;
  bu = 2U;
  do {
    exitg1 = 0;
    if ((bu & 1U) != 0U) {
      b_y = mul_s32_sat(b_a, b_y);
    }

    bu >>= 1U;
    if (static_cast<int32_T>(bu) == 0) {
      exitg1 = 1;
    } else {
      b_a = mul_s32_sat(b_a, b_a);
    }
  } while (exitg1 == 0);

  y[0] = b_y;
  b_a = a[1];
  b_y = 1;
  bu = 2U;
  do {
    exitg1 = 0;
    if ((bu & 1U) != 0U) {
      b_y = mul_s32_sat(b_a, b_y);
    }

    bu >>= 1U;
    if (static_cast<int32_T>(bu) == 0) {
      exitg1 = 1;
    } else {
      b_a = mul_s32_sat(b_a, b_a);
    }
  } while (exitg1 == 0);

  y[1] = b_y;
  b_a = a[2];
  b_y = 1;
  bu = 2U;
  do {
    exitg1 = 0;
    if ((bu & 1U) != 0U) {
      b_y = mul_s32_sat(b_a, b_y);
    }

    bu >>= 1U;
    if (static_cast<int32_T>(bu) == 0) {
      exitg1 = 1;
    } else {
      b_a = mul_s32_sat(b_a, b_a);
    }
  } while (exitg1 == 0);

  y[2] = b_y;
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static real_T optimal_path_t2_sum_i(const int32_T x[3])
{
  return (static_cast<real_T>(x[0]) + static_cast<real_T>(x[1])) +
    static_cast<real_T>(x[2]);
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static void optimal_path_t2_eml_find(const boolean_T x[65000], int32_T i_data[],
  int32_T *i_size, int32_T j_data[], int32_T *j_size)
{
  int32_T idx;
  int32_T ii;
  int32_T jj;
  boolean_T exitg1;
  boolean_T guard1 = false;
  idx = 0;
  ii = 1;
  jj = 1;
  exitg1 = false;
  while ((!exitg1) && (jj <= 1000)) {
    guard1 = false;
    if (x[((jj - 1) * 65 + ii) - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      j_data[idx - 1] = jj;
      if (idx >= 65000) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
      if (ii > 65) {
        ii = 1;
        jj++;
      }
    }
  }

  if (1 > idx) {
    *i_size = 0;
    *j_size = 0;
  } else {
    *i_size = idx;
    *j_size = idx;
  }
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (fabs(u1_0 - floor(u1_0 + 0.5)) <= DBL_EPSILON * u1_0) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static int32_T optimal_path_t2_abs_li(int32_T x)
{
  int32_T y;
  if (x < 0) {
    if (x <= MIN_int32_T) {
      y = MAX_int32_T;
    } else {
      y = -x;
    }
  } else {
    y = x;
  }

  return y;
}

// Function for MATLAB Function: '<Root>/MATLAB Function7'
static void optimal_path_t2_flip(real32_T x[128])
{
  real32_T tmp;
  int32_T k;
  for (k = 0; k < 64; k++) {
    tmp = x[k];
    x[k] = x[127 - k];
    x[127 - k] = tmp;
  }
}

static void matlabCodegenHandle_m_nhjwvvggb(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCo_nh(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_ma_nhjwvvgg(ros_slros_internal_block_Serv_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_SetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void optimal_path_t2_step(void)
{
  int16_T yk;
  boolean_T b_varargout_2_IsBigendian;
  boolean_T b_varargout_2_IsDense;
  boolean_T b_varargout_2_PreserveStructure;
  uint8_T b_varargout_2;
  SL_Bus_optimal_path_t2_std_srvs_EmptyResponse b_varargout_1;
  boolean_T isCreated;
  SL_Bus_optimal_path_t2_std_srvs_EmptyRequest rtb_BusAssignment1_o;
  int16_T rtb_pos_grid_idx_2;
  int16_T rtb_pos_grid_idx_1;
  int16_T rtb_pos_grid_idx_0;
  uint16_T tmp;
  static const char_T tmp_0[22] = "/octomap_server/reset";
  boolean_T exitg1;
  int32_T exitg2;
  boolean_T guard1 = false;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe5'
  // MATLABSystem: '<S25>/SourceBlock' incorporates:
  //   Inport: '<S29>/In1'

  optimal_path_t2_SystemCore_step(&isCreated, &optimal_path_t2_B.SL,
    &optimal_path_t2_B.SL_l, &b_varargout_2_IsBigendian,
    &optimal_path_t2_B.SL_l0, &optimal_path_t2_B.SL_b, &b_varargout_2_IsDense,
    optimal_path_t2_B.b_varargout_2_Data, &optimal_path_t2_B.SL_m,
    &optimal_path_t2_B.b_varargout_2_Data_SL_Info_Rece,
    &optimal_path_t2_B.b_varargout_2_Header_Seq,
    optimal_path_t2_B.b_varargout_2_Header_FrameId,
    &optimal_path_t2_B.b_varargout_2_Header_FrameId_SL,
    &optimal_path_t2_B.b_varargout_2_Header_FrameId__m,
    &optimal_path_t2_B.b_varargout_2_Header_Stamp,
    optimal_path_t2_B.b_varargout_2_Fields,
    &optimal_path_t2_B.b_varargout_2_Fields_SL_Info,
    &b_varargout_2_PreserveStructure);

  // Outputs for Enabled SubSystem: '<S25>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S29>/Enable'

  if (isCreated) {
    optimal_path_t2_B.In1.Height = optimal_path_t2_B.SL;
    optimal_path_t2_B.In1.Width = optimal_path_t2_B.SL_l;
    optimal_path_t2_B.In1.IsBigendian = b_varargout_2_IsBigendian;
    optimal_path_t2_B.In1.PointStep = optimal_path_t2_B.SL_l0;
    optimal_path_t2_B.In1.RowStep = optimal_path_t2_B.SL_b;
    optimal_path_t2_B.In1.IsDense = b_varargout_2_IsDense;
    memcpy(&optimal_path_t2_B.In1.Data[0],
           &optimal_path_t2_B.b_varargout_2_Data[0], 600000U * sizeof(uint8_T));
    optimal_path_t2_B.In1.Data_SL_Info.CurrentLength = optimal_path_t2_B.SL_m;
    optimal_path_t2_B.In1.Data_SL_Info.ReceivedLength =
      optimal_path_t2_B.b_varargout_2_Data_SL_Info_Rece;
    optimal_path_t2_B.In1.Header.Seq =
      optimal_path_t2_B.b_varargout_2_Header_Seq;
    memcpy(&optimal_path_t2_B.In1.Header.FrameId[0],
           &optimal_path_t2_B.b_varargout_2_Header_FrameId[0], sizeof(uint8_T) <<
           7U);
    optimal_path_t2_B.In1.Header.FrameId_SL_Info.CurrentLength =
      optimal_path_t2_B.b_varargout_2_Header_FrameId_SL;
    optimal_path_t2_B.In1.Header.FrameId_SL_Info.ReceivedLength =
      optimal_path_t2_B.b_varargout_2_Header_FrameId__m;
    optimal_path_t2_B.In1.Header.Stamp =
      optimal_path_t2_B.b_varargout_2_Header_Stamp;
    memcpy(&optimal_path_t2_B.In1.Fields[0],
           &optimal_path_t2_B.b_varargout_2_Fields[0], sizeof
           (SL_Bus_optimal_path_t2_sensor_msgs_PointField) << 4U);
    optimal_path_t2_B.In1.Fields_SL_Info =
      optimal_path_t2_B.b_varargout_2_Fields_SL_Info;
    optimal_path_t2_B.In1.PreserveStructureOnRead =
      b_varargout_2_PreserveStructure;
  }

  // End of MATLABSystem: '<S25>/SourceBlock'
  // End of Outputs for SubSystem: '<S25>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe5'

  // MATLABSystem: '<Root>/Read Point Cloud1'
  optimal_path_t2_B.Current_pose_idx_2 = 0;
  exitg1 = false;
  while ((!exitg1) && (optimal_path_t2_B.Current_pose_idx_2 < 8)) {
    if (optimal_path_t2_DW.obj.inputVarSize.f1[optimal_path_t2_B.Current_pose_idx_2]
        != 1U) {
      for (optimal_path_t2_B.align2_data_tmp = 0;
           optimal_path_t2_B.align2_data_tmp < 8;
           optimal_path_t2_B.align2_data_tmp++) {
        optimal_path_t2_DW.obj.inputVarSize.f1[optimal_path_t2_B.align2_data_tmp]
          = 1U;
      }

      exitg1 = true;
    } else {
      optimal_path_t2_B.Current_pose_idx_2++;
    }
  }

  optimal_ReadPointCloud_stepImpl(&optimal_path_t2_B.In1,
    optimal_path_t2_B.c_y0_data, optimal_path_t2_B.c_y0_size);
  optimal_path_t2_DW.ReadPointCloud1_DIMS1[0] = optimal_path_t2_B.c_y0_size[0];
  optimal_path_t2_DW.ReadPointCloud1_DIMS1[1] = optimal_path_t2_B.c_y0_size[1];
  optimal_path_t2_B.Current_pose_idx_2 = optimal_path_t2_B.c_y0_size[0] *
    optimal_path_t2_B.c_y0_size[1];
  if (0 <= optimal_path_t2_B.Current_pose_idx_2 - 1) {
    memcpy(&optimal_path_t2_B.ReadPointCloud1[0], &optimal_path_t2_B.c_y0_data[0],
           optimal_path_t2_B.Current_pose_idx_2 * sizeof(real32_T));
  }

  // End of MATLABSystem: '<Root>/Read Point Cloud1'

  // MATLAB Function: '<Root>/MATLAB Function8' incorporates:
  //   Constant: '<Root>/Start Grid (Case_J1)'

  optimal_path_t2_DW.SFunction_DIMS2[0] = 65;
  optimal_path_t2_DW.SFunction_DIMS2[1] = 40;
  optimal_path_t2_DW.SFunction_DIMS2[2] = 25;
  memset(&optimal_path_t2_B.Obstacle[0], 0, 65000U * sizeof(int8_T));
  optimal_path_t2_B.xPageOffset = optimal_path_t2_DW.ReadPointCloud1_DIMS1[0];
  optimal_path_t2_B.nb = optimal_path_t2_DW.ReadPointCloud1_DIMS1[0] *
    optimal_path_t2_DW.ReadPointCloud1_DIMS1[1] - 1;
  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <=
       optimal_path_t2_B.nb; optimal_path_t2_B.align2_data_tmp++) {
    optimal_path_t2_B.f_d = rt_roundf_snf
      (optimal_path_t2_B.ReadPointCloud1[optimal_path_t2_B.align2_data_tmp] /
       0.2F);
    if (optimal_path_t2_B.f_d < 32768.0F) {
      if (optimal_path_t2_B.f_d >= -32768.0F) {
        optimal_path_t2_B.align1_data[optimal_path_t2_B.align2_data_tmp] =
          static_cast<int16_T>(optimal_path_t2_B.f_d);
      } else {
        optimal_path_t2_B.align1_data[optimal_path_t2_B.align2_data_tmp] =
          MIN_int16_T;
      }
    } else {
      optimal_path_t2_B.align1_data[optimal_path_t2_B.align2_data_tmp] =
        MAX_int16_T;
    }
  }

  if (optimal_path_t2_DW.ReadPointCloud1_DIMS1[0] == 0) {
    optimal_path_t2_B.align2_size[0] = 0;
  } else {
    optimal_path_t2_B.align2_size[0] = optimal_path_t2_DW.ReadPointCloud1_DIMS1
      [0];
    optimal_path_t2_B.align2_size[1] = optimal_path_t2_DW.ReadPointCloud1_DIMS1
      [1];
    if (0 <= optimal_path_t2_B.nb) {
      memcpy(&optimal_path_t2_B.align2_data_f[0],
             &optimal_path_t2_B.align1_data[0], (optimal_path_t2_B.nb + 1) *
             sizeof(int16_T));
    }

    optimal_path_t2_sortrows(optimal_path_t2_B.align2_data_f,
      optimal_path_t2_B.align2_size, optimal_path_t2_B.align2_data.data,
      &optimal_path_t2_B.align2_data.size);
    optimal_path_t2_B.nb = -1;
    optimal_path_t2_B.k = 1;
    while (optimal_path_t2_B.k <= optimal_path_t2_B.xPageOffset) {
      optimal_path_t2_B.k0 = optimal_path_t2_B.k;
      do {
        optimal_path_t2_B.k++;
      } while (!((optimal_path_t2_B.k > optimal_path_t2_B.xPageOffset) ||
                 optimal_path_t2_rows_differ(optimal_path_t2_B.align2_data_f,
                 optimal_path_t2_B.align2_size, optimal_path_t2_B.k0,
                 optimal_path_t2_B.k)));

      optimal_path_t2_B.nb++;
      optimal_path_t2_B.CY = 0;
      while (optimal_path_t2_B.CY <= optimal_path_t2_B.align2_size[1] - 1) {
        optimal_path_t2_B.align2_data_tmp = optimal_path_t2_B.align2_size[0] *
          optimal_path_t2_B.CY;
        optimal_path_t2_B.align2_data_f[optimal_path_t2_B.nb +
          optimal_path_t2_B.align2_data_tmp] = optimal_path_t2_B.align2_data_f
          [(optimal_path_t2_B.align2_data_tmp + optimal_path_t2_B.k0) - 1];
        optimal_path_t2_B.CY++;
      }
    }

    optimal_path_t2_B.Current_pose_idx_2 = optimal_path_t2_B.align2_size[1] - 1;
    if (1 > optimal_path_t2_B.nb + 1) {
      optimal_path_t2_B.nb = -1;
    }

    optimal_path_t2_B.k = optimal_path_t2_B.nb + 1;
    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp <=
         optimal_path_t2_B.Current_pose_idx_2; optimal_path_t2_B.align2_data_tmp
         ++) {
      for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <=
           optimal_path_t2_B.nb; optimal_path_t2_B.xPageOffset++) {
        optimal_path_t2_B.align1_data[optimal_path_t2_B.xPageOffset +
          optimal_path_t2_B.k * optimal_path_t2_B.align2_data_tmp] =
          optimal_path_t2_B.align2_data_f[optimal_path_t2_B.align2_size[0] *
          optimal_path_t2_B.align2_data_tmp + optimal_path_t2_B.xPageOffset];
      }
    }

    optimal_path_t2_B.align2_size[0] = optimal_path_t2_B.k;
    optimal_path_t2_B.Current_pose_idx_2 = (optimal_path_t2_B.Current_pose_idx_2
      + 1) * optimal_path_t2_B.k;
    if (0 <= optimal_path_t2_B.Current_pose_idx_2 - 1) {
      memcpy(&optimal_path_t2_B.align2_data_f[0],
             &optimal_path_t2_B.align1_data[0],
             optimal_path_t2_B.Current_pose_idx_2 * sizeof(int16_T));
    }
  }

  optimal_path_t2_B.Current_pose_idx_2 = optimal_path_t2_B.align2_size[0];
  optimal_path_t2_B.nb = optimal_path_t2_B.align2_size[0];
  optimal_path_t2_B.k = optimal_path_t2_B.align2_size[0];
  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       optimal_path_t2_B.Current_pose_idx_2; optimal_path_t2_B.align2_data_tmp++)
  {
    optimal_path_t2_B.scale = rt_roundd_snf(static_cast<real_T>
      (optimal_path_t2_B.align2_data_f[optimal_path_t2_B.align2_data_tmp]) +
      optimal_path_t2_P.StartGridCase_J1_Value[0]);
    if (optimal_path_t2_B.scale < 32768.0) {
      if (optimal_path_t2_B.scale >= -32768.0) {
        optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp] =
          static_cast<int16_T>(optimal_path_t2_B.scale);
      } else {
        optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp] =
          MIN_int16_T;
      }
    } else {
      optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp] =
        MAX_int16_T;
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       optimal_path_t2_B.nb; optimal_path_t2_B.align2_data_tmp++) {
    optimal_path_t2_B.xPageOffset = optimal_path_t2_B.align2_data_tmp +
      optimal_path_t2_B.align2_size[0];
    optimal_path_t2_B.scale = rt_roundd_snf(static_cast<real_T>
      (optimal_path_t2_B.align2_data_f[optimal_path_t2_B.xPageOffset]) +
      optimal_path_t2_P.StartGridCase_J1_Value[1]);
    if (optimal_path_t2_B.scale < 32768.0) {
      if (optimal_path_t2_B.scale >= -32768.0) {
        optimal_path_t2_B.align3_data[optimal_path_t2_B.xPageOffset] =
          static_cast<int16_T>(optimal_path_t2_B.scale);
      } else {
        optimal_path_t2_B.align3_data[optimal_path_t2_B.xPageOffset] =
          MIN_int16_T;
      }
    } else {
      optimal_path_t2_B.align3_data[optimal_path_t2_B.xPageOffset] = MAX_int16_T;
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       optimal_path_t2_B.k; optimal_path_t2_B.align2_data_tmp++) {
    optimal_path_t2_B.scale = rt_roundd_snf(static_cast<real_T>
      (optimal_path_t2_B.align2_data_f[(optimal_path_t2_B.align2_size[0] << 1) +
       optimal_path_t2_B.align2_data_tmp]) +
      optimal_path_t2_P.StartGridCase_J1_Value[2]);
    if (optimal_path_t2_B.scale < 32768.0) {
      if (optimal_path_t2_B.scale >= -32768.0) {
        optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp +
          (optimal_path_t2_B.Current_pose_idx_2 << 1)] = static_cast<int16_T>
          (optimal_path_t2_B.scale);
      } else {
        optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp +
          (optimal_path_t2_B.Current_pose_idx_2 << 1)] = MIN_int16_T;
      }
    } else {
      optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp +
        (optimal_path_t2_B.Current_pose_idx_2 << 1)] = MAX_int16_T;
    }
  }

  optimal_path_t2_B.MinFScore = static_cast<real_T>
    (optimal_path_t2_B.align2_size[0]) * 3.0 / 3.0;
  optimal_path_t2_B.nb = 0;
  while (optimal_path_t2_B.nb <= static_cast<int32_T>
         (optimal_path_t2_B.MinFScore) - 1) {
    rtb_pos_grid_idx_0 = optimal_path_t2_B.align3_data[optimal_path_t2_B.nb];
    optimal_path_t2_B.align2_data_tmp = optimal_path_t2_B.nb +
      optimal_path_t2_B.Current_pose_idx_2;
    rtb_pos_grid_idx_1 =
      optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp];
    optimal_path_t2_B.k = (optimal_path_t2_B.Current_pose_idx_2 << 1) +
      optimal_path_t2_B.nb;
    rtb_pos_grid_idx_2 = optimal_path_t2_B.align3_data[optimal_path_t2_B.k];
    if (((optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp] < 3)
         + (optimal_path_t2_B.align3_data[optimal_path_t2_B.nb] < 3)) +
        (optimal_path_t2_B.align3_data[optimal_path_t2_B.k] < 3) >= 1) {
      rtb_pos_grid_idx_0 = optimal_path_t2_B.align3_data[optimal_path_t2_B.nb];
      if (optimal_path_t2_B.align3_data[optimal_path_t2_B.nb] < 3) {
        rtb_pos_grid_idx_0 = 3;
      }

      rtb_pos_grid_idx_2 =
        optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp];
      if (optimal_path_t2_B.align3_data[optimal_path_t2_B.align2_data_tmp] < 3)
      {
        rtb_pos_grid_idx_2 = 3;
      }

      rtb_pos_grid_idx_1 = rtb_pos_grid_idx_2;
      rtb_pos_grid_idx_2 = optimal_path_t2_B.align3_data[optimal_path_t2_B.k];
      if (optimal_path_t2_B.align3_data[optimal_path_t2_B.k] < 3) {
        rtb_pos_grid_idx_2 = 3;
      }
    }

    if (rtb_pos_grid_idx_0 > 63) {
      rtb_pos_grid_idx_0 = 63;
    }

    if (rtb_pos_grid_idx_1 > 38) {
      rtb_pos_grid_idx_1 = 38;
    }

    if (rtb_pos_grid_idx_2 > 23) {
      rtb_pos_grid_idx_2 = 23;
    }

    optimal_path_t2_B.q0_b = rtb_pos_grid_idx_0 - 2;
    optimal_path_t2_B.align2_data_tmp = optimal_path_t2_B.q0_b;
    if (optimal_path_t2_B.q0_b < -32768) {
      optimal_path_t2_B.align2_data_tmp = -32768;
    }

    yk = static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp);
    optimal_path_t2_B.xPageOffset = rtb_pos_grid_idx_0 + 2;
    if (optimal_path_t2_B.xPageOffset < static_cast<int16_T>
        (optimal_path_t2_B.align2_data_tmp)) {
      optimal_path_t2_B.k = 0;
    } else {
      if (static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp) < 0) {
        if (optimal_path_t2_B.xPageOffset >= 0) {
          tmp = static_cast<uint16_T>((static_cast<uint32_T>
            (static_cast<uint16_T>(optimal_path_t2_B.xPageOffset)) -
            static_cast<uint16_T>(optimal_path_t2_B.align2_data_tmp)));
        } else {
          tmp = static_cast<uint16_T>(((rtb_pos_grid_idx_0 + 2) -
            static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp)));
        }
      } else {
        tmp = static_cast<uint16_T>((optimal_path_t2_B.xPageOffset -
          static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp)));
      }

      optimal_path_t2_B.k = tmp + 1;
    }

    optimal_path_t2_B.q0 = optimal_path_t2_B.k;
    if (optimal_path_t2_B.k > 0) {
      optimal_path_t2_B.index_x_data[0] = static_cast<int16_T>
        (optimal_path_t2_B.align2_data_tmp);
      optimal_path_t2_B.k0 = 2;
      while (optimal_path_t2_B.k0 <= optimal_path_t2_B.k) {
        yk = static_cast<int16_T>((yk + 1));
        optimal_path_t2_B.index_x_data[optimal_path_t2_B.k0 - 1] = yk;
        optimal_path_t2_B.k0++;
      }
    }

    optimal_path_t2_B.k0 = rtb_pos_grid_idx_1 - 1;
    optimal_path_t2_B.align2_data_tmp = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.align2_data_tmp = -32768;
    }

    yk = static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp);
    optimal_path_t2_B.xPageOffset = rtb_pos_grid_idx_1 + 1;
    if (optimal_path_t2_B.xPageOffset < static_cast<int16_T>
        (optimal_path_t2_B.align2_data_tmp)) {
      optimal_path_t2_B.k = 0;
    } else {
      if (static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp) < 0) {
        if (optimal_path_t2_B.xPageOffset >= 0) {
          tmp = static_cast<uint16_T>((static_cast<uint32_T>
            (static_cast<uint16_T>(optimal_path_t2_B.xPageOffset)) -
            static_cast<uint16_T>(optimal_path_t2_B.align2_data_tmp)));
        } else {
          tmp = static_cast<uint16_T>(((rtb_pos_grid_idx_1 + 1) -
            static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp)));
        }
      } else {
        tmp = static_cast<uint16_T>((optimal_path_t2_B.xPageOffset -
          static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp)));
      }

      optimal_path_t2_B.k = tmp + 1;
    }

    optimal_path_t2_B.q0_e = optimal_path_t2_B.k;
    if (optimal_path_t2_B.k > 0) {
      optimal_path_t2_B.y_data[0] = static_cast<int16_T>
        (optimal_path_t2_B.align2_data_tmp);
      optimal_path_t2_B.CY = 2;
      while (optimal_path_t2_B.CY <= optimal_path_t2_B.k) {
        yk = static_cast<int16_T>((yk + 1));
        optimal_path_t2_B.y_data[optimal_path_t2_B.CY - 1] = yk;
        optimal_path_t2_B.CY++;
      }
    }

    optimal_path_t2_B.CY = rtb_pos_grid_idx_2 - 1;
    optimal_path_t2_B.align2_data_tmp = optimal_path_t2_B.CY;
    if (optimal_path_t2_B.CY < -32768) {
      optimal_path_t2_B.align2_data_tmp = -32768;
    }

    yk = static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp);
    optimal_path_t2_B.b_jj = rtb_pos_grid_idx_2 + 1;
    if (optimal_path_t2_B.b_jj < static_cast<int16_T>
        (optimal_path_t2_B.align2_data_tmp)) {
      optimal_path_t2_B.k = 0;
    } else {
      if (static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp) < 0) {
        if (optimal_path_t2_B.b_jj >= 0) {
          tmp = static_cast<uint16_T>((static_cast<uint32_T>
            (static_cast<uint16_T>(optimal_path_t2_B.b_jj)) -
            static_cast<uint16_T>(optimal_path_t2_B.align2_data_tmp)));
        } else {
          tmp = static_cast<uint16_T>(((rtb_pos_grid_idx_2 + 1) -
            static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp)));
        }
      } else {
        tmp = static_cast<uint16_T>((optimal_path_t2_B.b_jj -
          static_cast<int16_T>(optimal_path_t2_B.align2_data_tmp)));
      }

      optimal_path_t2_B.k = tmp + 1;
    }

    if (optimal_path_t2_B.k > 0) {
      optimal_path_t2_B.b_y_data[0] = static_cast<int16_T>
        (optimal_path_t2_B.align2_data_tmp);
      optimal_path_t2_B.b_idx = 2;
      while (optimal_path_t2_B.b_idx <= optimal_path_t2_B.k) {
        yk = static_cast<int16_T>((yk + 1));
        optimal_path_t2_B.b_y_data[optimal_path_t2_B.b_idx - 1] = yk;
        optimal_path_t2_B.b_idx++;
      }
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
          optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * rtb_pos_grid_idx_2) - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
          optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * optimal_path_t2_B.CY) - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    optimal_path_t2_B.xOffset = optimal_path_t2_B.CY;
    if (optimal_path_t2_B.CY < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
          optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * (optimal_path_t2_B.xOffset - 1))
        - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * optimal_path_t2_B.k0) +
          optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * rtb_pos_grid_idx_2) - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 - 1)) +
          optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * (rtb_pos_grid_idx_2 - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    optimal_path_t2_B.xOffset = optimal_path_t2_B.CY;
    if (optimal_path_t2_B.CY < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 - 1)) +
          optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * (optimal_path_t2_B.xOffset - 1))
        - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    optimal_path_t2_B.xOffset = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.xOffset -
            1)) + optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * rtb_pos_grid_idx_2) - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    optimal_path_t2_B.xOffset = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.xOffset -
            1)) + optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * (rtb_pos_grid_idx_2 - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.q0 - 1) {
      memcpy(&optimal_path_t2_B.c_data_d[0], &optimal_path_t2_B.index_x_data[0],
             optimal_path_t2_B.q0 * sizeof(int16_T));
    }

    if (optimal_path_t2_B.CY < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    optimal_path_t2_B.xOffset = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle
        [((optimal_path_t2_B.c_data_d[optimal_path_t2_B.align2_data_tmp] +
           optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.xOffset -
            1)) + optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] * (optimal_path_t2_B.CY - 1)) -
        1] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * optimal_path_t2_B.xPageOffset) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.xPageOffset = rtb_pos_grid_idx_1 - 2;
    optimal_path_t2_B.CY = optimal_path_t2_B.xPageOffset;
    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 + 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.xPageOffset;
    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.q0 = rtb_pos_grid_idx_0 - 1;
    optimal_path_t2_B.CY = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 + 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.xPageOffset;
    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    optimal_path_t2_B.xOffset = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.xOffset +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.q0_e - 1) {
      memcpy(&optimal_path_t2_B.e_data_l[0], &optimal_path_t2_B.y_data[0],
             optimal_path_t2_B.q0_e * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0_e;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        (optimal_path_t2_B.e_data_l[optimal_path_t2_B.align2_data_tmp] - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] * optimal_path_t2_B.b_jj) - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.q0_e - 1) {
      memcpy(&optimal_path_t2_B.e_data_l[0], &optimal_path_t2_B.y_data[0],
             optimal_path_t2_B.q0_e * sizeof(int16_T));
    }

    optimal_path_t2_B.xOffset = rtb_pos_grid_idx_2 - 2;
    optimal_path_t2_B.CY = optimal_path_t2_B.xOffset;
    if (optimal_path_t2_B.xOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0_e;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        (optimal_path_t2_B.e_data_l[optimal_path_t2_B.align2_data_tmp] - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] * (optimal_path_t2_B.CY - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.q0_e - 1) {
      memcpy(&optimal_path_t2_B.e_data_l[0], &optimal_path_t2_B.y_data[0],
             optimal_path_t2_B.q0_e * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0_e;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        (optimal_path_t2_B.e_data_l[optimal_path_t2_B.align2_data_tmp] - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] * (rtb_pos_grid_idx_2 + 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.q0_e - 1) {
      memcpy(&optimal_path_t2_B.e_data_l[0], &optimal_path_t2_B.y_data[0],
             optimal_path_t2_B.q0_e * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.xOffset;
    if (optimal_path_t2_B.xOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0_e;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        (optimal_path_t2_B.e_data_l[optimal_path_t2_B.align2_data_tmp] - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] * (optimal_path_t2_B.CY - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.q0_e - 1) {
      memcpy(&optimal_path_t2_B.e_data_l[0], &optimal_path_t2_B.y_data[0],
             optimal_path_t2_B.q0_e * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0_e;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        (optimal_path_t2_B.e_data_l[optimal_path_t2_B.align2_data_tmp] - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] * (rtb_pos_grid_idx_2 + 1)) - 1] =
        1;
    }

    if (0 <= optimal_path_t2_B.q0_e - 1) {
      memcpy(&optimal_path_t2_B.e_data_l[0], &optimal_path_t2_B.y_data[0],
             optimal_path_t2_B.q0_e * sizeof(int16_T));
    }

    if (optimal_path_t2_B.xOffset < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.q0_e;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        (optimal_path_t2_B.e_data_l[optimal_path_t2_B.align2_data_tmp] - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] * (optimal_path_t2_B.xOffset - 1))
        - 1] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 + 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) + 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) + 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) + 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) + 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.xPageOffset;
    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) + 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 + 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.xPageOffset;
    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[(rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)] = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 + 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.xPageOffset;
    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((rtb_pos_grid_idx_0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 + 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.k0;
    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    optimal_path_t2_B.xOffset = optimal_path_t2_B.q0;
    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.xOffset = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.xOffset +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.xPageOffset;
    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    if (optimal_path_t2_B.q0 < -32768) {
      optimal_path_t2_B.q0 = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.q0 +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.CY - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0_b;
    if (optimal_path_t2_B.q0_b < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 + 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0_b;
    if (optimal_path_t2_B.q0_b < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * rtb_pos_grid_idx_1) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0_b;
    if (optimal_path_t2_B.q0_b < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (rtb_pos_grid_idx_1 - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    if (optimal_path_t2_B.k0 < -32768) {
      optimal_path_t2_B.k0 = -32768;
    }

    optimal_path_t2_B.CY = optimal_path_t2_B.q0_b;
    if (optimal_path_t2_B.q0_b < -32768) {
      optimal_path_t2_B.CY = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.CY +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.k0 - 1)) +
        optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    if (0 <= optimal_path_t2_B.k - 1) {
      memcpy(&optimal_path_t2_B.d_data_o[0], &optimal_path_t2_B.b_y_data[0],
             optimal_path_t2_B.k * sizeof(int16_T));
    }

    if (optimal_path_t2_B.xPageOffset < -32768) {
      optimal_path_t2_B.xPageOffset = -32768;
    }

    if (optimal_path_t2_B.q0_b < -32768) {
      optimal_path_t2_B.q0_b = -32768;
    }

    for (optimal_path_t2_B.align2_data_tmp = 0;
         optimal_path_t2_B.align2_data_tmp < optimal_path_t2_B.k;
         optimal_path_t2_B.align2_data_tmp++) {
      optimal_path_t2_B.Obstacle[((optimal_path_t2_B.q0_b +
        optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.xPageOffset -
        1)) + optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        (optimal_path_t2_B.d_data_o[optimal_path_t2_B.align2_data_tmp] - 1)) - 1]
        = 1;
    }

    optimal_path_t2_B.nb++;
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       25; optimal_path_t2_B.align2_data_tmp++) {
    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 40;
         optimal_path_t2_B.xPageOffset++) {
      optimal_path_t2_B.nb = optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_B.xPageOffset + optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        optimal_path_t2_B.align2_data_tmp;
      optimal_path_t2_B.Obstacle[optimal_path_t2_B.nb] = 1;
      optimal_path_t2_B.Obstacle[optimal_path_t2_B.nb + 1] = 1;
      optimal_path_t2_B.Obstacle[optimal_path_t2_B.nb + 2] = 1;
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       25; optimal_path_t2_B.align2_data_tmp++) {
    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 40;
         optimal_path_t2_B.xPageOffset++) {
      optimal_path_t2_B.nb = optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_B.xPageOffset + optimal_path_t2_DW.SFunction_DIMS2[0] *
        optimal_path_t2_DW.SFunction_DIMS2[1] *
        optimal_path_t2_B.align2_data_tmp;
      optimal_path_t2_B.Obstacle[optimal_path_t2_B.nb + 62] = 1;
      optimal_path_t2_B.Obstacle[optimal_path_t2_B.nb + 63] = 1;
      optimal_path_t2_B.Obstacle[optimal_path_t2_B.nb + 64] = 1;
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       25; optimal_path_t2_B.align2_data_tmp++) {
    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 3;
         optimal_path_t2_B.xPageOffset++) {
      for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 65;
           optimal_path_t2_B.b_jj++) {
        optimal_path_t2_B.Obstacle[(optimal_path_t2_B.b_jj +
          optimal_path_t2_DW.SFunction_DIMS2[0] * optimal_path_t2_B.xPageOffset)
          + optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] *
          optimal_path_t2_B.align2_data_tmp] = 1;
      }
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       25; optimal_path_t2_B.align2_data_tmp++) {
    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 3;
         optimal_path_t2_B.xPageOffset++) {
      for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 65;
           optimal_path_t2_B.b_jj++) {
        optimal_path_t2_B.Obstacle[(optimal_path_t2_B.b_jj +
          optimal_path_t2_DW.SFunction_DIMS2[0] * (optimal_path_t2_B.xPageOffset
          + 37)) + optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] *
          optimal_path_t2_B.align2_data_tmp] = 1;
      }
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       3; optimal_path_t2_B.align2_data_tmp++) {
    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 40;
         optimal_path_t2_B.xPageOffset++) {
      for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 65;
           optimal_path_t2_B.b_jj++) {
        optimal_path_t2_B.Obstacle[(optimal_path_t2_B.b_jj +
          optimal_path_t2_DW.SFunction_DIMS2[0] * optimal_path_t2_B.xPageOffset)
          + optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] *
          optimal_path_t2_B.align2_data_tmp] = 1;
      }
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       8; optimal_path_t2_B.align2_data_tmp++) {
    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 40;
         optimal_path_t2_B.xPageOffset++) {
      for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 65;
           optimal_path_t2_B.b_jj++) {
        optimal_path_t2_B.Obstacle[(optimal_path_t2_B.b_jj +
          optimal_path_t2_DW.SFunction_DIMS2[0] * optimal_path_t2_B.xPageOffset)
          + optimal_path_t2_DW.SFunction_DIMS2[0] *
          optimal_path_t2_DW.SFunction_DIMS2[1] *
          (optimal_path_t2_B.align2_data_tmp + 17)] = 1;
      }
    }
  }

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S24>/SourceBlock' incorporates:
  //   Inport: '<S28>/In1'

  isCreated = Sub_optimal_path_t2_456.getLatestMessage
    (&optimal_path_t2_B.b_varargout_2_n);

  // Outputs for Enabled SubSystem: '<S24>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S28>/Enable'

  if (isCreated) {
    optimal_path_t2_B.In1_d = optimal_path_t2_B.b_varargout_2_n;
  }

  // End of MATLABSystem: '<S24>/SourceBlock'
  // End of Outputs for SubSystem: '<S24>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // MATLAB Function: '<Root>/MATLAB Function11' incorporates:
  //   Constant: '<Root>/Grid Waypoint_J_fortest'

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       12; optimal_path_t2_B.align2_data_tmp++) {
    optimal_path_t2_B.waypoint_path_norm[optimal_path_t2_B.align2_data_tmp] =
      (rtInf);
  }

  for (optimal_path_t2_B.nb = 0; optimal_path_t2_B.nb < 4; optimal_path_t2_B.nb
       ++) {
    optimal_path_t2_B.waypoint_path_norm[optimal_path_t2_B.nb] =
      optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.nb] -
      optimal_path_t2_B.In1_d.Pose.Position.X;
    optimal_path_t2_B.waypoint_path_norm[optimal_path_t2_B.nb + 4] =
      optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.nb + 4] -
      optimal_path_t2_B.In1_d.Pose.Position.Y;
    optimal_path_t2_B.waypoint_path_norm[optimal_path_t2_B.nb + 8] =
      optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.nb + 8] -
      optimal_path_t2_B.In1_d.Pose.Position.Z;
    optimal_path_t2_B.scale = 3.3121686421112381E-170;
    optimal_path_t2_B.absxk = fabs
      (optimal_path_t2_B.waypoint_path_norm[optimal_path_t2_B.nb]);
    if (optimal_path_t2_B.absxk > 3.3121686421112381E-170) {
      optimal_path_t2_B.MinFScore = 1.0;
      optimal_path_t2_B.scale = optimal_path_t2_B.absxk;
    } else {
      optimal_path_t2_B.t = optimal_path_t2_B.absxk / 3.3121686421112381E-170;
      optimal_path_t2_B.MinFScore = optimal_path_t2_B.t * optimal_path_t2_B.t;
    }

    optimal_path_t2_B.absxk = fabs
      (optimal_path_t2_B.waypoint_path_norm[optimal_path_t2_B.nb + 4]);
    if (optimal_path_t2_B.absxk > optimal_path_t2_B.scale) {
      optimal_path_t2_B.t = optimal_path_t2_B.scale / optimal_path_t2_B.absxk;
      optimal_path_t2_B.MinFScore = optimal_path_t2_B.MinFScore *
        optimal_path_t2_B.t * optimal_path_t2_B.t + 1.0;
      optimal_path_t2_B.scale = optimal_path_t2_B.absxk;
    } else {
      optimal_path_t2_B.t = optimal_path_t2_B.absxk / optimal_path_t2_B.scale;
      optimal_path_t2_B.MinFScore += optimal_path_t2_B.t * optimal_path_t2_B.t;
    }

    optimal_path_t2_B.absxk = fabs
      (optimal_path_t2_B.waypoint_path_norm[optimal_path_t2_B.nb + 8]);
    if (optimal_path_t2_B.absxk > optimal_path_t2_B.scale) {
      optimal_path_t2_B.t = optimal_path_t2_B.scale / optimal_path_t2_B.absxk;
      optimal_path_t2_B.MinFScore = optimal_path_t2_B.MinFScore *
        optimal_path_t2_B.t * optimal_path_t2_B.t + 1.0;
      optimal_path_t2_B.scale = optimal_path_t2_B.absxk;
    } else {
      optimal_path_t2_B.t = optimal_path_t2_B.absxk / optimal_path_t2_B.scale;
      optimal_path_t2_B.MinFScore += optimal_path_t2_B.t * optimal_path_t2_B.t;
    }

    optimal_path_t2_B.K[optimal_path_t2_B.nb] = optimal_path_t2_B.scale * sqrt
      (optimal_path_t2_B.MinFScore);
  }

  isCreated = (optimal_path_t2_B.In1_d.Pose.Position.Z < 2.0);
  if (isCreated) {
    optimal_path_t2_B.odom[0] = optimal_path_t2_P.GridWaypoint_J_fortest_Value[3];
    optimal_path_t2_B.odom[1] = optimal_path_t2_P.GridWaypoint_J_fortest_Value[7];
  } else {
    optimal_path_t2_B.odom[0] = optimal_path_t2_B.In1_d.Pose.Position.X;
    optimal_path_t2_B.odom[1] = optimal_path_t2_B.In1_d.Pose.Position.Y;
  }

  optimal_path_t2_B.next_point_cmd[0] = -2.0;
  optimal_path_t2_B.previous_point_cmd[0] = 0.0;
  optimal_path_t2_B.next_point_cmd[1] = -3.6;
  optimal_path_t2_B.previous_point_cmd[1] = 0.0;
  if (isCreated) {
    optimal_path_t2_B.odom[2] = optimal_path_t2_B.In1_d.Pose.Position.Z + 0.2;
  } else {
    optimal_path_t2_B.odom[2] = optimal_path_t2_B.In1_d.Pose.Position.Z - 10.0;
  }

  optimal_path_t2_B.next_point_cmd[2] = 1.2;
  optimal_path_t2_B.previous_point_cmd[2] = 0.0;
  optimal_path_t2_B.b_idx = 0;
  exitg1 = false;
  while ((!exitg1) && (optimal_path_t2_B.b_idx < 4)) {
    if (optimal_path_t2_DW.waypoint_flag[optimal_path_t2_B.b_idx] == 0.0) {
      optimal_path_t2_B.odom[0] =
        optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx];
      optimal_path_t2_B.odom[1] =
        optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx +
        4];
      optimal_path_t2_B.odom[2] =
        optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx +
        8];
      if (optimal_path_t2_B.b_idx + 1 < 4) {
        optimal_path_t2_B.next_point_cmd[0] =
          optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx
          + 1];
        optimal_path_t2_B.next_point_cmd[1] =
          optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx
          + 5];
        optimal_path_t2_B.next_point_cmd[2] =
          optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx
          + 9];
      }

      if (optimal_path_t2_B.b_idx + 1 > 1) {
        optimal_path_t2_B.previous_point_cmd[0] =
          optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx
          - 1];
        optimal_path_t2_B.previous_point_cmd[1] =
          optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx
          + 3];
        optimal_path_t2_B.previous_point_cmd[2] =
          optimal_path_t2_P.GridWaypoint_J_fortest_Value[optimal_path_t2_B.b_idx
          + 7];
      }

      if (optimal_path_t2_B.K[optimal_path_t2_B.b_idx] < 0.2) {
        optimal_path_t2_DW.waypoint_flag[optimal_path_t2_B.b_idx] = 1.0;
        printf("way point changed \n");
        fflush(stdout);
      }

      exitg1 = true;
    } else {
      optimal_path_t2_B.b_idx++;
    }
  }

  // MATLAB Function: '<Root>/MATLAB Function12' incorporates:
  //   Constant: '<Root>/Start Grid (Case_J1)'
  //   MATLAB Function: '<Root>/MATLAB Function8'

  optimal_path_t2_B.scale = rt_roundd_snf
    (optimal_path_t2_B.In1_d.Pose.Position.X / 0.2);
  if (optimal_path_t2_B.scale < 32768.0) {
    if (optimal_path_t2_B.scale >= -32768.0) {
      rtb_pos_grid_idx_2 = static_cast<int16_T>(optimal_path_t2_B.scale);
    } else {
      rtb_pos_grid_idx_2 = MIN_int16_T;
    }
  } else {
    rtb_pos_grid_idx_2 = MAX_int16_T;
  }

  optimal_path_t2_B.scale = rt_roundd_snf(static_cast<real_T>(rtb_pos_grid_idx_2)
    + optimal_path_t2_P.StartGridCase_J1_Value[0]);
  if (optimal_path_t2_B.scale < 32768.0) {
    if (optimal_path_t2_B.scale >= -32768.0) {
      rtb_pos_grid_idx_0 = static_cast<int16_T>(optimal_path_t2_B.scale);
    } else {
      rtb_pos_grid_idx_0 = MIN_int16_T;
    }
  } else {
    rtb_pos_grid_idx_0 = MAX_int16_T;
  }

  optimal_path_t2_B.scale = rt_roundd_snf
    (optimal_path_t2_B.In1_d.Pose.Position.Y / 0.2);
  if (optimal_path_t2_B.scale < 32768.0) {
    if (optimal_path_t2_B.scale >= -32768.0) {
      rtb_pos_grid_idx_2 = static_cast<int16_T>(optimal_path_t2_B.scale);
    } else {
      rtb_pos_grid_idx_2 = MIN_int16_T;
    }
  } else {
    rtb_pos_grid_idx_2 = MAX_int16_T;
  }

  optimal_path_t2_B.scale = rt_roundd_snf(static_cast<real_T>(rtb_pos_grid_idx_2)
    + optimal_path_t2_P.StartGridCase_J1_Value[1]);
  if (optimal_path_t2_B.scale < 32768.0) {
    if (optimal_path_t2_B.scale >= -32768.0) {
      rtb_pos_grid_idx_1 = static_cast<int16_T>(optimal_path_t2_B.scale);
    } else {
      rtb_pos_grid_idx_1 = MIN_int16_T;
    }
  } else {
    rtb_pos_grid_idx_1 = MAX_int16_T;
  }

  optimal_path_t2_B.scale = rt_roundd_snf
    (optimal_path_t2_B.In1_d.Pose.Position.Z / 0.2);
  if (optimal_path_t2_B.scale < 32768.0) {
    if (optimal_path_t2_B.scale >= -32768.0) {
      rtb_pos_grid_idx_2 = static_cast<int16_T>(optimal_path_t2_B.scale);
    } else {
      rtb_pos_grid_idx_2 = MIN_int16_T;
    }
  } else {
    rtb_pos_grid_idx_2 = MAX_int16_T;
  }

  optimal_path_t2_B.scale = rt_roundd_snf(static_cast<real_T>(rtb_pos_grid_idx_2)
    + optimal_path_t2_P.StartGridCase_J1_Value[2]);
  if (optimal_path_t2_B.scale < 32768.0) {
    if (optimal_path_t2_B.scale >= -32768.0) {
      rtb_pos_grid_idx_2 = static_cast<int16_T>(optimal_path_t2_B.scale);
    } else {
      rtb_pos_grid_idx_2 = MIN_int16_T;
    }
  } else {
    rtb_pos_grid_idx_2 = MAX_int16_T;
  }

  // MATLAB Function: '<Root>/MATLAB Function7' incorporates:
  //   Constant: '<Root>/Start Grid (Case_J1)'
  //   MATLAB Function: '<Root>/MATLAB Function12'

  if (!optimal_path_t2_DW.optimal_not_empty) {
    optimal_path_t2_DW.optimal_not_empty = true;
    optimal_path_t2_DW.curr_point[0] = optimal_path_t2_B.odom[0];
    optimal_path_t2_DW.curr_point[1] = optimal_path_t2_B.odom[1];
    optimal_path_t2_DW.curr_point[2] = optimal_path_t2_B.odom[2];
  }

  optimal_path_t2_B.k = 0;
  if ((optimal_path_t2_DW.curr_point[0] != optimal_path_t2_B.odom[0]) ||
      (optimal_path_t2_DW.curr_point[1] != optimal_path_t2_B.odom[1]) ||
      (optimal_path_t2_DW.curr_point[2] != optimal_path_t2_B.odom[2])) {
    optimal_path_t2_DW.astar_restart = 1.0;
    optimal_path_t2_DW.path_exist = false;
  }

  optimal_path_t2_DW.curr_point[0] = optimal_path_t2_B.odom[0];
  optimal_path_t2_DW.curr_point[1] = optimal_path_t2_B.odom[1];
  optimal_path_t2_DW.curr_point[2] = optimal_path_t2_B.odom[2];
  optimal_path_t2_B.align2_data_tmp = optimal_path_t2_DW.SFunction_DIMS2[0] *
    optimal_path_t2_DW.SFunction_DIMS2[1];
  optimal_path_t2_B.xPageOffset = rtb_pos_grid_idx_1 - 1;
  optimal_path_t2_B.b_jj = rtb_pos_grid_idx_2 - 1;
  if ((optimal_path_t2_B.Obstacle[((optimal_path_t2_B.xPageOffset *
         optimal_path_t2_DW.SFunction_DIMS2[0] + rtb_pos_grid_idx_0) +
        optimal_path_t2_B.align2_data_tmp * optimal_path_t2_B.b_jj) - 1] == 1) &&
      optimal_path_t2_DW.path_exist) {
    optimal_path_t2_DW.astar_restart = 0.0;
  }

  if (optimal_path_t2_DW.astar_restart == 1.0) {
    optimal_path_t2_DW.astar_restart = 0.0;
    optimal_path_t2_B.scale = rt_roundd_snf(optimal_path_t2_B.odom[0] / 0.2 +
      optimal_path_t2_P.StartGridCase_J1_Value[0]);
    if (optimal_path_t2_B.scale < 2.147483648E+9) {
      if (optimal_path_t2_B.scale >= -2.147483648E+9) {
        optimal_path_t2_B.q0_b = static_cast<int32_T>(optimal_path_t2_B.scale);
      } else {
        optimal_path_t2_B.q0_b = MIN_int32_T;
      }
    } else {
      optimal_path_t2_B.q0_b = MAX_int32_T;
    }

    optimal_path_t2_B.scale = rt_roundd_snf(optimal_path_t2_B.odom[1] / 0.2 +
      optimal_path_t2_P.StartGridCase_J1_Value[1]);
    if (optimal_path_t2_B.scale < 2.147483648E+9) {
      if (optimal_path_t2_B.scale >= -2.147483648E+9) {
        optimal_path_t2_B.q0_e = static_cast<int32_T>(optimal_path_t2_B.scale);
      } else {
        optimal_path_t2_B.q0_e = MIN_int32_T;
      }
    } else {
      optimal_path_t2_B.q0_e = MAX_int32_T;
    }

    optimal_path_t2_B.scale = rt_roundd_snf(optimal_path_t2_B.odom[2] / 0.2 +
      optimal_path_t2_P.StartGridCase_J1_Value[2]);
    if (optimal_path_t2_B.scale < 2.147483648E+9) {
      if (optimal_path_t2_B.scale >= -2.147483648E+9) {
        optimal_path_t2_B.q0 = static_cast<int32_T>(optimal_path_t2_B.scale);
      } else {
        optimal_path_t2_B.q0 = MIN_int32_T;
      }
    } else {
      optimal_path_t2_B.q0 = MAX_int32_T;
    }

    for (optimal_path_t2_B.nb = 0; optimal_path_t2_B.nb < 5;
         optimal_path_t2_B.nb++) {
      optimal_path_t2_B.k0 = 0;
      for (optimal_path_t2_B.CY = 0; optimal_path_t2_B.CY < 5;
           optimal_path_t2_B.CY++) {
        optimal_path_t2_B.xOffset = 0;
        for (optimal_path_t2_B.Current_pose_idx_2 = 0;
             optimal_path_t2_B.Current_pose_idx_2 < 5;
             optimal_path_t2_B.Current_pose_idx_2++) {
          optimal_path_t2_B.dv1[0] = 2.0 - static_cast<real_T>
            (static_cast<int8_T>(optimal_path_t2_B.nb));
          optimal_path_t2_B.dv1[1] = 2.0 - static_cast<real_T>
            (static_cast<int8_T>(optimal_path_t2_B.CY));
          optimal_path_t2_B.dv1[2] = 2.0 - static_cast<real_T>
            (static_cast<int8_T>(optimal_path_t2_B.Current_pose_idx_2));
          optimal_path_t2_abs(optimal_path_t2_B.dv1, optimal_path_t2_B.dv2);
          optimal_path_t2_power(optimal_path_t2_B.dv2, optimal_path_t2_B.dv3);
          optimal_path_t2_B.G_cost[(optimal_path_t2_B.xOffset +
            optimal_path_t2_B.k0) + optimal_path_t2_B.nb] = sqrt
            (optimal_path_t2_sum(optimal_path_t2_B.dv3));
          optimal_path_t2_B.xOffset += 25;
        }

        optimal_path_t2_B.k0 += 5;
      }
    }

    for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 65000;
         optimal_path_t2_B.b_idx++) {
      optimal_path_t2_B.GScore[optimal_path_t2_B.b_idx] = (rtInf);
    }

    memset(&optimal_path_t2_B.GScore_temp[0], 0, 125U * sizeof(real_T));
    optimal_path_t2_B.nb = rtb_pos_grid_idx_0;
    optimal_path_t2_B.CY = rtb_pos_grid_idx_1;
    optimal_path_t2_B.Current_pose_idx_2 = rtb_pos_grid_idx_2;
    for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 65000;
         optimal_path_t2_B.b_idx++) {
      optimal_path_t2_B.FScore[optimal_path_t2_B.b_idx] = (rtInf);
      optimal_path_t2_B.ClosedMAT[optimal_path_t2_B.b_idx] = 0;
      optimal_path_t2_B.ParentX[optimal_path_t2_B.b_idx] = (rtInf);
      optimal_path_t2_B.ParentY[optimal_path_t2_B.b_idx] = (rtInf);
      optimal_path_t2_B.ParentZ[optimal_path_t2_B.b_idx] = (rtInf);
    }

    optimal_path_t2_B.ParentX_tmp = ((rtb_pos_grid_idx_0 + 65 *
      optimal_path_t2_B.xPageOffset) + 2600 * optimal_path_t2_B.b_jj) - 1;
    optimal_path_t2_B.ParentX[optimal_path_t2_B.ParentX_tmp] =
      rtb_pos_grid_idx_0;
    optimal_path_t2_B.ParentY[optimal_path_t2_B.ParentX_tmp] =
      rtb_pos_grid_idx_1;
    optimal_path_t2_B.ParentZ[optimal_path_t2_B.ParentX_tmp] =
      rtb_pos_grid_idx_2;
    optimal_path_t2_DW.hover_flag = false;
    for (optimal_path_t2_B.k0 = 0; optimal_path_t2_B.k0 < 25;
         optimal_path_t2_B.k0++) {
      optimal_path_t2_B.q1 = optimal_path_t2_B.k0 + 1;
      for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 40;
           optimal_path_t2_B.xPageOffset++) {
        optimal_path_t2_B.xOffset = optimal_path_t2_B.xPageOffset + 1;
        for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 65;
             optimal_path_t2_B.b_idx++) {
          optimal_path_t2_B.Current_pose_idx_0 = optimal_path_t2_B.b_idx + 1;
          if ((optimal_path_t2_B.q0_b >= 0) &&
              (optimal_path_t2_B.Current_pose_idx_0 < optimal_path_t2_B.q0_b -
               MAX_int32_T)) {
            optimal_path_t2_B.Goal[0] = MAX_int32_T;
          } else if ((optimal_path_t2_B.q0_b < 0) &&
                     (optimal_path_t2_B.Current_pose_idx_0 >
                      optimal_path_t2_B.q0_b - MIN_int32_T)) {
            optimal_path_t2_B.Goal[0] = MIN_int32_T;
          } else {
            optimal_path_t2_B.Goal[0] = optimal_path_t2_B.q0_b -
              optimal_path_t2_B.Current_pose_idx_0;
          }

          if ((optimal_path_t2_B.q0_e >= 0) && (optimal_path_t2_B.xOffset <
               optimal_path_t2_B.q0_e - MAX_int32_T)) {
            optimal_path_t2_B.Goal[1] = MAX_int32_T;
          } else if ((optimal_path_t2_B.q0_e < 0) && (optimal_path_t2_B.xOffset >
                      optimal_path_t2_B.q0_e - MIN_int32_T)) {
            optimal_path_t2_B.Goal[1] = MIN_int32_T;
          } else {
            optimal_path_t2_B.Goal[1] = optimal_path_t2_B.q0_e -
              optimal_path_t2_B.xOffset;
          }

          if ((optimal_path_t2_B.q0 >= 0) && (optimal_path_t2_B.q1 <
               optimal_path_t2_B.q0 - MAX_int32_T)) {
            optimal_path_t2_B.Goal[2] = MAX_int32_T;
          } else if ((optimal_path_t2_B.q0 < 0) && (optimal_path_t2_B.q1 >
                      optimal_path_t2_B.q0 - MIN_int32_T)) {
            optimal_path_t2_B.Goal[2] = MIN_int32_T;
          } else {
            optimal_path_t2_B.Goal[2] = optimal_path_t2_B.q0 -
              optimal_path_t2_B.q1;
          }

          optimal_path_t2_abs_l(optimal_path_t2_B.Goal, optimal_path_t2_B.iv);
          optimal_path_t2_power_e(optimal_path_t2_B.iv, optimal_path_t2_B.Goal);
          optimal_path_t2_B.HScore[(optimal_path_t2_B.b_idx + 65 *
            optimal_path_t2_B.xPageOffset) + 2600 * optimal_path_t2_B.k0] = sqrt
            (optimal_path_t2_sum_i(optimal_path_t2_B.Goal)) * 1.3;
        }
      }
    }

    optimal_path_t2_B.FScore[optimal_path_t2_B.ParentX_tmp] =
      optimal_path_t2_B.HScore[(((rtb_pos_grid_idx_1 - 1) * 65 +
      rtb_pos_grid_idx_0) + (rtb_pos_grid_idx_2 - 1) * 2600) - 1];
    optimal_path_t2_B.GScore[optimal_path_t2_B.ParentX_tmp] = 0.0;
    optimal_path_t2_B.k0 = optimal_path_t2_DW.SFunction_DIMS2[1] *
      optimal_path_t2_DW.SFunction_DIMS2[2] *
      optimal_path_t2_DW.SFunction_DIMS2[0];
    optimal_path_t2_B.b_idx = 0;
    while (optimal_path_t2_B.b_idx <= optimal_path_t2_B.k0 - 1) {
      if (optimal_path_t2_B.Obstacle[optimal_path_t2_B.b_idx] == 1) {
        optimal_path_t2_B.ClosedMAT[optimal_path_t2_B.b_idx] = 1;
      }

      optimal_path_t2_B.b_idx++;
    }

    optimal_path_t2_B.k0 = 0;
    do {
      exitg2 = 0;
      printf("A* loop \n");
      fflush(stdout);
      for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 1000;
           optimal_path_t2_B.b_idx++) {
        optimal_path_t2_B.xPageOffset = optimal_path_t2_B.b_idx * 65;
        optimal_path_t2_B.minval[optimal_path_t2_B.b_idx] =
          optimal_path_t2_B.FScore[optimal_path_t2_B.xPageOffset];
        for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 64;
             optimal_path_t2_B.b_jj++) {
          optimal_path_t2_B.MinFScore =
            optimal_path_t2_B.minval[optimal_path_t2_B.b_idx];
          optimal_path_t2_B.xOffset = (optimal_path_t2_B.xPageOffset +
            optimal_path_t2_B.b_jj) + 1;
          if (optimal_path_t2_B.minval[optimal_path_t2_B.b_idx] >
              optimal_path_t2_B.FScore[optimal_path_t2_B.xOffset]) {
            optimal_path_t2_B.MinFScore =
              optimal_path_t2_B.FScore[optimal_path_t2_B.xOffset];
          }

          optimal_path_t2_B.minval[optimal_path_t2_B.b_idx] =
            optimal_path_t2_B.MinFScore;
        }
      }

      for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 25;
           optimal_path_t2_B.b_idx++) {
        optimal_path_t2_B.xPageOffset = optimal_path_t2_B.b_idx * 40;
        optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
          optimal_path_t2_B.minval[optimal_path_t2_B.xPageOffset];
        for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 39;
             optimal_path_t2_B.b_jj++) {
          optimal_path_t2_B.MinFScore =
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx];
          optimal_path_t2_B.xOffset = (optimal_path_t2_B.xPageOffset +
            optimal_path_t2_B.b_jj) + 1;
          if (optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] >
              optimal_path_t2_B.minval[optimal_path_t2_B.xOffset]) {
            optimal_path_t2_B.MinFScore =
              optimal_path_t2_B.minval[optimal_path_t2_B.xOffset];
          }

          optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
            optimal_path_t2_B.MinFScore;
        }
      }

      optimal_path_t2_B.MinFScore = optimal_path_t2_B.b_minval[0];
      for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 24;
           optimal_path_t2_B.b_idx++) {
        optimal_path_t2_B.scale =
          optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx + 1];
        if (optimal_path_t2_B.MinFScore > optimal_path_t2_B.scale) {
          optimal_path_t2_B.MinFScore = optimal_path_t2_B.scale;
        }
      }

      if (rtIsInf(optimal_path_t2_B.MinFScore)) {
        optimal_path_t2_DW.hover_flag = true;
        optimal_path_t2_DW.astar_restart = 1.0;
        optimal_path_t2_B.k = 1;
        optimal_path_t2_DW.path_exist = false;
        printf("No path -> restart A*, Map reset \n");
        fflush(stdout);
        exitg2 = 1;
      } else {
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             65000; optimal_path_t2_B.xPageOffset++) {
          optimal_path_t2_B.FScore_b[optimal_path_t2_B.xPageOffset] =
            (optimal_path_t2_B.FScore[optimal_path_t2_B.xPageOffset] ==
             optimal_path_t2_B.MinFScore);
        }

        optimal_path_t2_eml_find(optimal_path_t2_B.FScore_b,
          optimal_path_t2_B.ii_data, &optimal_path_t2_B.ii_size,
          optimal_path_t2_B.jj_data, &optimal_path_t2_B.jj_size);
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             10; optimal_path_t2_B.xPageOffset++) {
          optimal_path_t2_B.HScore_temp[optimal_path_t2_B.xPageOffset] = (rtInf);
        }

        optimal_path_t2_B.minHScore_data[0] = 1;
        optimal_path_t2_B.nb = 0;
        while (optimal_path_t2_B.nb <= optimal_path_t2_B.ii_size - 1) {
          optimal_path_t2_B.MinFScore = static_cast<real_T>
            (optimal_path_t2_B.jj_data[optimal_path_t2_B.nb]) / 40.0;
          if (optimal_path_t2_B.MinFScore < 0.0) {
            optimal_path_t2_B.MinFScore = ceil(optimal_path_t2_B.MinFScore);
          } else {
            optimal_path_t2_B.MinFScore = floor(optimal_path_t2_B.MinFScore);
          }

          optimal_path_t2_B.HScore_temp[optimal_path_t2_B.nb] =
            optimal_path_t2_B.HScore[(((static_cast<int32_T>(rt_remd_snf(
            static_cast<real_T>(optimal_path_t2_B.jj_data[optimal_path_t2_B.nb]),
            40.0)) - 1) * 65 + optimal_path_t2_B.ii_data[optimal_path_t2_B.nb])
            + ((static_cast<int32_T>(optimal_path_t2_B.MinFScore) + 1) - 1) *
            2600) - 1];
          optimal_path_t2_B.MinFScore = optimal_path_t2_B.HScore_temp[0];
          for (optimal_path_t2_B.CY = 0; optimal_path_t2_B.CY < 9;
               optimal_path_t2_B.CY++) {
            optimal_path_t2_B.scale =
              optimal_path_t2_B.HScore_temp[optimal_path_t2_B.CY + 1];
            if (optimal_path_t2_B.MinFScore > optimal_path_t2_B.scale) {
              optimal_path_t2_B.MinFScore = optimal_path_t2_B.scale;
            }
          }

          optimal_path_t2_B.CY = 0;
          optimal_path_t2_B.Current_pose_idx_2 = 0;
          exitg1 = false;
          while ((!exitg1) && (optimal_path_t2_B.Current_pose_idx_2 < 10)) {
            if (optimal_path_t2_B.HScore_temp[optimal_path_t2_B.Current_pose_idx_2]
                == optimal_path_t2_B.MinFScore) {
              optimal_path_t2_B.CY++;
              optimal_path_t2_B.b_ii_data[optimal_path_t2_B.CY - 1] =
                static_cast<int8_T>((optimal_path_t2_B.Current_pose_idx_2 + 1));
              if (optimal_path_t2_B.CY >= 10) {
                exitg1 = true;
              } else {
                optimal_path_t2_B.Current_pose_idx_2++;
              }
            } else {
              optimal_path_t2_B.Current_pose_idx_2++;
            }
          }

          if (1 > optimal_path_t2_B.CY) {
            optimal_path_t2_B.CY = 0;
          }

          optimal_path_t2_B.Current_pose_idx_2 = optimal_path_t2_B.CY - 1;
          if (0 <= optimal_path_t2_B.Current_pose_idx_2) {
            memcpy(&optimal_path_t2_B.minHScore_data[0],
                   &optimal_path_t2_B.b_ii_data[0],
                   (optimal_path_t2_B.Current_pose_idx_2 + 1) * sizeof(int8_T));
          }

          optimal_path_t2_B.nb++;
        }

        optimal_path_t2_B.xOffset = optimal_path_t2_B.minHScore_data[0] - 1;
        optimal_path_t2_B.CY = static_cast<int32_T>(rt_remd_snf
          (static_cast<real_T>
           (optimal_path_t2_B.jj_data[optimal_path_t2_B.xOffset]), 40.0));
        optimal_path_t2_B.MinFScore = static_cast<real_T>
          (optimal_path_t2_B.jj_data[optimal_path_t2_B.xOffset]) / 40.0;
        optimal_path_t2_B.Current_pose_idx_0 =
          optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset];
        if (optimal_path_t2_B.MinFScore < 0.0) {
          optimal_path_t2_B.MinFScore = ceil(optimal_path_t2_B.MinFScore);
        } else {
          optimal_path_t2_B.MinFScore = floor(optimal_path_t2_B.MinFScore);
        }

        optimal_path_t2_B.Current_pose_idx_2 = static_cast<int32_T>
          (optimal_path_t2_B.MinFScore) + 1;
        optimal_path_t2_B.nb =
          optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset];
        optimal_path_t2_B.GScore_tmp_tmp = (optimal_path_t2_B.Current_pose_idx_2
          - 1) * 2600;
        optimal_path_t2_B.GScore_tmp = (((optimal_path_t2_B.CY - 1) * 65 +
          optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset]) +
          optimal_path_t2_B.GScore_tmp_tmp) - 1;
        optimal_path_t2_B.xPageOffset = 0;
        for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
             optimal_path_t2_B.b_jj++) {
          for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 5;
               optimal_path_t2_B.b_idx++) {
            optimal_path_t2_B.GScore_temp_tmp = optimal_path_t2_B.b_idx +
              optimal_path_t2_B.xPageOffset;
            optimal_path_t2_B.GScore_temp[optimal_path_t2_B.GScore_temp_tmp] =
              optimal_path_t2_B.G_cost[optimal_path_t2_B.GScore_temp_tmp] +
              optimal_path_t2_B.GScore[optimal_path_t2_B.GScore_tmp];
            optimal_path_t2_B.GScore_temp_tmp_j =
              optimal_path_t2_B.GScore_temp_tmp + 25;
            optimal_path_t2_B.GScore_temp[optimal_path_t2_B.GScore_temp_tmp_j] =
              optimal_path_t2_B.G_cost[optimal_path_t2_B.GScore_temp_tmp_j] +
              optimal_path_t2_B.GScore[optimal_path_t2_B.GScore_tmp];
            optimal_path_t2_B.GScore_temp_tmp_j =
              optimal_path_t2_B.GScore_temp_tmp + 50;
            optimal_path_t2_B.GScore_temp[optimal_path_t2_B.GScore_temp_tmp_j] =
              optimal_path_t2_B.G_cost[optimal_path_t2_B.GScore_temp_tmp_j] +
              optimal_path_t2_B.GScore[optimal_path_t2_B.GScore_tmp];
            optimal_path_t2_B.GScore_temp_tmp_j =
              optimal_path_t2_B.GScore_temp_tmp + 75;
            optimal_path_t2_B.GScore_temp[optimal_path_t2_B.GScore_temp_tmp_j] =
              optimal_path_t2_B.G_cost[optimal_path_t2_B.GScore_temp_tmp_j] +
              optimal_path_t2_B.GScore[optimal_path_t2_B.GScore_tmp];
            optimal_path_t2_B.GScore_temp_tmp += 100;
            optimal_path_t2_B.GScore_temp[optimal_path_t2_B.GScore_temp_tmp] =
              optimal_path_t2_B.G_cost[optimal_path_t2_B.GScore_temp_tmp] +
              optimal_path_t2_B.GScore[optimal_path_t2_B.GScore_tmp];
          }

          optimal_path_t2_B.xPageOffset += 5;
        }

        for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 25;
             optimal_path_t2_B.b_idx++) {
          optimal_path_t2_B.b_jj = optimal_path_t2_B.b_idx % 5;
          optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
          optimal_path_t2_B.xPageOffset = div_nzp_s32_floor
            (optimal_path_t2_B.b_idx, 5);
          optimal_path_t2_B.MinFScore =
            optimal_path_t2_B.GScore_temp[optimal_path_t2_B.b_jj + 5 *
            optimal_path_t2_B.xPageOffset];
          if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
              (optimal_path_t2_B.q1 < MIN_int32_T
               - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                     (optimal_path_t2_B.q1 > MAX_int32_T
                      - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
          }

          optimal_path_t2_B.scale = optimal_path_t2_B.GScore
            [((((optimal_path_t2_B.CY + optimal_path_t2_B.xPageOffset) - 3) * 65
               + optimal_path_t2_B.q1) + (optimal_path_t2_B.Current_pose_idx_2 +
               1) * 2600) - 1];
          if ((optimal_path_t2_B.MinFScore < optimal_path_t2_B.scale) || rtIsNaN
              (optimal_path_t2_B.scale)) {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.MinFScore;
          } else {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.scale;
          }
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.GScore[((optimal_path_t2_B.q1 + 65 *
              (optimal_path_t2_B.xPageOffset + optimal_path_t2_B.b_idx)) + 2600 *
              (optimal_path_t2_B.Current_pose_idx_2 + 1)) - 1] =
              optimal_path_t2_B.b_minval[5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj];
          }
        }

        for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 25;
             optimal_path_t2_B.b_idx++) {
          optimal_path_t2_B.q1 = optimal_path_t2_B.b_idx % 5 - 2;
          optimal_path_t2_B.MinFScore = optimal_path_t2_B.GScore_temp
            [(optimal_path_t2_B.b_idx % 5 + 5 * div_nzp_s32_floor
              (optimal_path_t2_B.b_idx, 5)) + 25];
          if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
              (optimal_path_t2_B.q1 < MIN_int32_T
               - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                     (optimal_path_t2_B.q1 > MAX_int32_T
                      - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
          }

          optimal_path_t2_B.scale = optimal_path_t2_B.GScore
            [((((optimal_path_t2_B.CY + div_nzp_s32_floor
                 (optimal_path_t2_B.b_idx, 5)) - 3) * 65 + optimal_path_t2_B.q1)
              + 2600 * optimal_path_t2_B.Current_pose_idx_2) - 1];
          if ((optimal_path_t2_B.MinFScore < optimal_path_t2_B.scale) || rtIsNaN
              (optimal_path_t2_B.scale)) {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.MinFScore;
          } else {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.scale;
          }
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.GScore[((optimal_path_t2_B.q1 + 65 *
              (optimal_path_t2_B.xPageOffset + optimal_path_t2_B.b_idx)) + 2600 *
              optimal_path_t2_B.Current_pose_idx_2) - 1] =
              optimal_path_t2_B.b_minval[5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj];
          }
        }

        for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 25;
             optimal_path_t2_B.b_idx++) {
          optimal_path_t2_B.q1 = optimal_path_t2_B.b_idx % 5 - 2;
          optimal_path_t2_B.MinFScore = optimal_path_t2_B.GScore_temp
            [(optimal_path_t2_B.b_idx % 5 + 5 * div_nzp_s32_floor
              (optimal_path_t2_B.b_idx, 5)) + 50];
          if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
              (optimal_path_t2_B.q1 < MIN_int32_T
               - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                     (optimal_path_t2_B.q1 > MAX_int32_T
                      - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
          }

          optimal_path_t2_B.scale = optimal_path_t2_B.GScore
            [((((optimal_path_t2_B.CY + div_nzp_s32_floor
                 (optimal_path_t2_B.b_idx, 5)) - 3) * 65 + optimal_path_t2_B.q1)
              + optimal_path_t2_B.GScore_tmp_tmp) - 1];
          if ((optimal_path_t2_B.MinFScore < optimal_path_t2_B.scale) || rtIsNaN
              (optimal_path_t2_B.scale)) {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.MinFScore;
          } else {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.scale;
          }
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.GScore[((optimal_path_t2_B.q1 + 65 *
              (optimal_path_t2_B.xPageOffset + optimal_path_t2_B.b_idx)) +
              optimal_path_t2_B.GScore_tmp_tmp) - 1] =
              optimal_path_t2_B.b_minval[5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj];
          }
        }

        for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 25;
             optimal_path_t2_B.b_idx++) {
          optimal_path_t2_B.q1 = optimal_path_t2_B.b_idx % 5 - 2;
          optimal_path_t2_B.MinFScore = optimal_path_t2_B.GScore_temp
            [(optimal_path_t2_B.b_idx % 5 + 5 * div_nzp_s32_floor
              (optimal_path_t2_B.b_idx, 5)) + 75];
          if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
              (optimal_path_t2_B.q1 < MIN_int32_T
               - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                     (optimal_path_t2_B.q1 > MAX_int32_T
                      - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
          }

          optimal_path_t2_B.scale = optimal_path_t2_B.GScore
            [((((optimal_path_t2_B.CY + div_nzp_s32_floor
                 (optimal_path_t2_B.b_idx, 5)) - 3) * 65 + optimal_path_t2_B.q1)
              + (optimal_path_t2_B.Current_pose_idx_2 - 2) * 2600) - 1];
          if ((optimal_path_t2_B.MinFScore < optimal_path_t2_B.scale) || rtIsNaN
              (optimal_path_t2_B.scale)) {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.MinFScore;
          } else {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.scale;
          }
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.GScore[((optimal_path_t2_B.q1 + 65 *
              (optimal_path_t2_B.xPageOffset + optimal_path_t2_B.b_idx)) + 2600 *
              (optimal_path_t2_B.Current_pose_idx_2 - 2)) - 1] =
              optimal_path_t2_B.b_minval[5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj];
          }
        }

        for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 25;
             optimal_path_t2_B.b_idx++) {
          optimal_path_t2_B.q1 = optimal_path_t2_B.b_idx % 5 - 2;
          optimal_path_t2_B.MinFScore = optimal_path_t2_B.GScore_temp
            [(optimal_path_t2_B.b_idx % 5 + 5 * div_nzp_s32_floor
              (optimal_path_t2_B.b_idx, 5)) + 100];
          if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
              (optimal_path_t2_B.q1 < MIN_int32_T
               - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                     (optimal_path_t2_B.q1 > MAX_int32_T
                      - optimal_path_t2_B.Current_pose_idx_0)) {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
          }

          optimal_path_t2_B.scale = optimal_path_t2_B.GScore
            [((((optimal_path_t2_B.CY + div_nzp_s32_floor
                 (optimal_path_t2_B.b_idx, 5)) - 3) * 65 + optimal_path_t2_B.q1)
              + (optimal_path_t2_B.Current_pose_idx_2 - 3) * 2600) - 1];
          if ((optimal_path_t2_B.MinFScore < optimal_path_t2_B.scale) || rtIsNaN
              (optimal_path_t2_B.scale)) {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.MinFScore;
          } else {
            optimal_path_t2_B.b_minval[optimal_path_t2_B.b_idx] =
              optimal_path_t2_B.scale;
          }
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.GScore[((optimal_path_t2_B.q1 + 65 *
              (optimal_path_t2_B.xPageOffset + optimal_path_t2_B.b_idx)) + 2600 *
              (optimal_path_t2_B.Current_pose_idx_2 - 3)) - 1] =
              optimal_path_t2_B.b_minval[5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj];
          }
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             65000; optimal_path_t2_B.xPageOffset++) {
          optimal_path_t2_B.FScore[optimal_path_t2_B.xPageOffset] =
            optimal_path_t2_B.GScore[optimal_path_t2_B.xPageOffset] +
            optimal_path_t2_B.HScore[optimal_path_t2_B.xPageOffset];
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 2;
        optimal_path_t2_B.GScore_tmp = optimal_path_t2_B.Current_pose_idx_2 - 2;
        if (optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset] < -2147483647)
        {
          optimal_path_t2_B.q1 = MIN_int32_T;
        } else {
          optimal_path_t2_B.q1 =
            optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset] + -1;
        }

        if (optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset] > 2147483646) {
          optimal_path_t2_B.GScore_temp_tmp = MAX_int32_T;
        } else {
          optimal_path_t2_B.GScore_temp_tmp =
            optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset] + 1;
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             3; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 3;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.GScore_temp_tmp_j = 65 * (optimal_path_t2_B.b_jj +
              optimal_path_t2_B.b_idx);
            optimal_path_t2_B.ClosedMAT_tmp = 2600 *
              (optimal_path_t2_B.xPageOffset + optimal_path_t2_B.GScore_tmp);
            optimal_path_t2_B.ClosedMAT[((optimal_path_t2_B.q1 +
              optimal_path_t2_B.GScore_temp_tmp_j) +
              optimal_path_t2_B.ClosedMAT_tmp) - 1] = 1;
            optimal_path_t2_B.ClosedMAT[((optimal_path_t2_B.Current_pose_idx_0 +
              optimal_path_t2_B.GScore_temp_tmp_j) +
              optimal_path_t2_B.ClosedMAT_tmp) - 1] = 1;
            optimal_path_t2_B.ClosedMAT[((optimal_path_t2_B.GScore_temp_tmp +
              optimal_path_t2_B.GScore_temp_tmp_j) +
              optimal_path_t2_B.ClosedMAT_tmp) - 1] = 1;
          }
        }

        for (optimal_path_t2_B.b_idx = 0; optimal_path_t2_B.b_idx < 65000;
             optimal_path_t2_B.b_idx++) {
          if (optimal_path_t2_B.ClosedMAT[optimal_path_t2_B.b_idx] == 1) {
            optimal_path_t2_B.FScore[optimal_path_t2_B.b_idx] = (rtInf);
          }
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.x_tmp = 5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj;
            optimal_path_t2_B.x[optimal_path_t2_B.x_tmp] =
              (optimal_path_t2_B.GScore[(((optimal_path_t2_B.xPageOffset +
                  optimal_path_t2_B.b_idx) * 65 + optimal_path_t2_B.q1) +
                (optimal_path_t2_B.Current_pose_idx_2 + 1) * 2600) - 1] ==
               optimal_path_t2_B.GScore_temp[optimal_path_t2_B.x_tmp]);
          }
        }

        optimal_path_t2_B.b_idx = 0;
        optimal_path_t2_B.xPageOffset = 1;
        optimal_path_t2_B.b_jj = 1;
        exitg1 = false;
        while ((!exitg1) && (optimal_path_t2_B.b_jj <= 5)) {
          guard1 = false;
          if (optimal_path_t2_B.x[((optimal_path_t2_B.b_jj - 1) * 5 +
               optimal_path_t2_B.xPageOffset) - 1]) {
            optimal_path_t2_B.b_idx++;
            optimal_path_t2_B.G_row1_data[optimal_path_t2_B.b_idx - 1] =
              optimal_path_t2_B.xPageOffset;
            optimal_path_t2_B.G_col1_data[optimal_path_t2_B.b_idx - 1] =
              static_cast<int8_T>(optimal_path_t2_B.b_jj);
            if (optimal_path_t2_B.b_idx >= 25) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            optimal_path_t2_B.xPageOffset++;
            if (optimal_path_t2_B.xPageOffset > 5) {
              optimal_path_t2_B.xPageOffset = 1;
              optimal_path_t2_B.b_jj++;
            }
          }
        }

        if (1 > optimal_path_t2_B.b_idx) {
          optimal_path_t2_B.GScore_tmp = 0;
          optimal_path_t2_B.ParentX_tmp = 0;
        } else {
          optimal_path_t2_B.GScore_tmp = optimal_path_t2_B.b_idx;
          optimal_path_t2_B.ParentX_tmp = optimal_path_t2_B.b_idx;
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.x_tmp = 5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj;
            optimal_path_t2_B.x[optimal_path_t2_B.x_tmp] =
              (optimal_path_t2_B.GScore[(((optimal_path_t2_B.xPageOffset +
                  optimal_path_t2_B.b_idx) * 65 + optimal_path_t2_B.q1) + 2600 *
                optimal_path_t2_B.Current_pose_idx_2) - 1] ==
               optimal_path_t2_B.GScore_temp[optimal_path_t2_B.x_tmp + 25]);
          }
        }

        optimal_path_t2_B.b_idx = 0;
        optimal_path_t2_B.xPageOffset = 1;
        optimal_path_t2_B.b_jj = 1;
        exitg1 = false;
        while ((!exitg1) && (optimal_path_t2_B.b_jj <= 5)) {
          guard1 = false;
          if (optimal_path_t2_B.x[((optimal_path_t2_B.b_jj - 1) * 5 +
               optimal_path_t2_B.xPageOffset) - 1]) {
            optimal_path_t2_B.b_idx++;
            optimal_path_t2_B.G_row2_data[optimal_path_t2_B.b_idx - 1] =
              optimal_path_t2_B.xPageOffset;
            optimal_path_t2_B.G_col2_data[optimal_path_t2_B.b_idx - 1] =
              static_cast<int8_T>(optimal_path_t2_B.b_jj);
            if (optimal_path_t2_B.b_idx >= 25) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            optimal_path_t2_B.xPageOffset++;
            if (optimal_path_t2_B.xPageOffset > 5) {
              optimal_path_t2_B.xPageOffset = 1;
              optimal_path_t2_B.b_jj++;
            }
          }
        }

        if (1 > optimal_path_t2_B.b_idx) {
          optimal_path_t2_B.GScore_temp_tmp = 0;
          optimal_path_t2_B.G_col2_size_idx_0 = 0;
        } else {
          optimal_path_t2_B.GScore_temp_tmp = optimal_path_t2_B.b_idx;
          optimal_path_t2_B.G_col2_size_idx_0 = optimal_path_t2_B.b_idx;
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.x_tmp = 5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj;
            optimal_path_t2_B.x[optimal_path_t2_B.x_tmp] =
              (optimal_path_t2_B.GScore[(((optimal_path_t2_B.xPageOffset +
                  optimal_path_t2_B.b_idx) * 65 + optimal_path_t2_B.q1) +
                optimal_path_t2_B.GScore_tmp_tmp) - 1] ==
               optimal_path_t2_B.GScore_temp[optimal_path_t2_B.x_tmp + 50]);
          }
        }

        optimal_path_t2_B.b_idx = 0;
        optimal_path_t2_B.xPageOffset = 1;
        optimal_path_t2_B.b_jj = 1;
        exitg1 = false;
        while ((!exitg1) && (optimal_path_t2_B.b_jj <= 5)) {
          guard1 = false;
          if (optimal_path_t2_B.x[((optimal_path_t2_B.b_jj - 1) * 5 +
               optimal_path_t2_B.xPageOffset) - 1]) {
            optimal_path_t2_B.b_idx++;
            optimal_path_t2_B.G_row3_data[optimal_path_t2_B.b_idx - 1] =
              optimal_path_t2_B.xPageOffset;
            optimal_path_t2_B.G_col3_data[optimal_path_t2_B.b_idx - 1] =
              static_cast<int8_T>(optimal_path_t2_B.b_jj);
            if (optimal_path_t2_B.b_idx >= 25) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            optimal_path_t2_B.xPageOffset++;
            if (optimal_path_t2_B.xPageOffset > 5) {
              optimal_path_t2_B.xPageOffset = 1;
              optimal_path_t2_B.b_jj++;
            }
          }
        }

        if (1 > optimal_path_t2_B.b_idx) {
          optimal_path_t2_B.GScore_temp_tmp_j = 0;
          optimal_path_t2_B.G_col3_size_idx_0 = 0;
        } else {
          optimal_path_t2_B.GScore_temp_tmp_j = optimal_path_t2_B.b_idx;
          optimal_path_t2_B.G_col3_size_idx_0 = optimal_path_t2_B.b_idx;
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.x_tmp = 5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj;
            optimal_path_t2_B.x[optimal_path_t2_B.x_tmp] =
              (optimal_path_t2_B.GScore[(((optimal_path_t2_B.xPageOffset +
                  optimal_path_t2_B.b_idx) * 65 + optimal_path_t2_B.q1) +
                (optimal_path_t2_B.Current_pose_idx_2 - 2) * 2600) - 1] ==
               optimal_path_t2_B.GScore_temp[optimal_path_t2_B.x_tmp + 75]);
          }
        }

        optimal_path_t2_B.b_idx = 0;
        optimal_path_t2_B.xPageOffset = 1;
        optimal_path_t2_B.b_jj = 1;
        exitg1 = false;
        while ((!exitg1) && (optimal_path_t2_B.b_jj <= 5)) {
          guard1 = false;
          if (optimal_path_t2_B.x[((optimal_path_t2_B.b_jj - 1) * 5 +
               optimal_path_t2_B.xPageOffset) - 1]) {
            optimal_path_t2_B.b_idx++;
            optimal_path_t2_B.G_row4_data[optimal_path_t2_B.b_idx - 1] =
              optimal_path_t2_B.xPageOffset;
            optimal_path_t2_B.G_col4_data[optimal_path_t2_B.b_idx - 1] =
              static_cast<int8_T>(optimal_path_t2_B.b_jj);
            if (optimal_path_t2_B.b_idx >= 25) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            optimal_path_t2_B.xPageOffset++;
            if (optimal_path_t2_B.xPageOffset > 5) {
              optimal_path_t2_B.xPageOffset = 1;
              optimal_path_t2_B.b_jj++;
            }
          }
        }

        if (1 > optimal_path_t2_B.b_idx) {
          optimal_path_t2_B.ClosedMAT_tmp = 0;
          optimal_path_t2_B.G_col4_size_idx_0 = 0;
        } else {
          optimal_path_t2_B.ClosedMAT_tmp = optimal_path_t2_B.b_idx;
          optimal_path_t2_B.G_col4_size_idx_0 = optimal_path_t2_B.b_idx;
        }

        optimal_path_t2_B.b_idx = optimal_path_t2_B.CY - 3;
        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             5; optimal_path_t2_B.xPageOffset++) {
          for (optimal_path_t2_B.b_jj = 0; optimal_path_t2_B.b_jj < 5;
               optimal_path_t2_B.b_jj++) {
            optimal_path_t2_B.q1 = optimal_path_t2_B.b_jj - 2;
            if ((optimal_path_t2_B.Current_pose_idx_0 < 0) &&
                (optimal_path_t2_B.q1 < MIN_int32_T
                 - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MIN_int32_T;
            } else if ((optimal_path_t2_B.Current_pose_idx_0 > 0) &&
                       (optimal_path_t2_B.q1 > MAX_int32_T
                        - optimal_path_t2_B.Current_pose_idx_0)) {
              optimal_path_t2_B.q1 = MAX_int32_T;
            } else {
              optimal_path_t2_B.q1 += optimal_path_t2_B.Current_pose_idx_0;
            }

            optimal_path_t2_B.x_tmp = 5 * optimal_path_t2_B.xPageOffset +
              optimal_path_t2_B.b_jj;
            optimal_path_t2_B.x[optimal_path_t2_B.x_tmp] =
              (optimal_path_t2_B.GScore[(((optimal_path_t2_B.xPageOffset +
                  optimal_path_t2_B.b_idx) * 65 + optimal_path_t2_B.q1) +
                (optimal_path_t2_B.Current_pose_idx_2 - 3) * 2600) - 1] ==
               optimal_path_t2_B.GScore_temp[optimal_path_t2_B.x_tmp + 100]);
          }
        }

        optimal_path_t2_B.b_idx = 0;
        optimal_path_t2_B.xPageOffset = 1;
        optimal_path_t2_B.b_jj = 1;
        exitg1 = false;
        while ((!exitg1) && (optimal_path_t2_B.b_jj <= 5)) {
          guard1 = false;
          if (optimal_path_t2_B.x[((optimal_path_t2_B.b_jj - 1) * 5 +
               optimal_path_t2_B.xPageOffset) - 1]) {
            optimal_path_t2_B.b_idx++;
            optimal_path_t2_B.G_row5_data[optimal_path_t2_B.b_idx - 1] =
              optimal_path_t2_B.xPageOffset;
            optimal_path_t2_B.G_col5_data[optimal_path_t2_B.b_idx - 1] =
              static_cast<int8_T>(optimal_path_t2_B.b_jj);
            if (optimal_path_t2_B.b_idx >= 25) {
              exitg1 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            optimal_path_t2_B.xPageOffset++;
            if (optimal_path_t2_B.xPageOffset > 5) {
              optimal_path_t2_B.xPageOffset = 1;
              optimal_path_t2_B.b_jj++;
            }
          }
        }

        if (1 > optimal_path_t2_B.b_idx) {
          optimal_path_t2_B.b_jj = 0;
          optimal_path_t2_B.b_idx = 0;
        } else {
          optimal_path_t2_B.b_jj = optimal_path_t2_B.b_idx;
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.GScore_tmp; optimal_path_t2_B.xPageOffset++) {
          if ((optimal_path_t2_B.G_row1_data[optimal_path_t2_B.xPageOffset] < 0)
              && (optimal_path_t2_B.Current_pose_idx_0 < MIN_int32_T
                  - optimal_path_t2_B.G_row1_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if
              ((optimal_path_t2_B.G_row1_data[optimal_path_t2_B.xPageOffset] > 0)
               && (optimal_path_t2_B.Current_pose_idx_0 > MAX_int32_T
                   - optimal_path_t2_B.G_row1_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 =
              optimal_path_t2_B.G_row1_data[optimal_path_t2_B.xPageOffset] +
              optimal_path_t2_B.Current_pose_idx_0;
          }

          if (optimal_path_t2_B.q1 < -2147483645) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else {
            optimal_path_t2_B.q1 -= 3;
          }

          optimal_path_t2_B.G_row1_data[optimal_path_t2_B.xPageOffset] =
            optimal_path_t2_B.q1;
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.GScore_temp_tmp; optimal_path_t2_B.xPageOffset++)
        {
          if ((optimal_path_t2_B.G_row2_data[optimal_path_t2_B.xPageOffset] < 0)
              && (optimal_path_t2_B.Current_pose_idx_0 < MIN_int32_T
                  - optimal_path_t2_B.G_row2_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if
              ((optimal_path_t2_B.G_row2_data[optimal_path_t2_B.xPageOffset] > 0)
               && (optimal_path_t2_B.Current_pose_idx_0 > MAX_int32_T
                   - optimal_path_t2_B.G_row2_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 =
              optimal_path_t2_B.G_row2_data[optimal_path_t2_B.xPageOffset] +
              optimal_path_t2_B.Current_pose_idx_0;
          }

          if (optimal_path_t2_B.q1 < -2147483645) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else {
            optimal_path_t2_B.q1 -= 3;
          }

          optimal_path_t2_B.G_row2_data[optimal_path_t2_B.xPageOffset] =
            optimal_path_t2_B.q1;
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.GScore_temp_tmp_j; optimal_path_t2_B.xPageOffset
             ++) {
          if ((optimal_path_t2_B.G_row3_data[optimal_path_t2_B.xPageOffset] < 0)
              && (optimal_path_t2_B.Current_pose_idx_0 < MIN_int32_T
                  - optimal_path_t2_B.G_row3_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if
              ((optimal_path_t2_B.G_row3_data[optimal_path_t2_B.xPageOffset] > 0)
               && (optimal_path_t2_B.Current_pose_idx_0 > MAX_int32_T
                   - optimal_path_t2_B.G_row3_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 =
              optimal_path_t2_B.G_row3_data[optimal_path_t2_B.xPageOffset] +
              optimal_path_t2_B.Current_pose_idx_0;
          }

          if (optimal_path_t2_B.q1 < -2147483645) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else {
            optimal_path_t2_B.q1 -= 3;
          }

          optimal_path_t2_B.G_row3_data[optimal_path_t2_B.xPageOffset] =
            optimal_path_t2_B.q1;
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.ClosedMAT_tmp; optimal_path_t2_B.xPageOffset++) {
          if ((optimal_path_t2_B.G_row4_data[optimal_path_t2_B.xPageOffset] < 0)
              && (optimal_path_t2_B.Current_pose_idx_0 < MIN_int32_T
                  - optimal_path_t2_B.G_row4_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if
              ((optimal_path_t2_B.G_row4_data[optimal_path_t2_B.xPageOffset] > 0)
               && (optimal_path_t2_B.Current_pose_idx_0 > MAX_int32_T
                   - optimal_path_t2_B.G_row4_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 =
              optimal_path_t2_B.G_row4_data[optimal_path_t2_B.xPageOffset] +
              optimal_path_t2_B.Current_pose_idx_0;
          }

          if (optimal_path_t2_B.q1 < -2147483645) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else {
            optimal_path_t2_B.q1 -= 3;
          }

          optimal_path_t2_B.G_row4_data[optimal_path_t2_B.xPageOffset] =
            optimal_path_t2_B.q1;
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.b_jj; optimal_path_t2_B.xPageOffset++) {
          if ((optimal_path_t2_B.G_row5_data[optimal_path_t2_B.xPageOffset] < 0)
              && (optimal_path_t2_B.Current_pose_idx_0 < MIN_int32_T
                  - optimal_path_t2_B.G_row5_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else if
              ((optimal_path_t2_B.G_row5_data[optimal_path_t2_B.xPageOffset] > 0)
               && (optimal_path_t2_B.Current_pose_idx_0 > MAX_int32_T
                   - optimal_path_t2_B.G_row5_data[optimal_path_t2_B.xPageOffset]))
          {
            optimal_path_t2_B.q1 = MAX_int32_T;
          } else {
            optimal_path_t2_B.q1 =
              optimal_path_t2_B.G_row5_data[optimal_path_t2_B.xPageOffset] +
              optimal_path_t2_B.Current_pose_idx_0;
          }

          if (optimal_path_t2_B.q1 < -2147483645) {
            optimal_path_t2_B.q1 = MIN_int32_T;
          } else {
            optimal_path_t2_B.q1 -= 3;
          }

          optimal_path_t2_B.G_row5_data[optimal_path_t2_B.xPageOffset] =
            optimal_path_t2_B.q1;
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.ParentX_tmp; optimal_path_t2_B.xPageOffset++) {
          optimal_path_t2_B.G_col1_data[optimal_path_t2_B.xPageOffset] =
            static_cast<int8_T>((static_cast<int8_T>
            ((optimal_path_t2_B.G_col1_data[optimal_path_t2_B.xPageOffset] +
              static_cast<int8_T>(optimal_path_t2_B.CY))) - 3));
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.G_col2_size_idx_0; optimal_path_t2_B.xPageOffset
             ++) {
          optimal_path_t2_B.G_col2_data[optimal_path_t2_B.xPageOffset] =
            static_cast<int8_T>((static_cast<int8_T>
            ((optimal_path_t2_B.G_col2_data[optimal_path_t2_B.xPageOffset] +
              static_cast<int8_T>(optimal_path_t2_B.CY))) - 3));
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.G_col3_size_idx_0; optimal_path_t2_B.xPageOffset
             ++) {
          optimal_path_t2_B.G_col3_data[optimal_path_t2_B.xPageOffset] =
            static_cast<int8_T>((static_cast<int8_T>
            ((optimal_path_t2_B.G_col3_data[optimal_path_t2_B.xPageOffset] +
              static_cast<int8_T>(optimal_path_t2_B.CY))) - 3));
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.G_col4_size_idx_0; optimal_path_t2_B.xPageOffset
             ++) {
          optimal_path_t2_B.G_col4_data[optimal_path_t2_B.xPageOffset] =
            static_cast<int8_T>((static_cast<int8_T>
            ((optimal_path_t2_B.G_col4_data[optimal_path_t2_B.xPageOffset] +
              static_cast<int8_T>(optimal_path_t2_B.CY))) - 3));
        }

        for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset <
             optimal_path_t2_B.b_idx; optimal_path_t2_B.xPageOffset++) {
          optimal_path_t2_B.G_col5_data[optimal_path_t2_B.xPageOffset] =
            static_cast<int8_T>((static_cast<int8_T>
            ((optimal_path_t2_B.G_col5_data[optimal_path_t2_B.xPageOffset] +
              static_cast<int8_T>(optimal_path_t2_B.CY))) - 3));
        }

        optimal_path_t2_B.b_idx = 0;
        while (optimal_path_t2_B.b_idx <= optimal_path_t2_B.GScore_tmp - 1) {
          optimal_path_t2_B.ParentX_tmp =
            ((optimal_path_t2_B.G_row1_data[optimal_path_t2_B.b_idx] + 65 *
              (optimal_path_t2_B.G_col1_data[optimal_path_t2_B.b_idx] - 1)) +
             2600 * (optimal_path_t2_B.Current_pose_idx_2 + 1)) - 1;
          optimal_path_t2_B.ParentX[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_0;
          optimal_path_t2_B.ParentY[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.CY;
          optimal_path_t2_B.ParentZ[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_2;
          optimal_path_t2_B.b_idx++;
        }

        optimal_path_t2_B.b_idx = 0;
        while (optimal_path_t2_B.b_idx <= optimal_path_t2_B.GScore_temp_tmp - 1)
        {
          optimal_path_t2_B.ParentX_tmp =
            ((optimal_path_t2_B.G_row2_data[optimal_path_t2_B.b_idx] + 65 *
              (optimal_path_t2_B.G_col2_data[optimal_path_t2_B.b_idx] - 1)) +
             2600 * optimal_path_t2_B.Current_pose_idx_2) - 1;
          optimal_path_t2_B.ParentX[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_0;
          optimal_path_t2_B.ParentY[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.CY;
          optimal_path_t2_B.ParentZ[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_2;
          optimal_path_t2_B.b_idx++;
        }

        optimal_path_t2_B.b_idx = 0;
        while (optimal_path_t2_B.b_idx <= optimal_path_t2_B.GScore_temp_tmp_j -
               1) {
          if ((optimal_path_t2_B.G_row3_data[optimal_path_t2_B.b_idx] ==
               optimal_path_t2_B.Current_pose_idx_0) &&
              (optimal_path_t2_B.G_col3_data[optimal_path_t2_B.b_idx] ==
               optimal_path_t2_B.CY)) {
          } else {
            optimal_path_t2_B.ParentX_tmp =
              ((optimal_path_t2_B.G_row3_data[optimal_path_t2_B.b_idx] + 65 *
                (optimal_path_t2_B.G_col3_data[optimal_path_t2_B.b_idx] - 1)) +
               optimal_path_t2_B.GScore_tmp_tmp) - 1;
            optimal_path_t2_B.ParentX[optimal_path_t2_B.ParentX_tmp] =
              optimal_path_t2_B.Current_pose_idx_0;
            optimal_path_t2_B.ParentY[optimal_path_t2_B.ParentX_tmp] =
              optimal_path_t2_B.CY;
            optimal_path_t2_B.ParentZ[optimal_path_t2_B.ParentX_tmp] =
              optimal_path_t2_B.Current_pose_idx_2;
          }

          optimal_path_t2_B.b_idx++;
        }

        optimal_path_t2_B.b_idx = 0;
        while (optimal_path_t2_B.b_idx <= optimal_path_t2_B.ClosedMAT_tmp - 1) {
          optimal_path_t2_B.ParentX_tmp =
            ((optimal_path_t2_B.G_row4_data[optimal_path_t2_B.b_idx] + 65 *
              (optimal_path_t2_B.G_col4_data[optimal_path_t2_B.b_idx] - 1)) +
             2600 * (optimal_path_t2_B.Current_pose_idx_2 - 2)) - 1;
          optimal_path_t2_B.ParentX[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_0;
          optimal_path_t2_B.ParentY[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.CY;
          optimal_path_t2_B.ParentZ[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_2;
          optimal_path_t2_B.b_idx++;
        }

        optimal_path_t2_B.b_idx = 0;
        while (optimal_path_t2_B.b_idx <= optimal_path_t2_B.b_jj - 1) {
          optimal_path_t2_B.ParentX_tmp =
            ((optimal_path_t2_B.G_row5_data[optimal_path_t2_B.b_idx] + 65 *
              (optimal_path_t2_B.G_col5_data[optimal_path_t2_B.b_idx] - 1)) +
             2600 * (optimal_path_t2_B.Current_pose_idx_2 - 3)) - 1;
          optimal_path_t2_B.ParentX[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_0;
          optimal_path_t2_B.ParentY[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.CY;
          optimal_path_t2_B.ParentZ[optimal_path_t2_B.ParentX_tmp] =
            optimal_path_t2_B.Current_pose_idx_2;
          optimal_path_t2_B.b_idx++;
        }

        if ((optimal_path_t2_B.q0_b >= 0) &&
            (optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset] <
             optimal_path_t2_B.q0_b - MAX_int32_T)) {
          optimal_path_t2_B.xPageOffset = MAX_int32_T;
        } else if ((optimal_path_t2_B.q0_b < 0) &&
                   (optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset] >
                    optimal_path_t2_B.q0_b - MIN_int32_T)) {
          optimal_path_t2_B.xPageOffset = MIN_int32_T;
        } else {
          optimal_path_t2_B.xPageOffset = optimal_path_t2_B.q0_b -
            optimal_path_t2_B.ii_data[optimal_path_t2_B.xOffset];
        }

        if (optimal_path_t2_abs_li(optimal_path_t2_B.xPageOffset) <= 1) {
          if ((optimal_path_t2_B.q0_e >= 0) && (optimal_path_t2_B.CY <
               optimal_path_t2_B.q0_e - MAX_int32_T)) {
            optimal_path_t2_B.xPageOffset = MAX_int32_T;
          } else if ((optimal_path_t2_B.q0_e < 0) && (optimal_path_t2_B.CY >
                      optimal_path_t2_B.q0_e - MIN_int32_T)) {
            optimal_path_t2_B.xPageOffset = MIN_int32_T;
          } else {
            optimal_path_t2_B.xPageOffset = optimal_path_t2_B.q0_e -
              optimal_path_t2_B.CY;
          }

          if (optimal_path_t2_abs_li(optimal_path_t2_B.xPageOffset) <= 1) {
            if ((optimal_path_t2_B.q0 >= 0) &&
                (optimal_path_t2_B.Current_pose_idx_2 < optimal_path_t2_B.q0 -
                 MAX_int32_T)) {
              optimal_path_t2_B.xPageOffset = MAX_int32_T;
            } else if ((optimal_path_t2_B.q0 < 0) &&
                       (optimal_path_t2_B.Current_pose_idx_2 >
                        optimal_path_t2_B.q0 - MIN_int32_T)) {
              optimal_path_t2_B.xPageOffset = MIN_int32_T;
            } else {
              optimal_path_t2_B.xPageOffset = optimal_path_t2_B.q0 -
                optimal_path_t2_B.Current_pose_idx_2;
            }

            if (optimal_path_t2_abs_li(optimal_path_t2_B.xPageOffset) <= 1) {
              optimal_path_t2_B.k0 = 1;
              optimal_path_t2_DW.path_exist = true;
              printf("path founded\n");
              fflush(stdout);
              exitg2 = 1;
            }
          }
        }
      }
    } while (exitg2 == 0);

    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 384;
         optimal_path_t2_B.xPageOffset++) {
      optimal_path_t2_DW.optimal[optimal_path_t2_B.xPageOffset] = (rtNaN);
    }

    if (optimal_path_t2_B.k0 != 0) {
      optimal_path_t2_DW.optimal[0] = optimal_path_t2_B.q0_b;
      optimal_path_t2_DW.optimal[128] = optimal_path_t2_B.q0_e;
      optimal_path_t2_DW.optimal[256] = optimal_path_t2_B.q0;
      optimal_path_t2_B.MinFScore = 2.0;
      do {
        optimal_path_t2_B.xPageOffset = (((optimal_path_t2_B.CY - 1) * 65 +
          optimal_path_t2_B.nb) + (optimal_path_t2_B.Current_pose_idx_2 - 1) *
          2600) - 1;
        if (optimal_path_t2_B.ParentX[optimal_path_t2_B.xPageOffset] <
            2.147483648E+9) {
          optimal_path_t2_B.nb = static_cast<int32_T>
            (optimal_path_t2_B.ParentX[optimal_path_t2_B.xPageOffset]);
        } else {
          optimal_path_t2_B.nb = MAX_int32_T;
        }

        if (optimal_path_t2_B.ParentY[optimal_path_t2_B.xPageOffset] <
            2.147483648E+9) {
          optimal_path_t2_B.CY = static_cast<int32_T>
            (optimal_path_t2_B.ParentY[optimal_path_t2_B.xPageOffset]);
        } else {
          optimal_path_t2_B.CY = MAX_int32_T;
        }

        if (optimal_path_t2_B.ParentZ[optimal_path_t2_B.xPageOffset] <
            2.147483648E+9) {
          optimal_path_t2_B.Current_pose_idx_2 = static_cast<int32_T>
            (optimal_path_t2_B.ParentZ[optimal_path_t2_B.xPageOffset]);
        } else {
          optimal_path_t2_B.Current_pose_idx_2 = MAX_int32_T;
        }

        optimal_path_t2_B.k0 = static_cast<int32_T>(optimal_path_t2_B.MinFScore)
          - 1;
        optimal_path_t2_DW.optimal[optimal_path_t2_B.k0] = optimal_path_t2_B.nb;
        optimal_path_t2_DW.optimal[optimal_path_t2_B.k0 + 128] =
          optimal_path_t2_B.CY;
        optimal_path_t2_DW.optimal[optimal_path_t2_B.k0 + 256] =
          optimal_path_t2_B.Current_pose_idx_2;
        optimal_path_t2_B.MinFScore++;
      } while ((optimal_path_t2_B.nb != rtb_pos_grid_idx_0) ||
               (optimal_path_t2_B.CY != rtb_pos_grid_idx_1) ||
               (optimal_path_t2_B.Current_pose_idx_2 != rtb_pos_grid_idx_2));
    }
  }

  if (optimal_path_t2_DW.path_exist) {
    for (optimal_path_t2_B.xPageOffset = 0; optimal_path_t2_B.xPageOffset < 128;
         optimal_path_t2_B.xPageOffset++) {
      optimal_path_t2_B.nan_check[optimal_path_t2_B.xPageOffset] = rtIsNaN
        (optimal_path_t2_DW.optimal[optimal_path_t2_B.xPageOffset]);
    }

    optimal_path_t2_B.nb = 0;
    exitg1 = false;
    while ((!exitg1) && (optimal_path_t2_B.nb < 128)) {
      if ((!optimal_path_t2_B.nan_check[optimal_path_t2_B.nb]) &&
          (optimal_path_t2_B.Obstacle[(((static_cast<int32_T>
              (optimal_path_t2_DW.optimal[optimal_path_t2_B.nb + 128]) - 1) *
             optimal_path_t2_DW.SFunction_DIMS2[0] + static_cast<int32_T>
             (optimal_path_t2_DW.optimal[optimal_path_t2_B.nb])) +
            (static_cast<int32_T>
             (optimal_path_t2_DW.optimal[optimal_path_t2_B.nb + 256]) - 1) *
            optimal_path_t2_B.align2_data_tmp) - 1] == 1)) {
        optimal_path_t2_DW.astar_restart = 1.0;
        optimal_path_t2_DW.path_exist = false;
        printf("path collision! \n");
        fflush(stdout);
        exitg1 = true;
      } else {
        optimal_path_t2_DW.astar_restart = 0.0;
        optimal_path_t2_B.nb++;
      }
    }
  }

  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       128; optimal_path_t2_B.align2_data_tmp++) {
    optimal_path_t2_B.optimal_path_x[optimal_path_t2_B.align2_data_tmp] =
      static_cast<real32_T>
      (((optimal_path_t2_DW.optimal[optimal_path_t2_B.align2_data_tmp] -
         optimal_path_t2_P.StartGridCase_J1_Value[0]) * 0.2));
  }

  optimal_path_t2_flip(optimal_path_t2_B.optimal_path_x);
  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       128; optimal_path_t2_B.align2_data_tmp++) {
    optimal_path_t2_B.optimal_path_y[optimal_path_t2_B.align2_data_tmp] =
      static_cast<real32_T>
      (((optimal_path_t2_DW.optimal[optimal_path_t2_B.align2_data_tmp + 128] -
         optimal_path_t2_P.StartGridCase_J1_Value[1]) * 0.2));
  }

  optimal_path_t2_flip(optimal_path_t2_B.optimal_path_y);
  for (optimal_path_t2_B.align2_data_tmp = 0; optimal_path_t2_B.align2_data_tmp <
       128; optimal_path_t2_B.align2_data_tmp++) {
    optimal_path_t2_B.optimal_path_z[optimal_path_t2_B.align2_data_tmp] =
      static_cast<real32_T>
      (((optimal_path_t2_DW.optimal[optimal_path_t2_B.align2_data_tmp + 256] -
         optimal_path_t2_P.StartGridCase_J1_Value[2]) * 0.2));
  }

  optimal_path_t2_flip(optimal_path_t2_B.optimal_path_z);

  // MATLAB Function: '<Root>/MATLAB Function9'
  optimal_path_t_MATLABFunction10(optimal_path_t2_B.optimal_path_x,
    optimal_path_t2_B.test, &optimal_path_t2_B.SL);

  // MATLAB Function: '<Root>/MATLAB Function10'
  optimal_path_t_MATLABFunction10(optimal_path_t2_B.optimal_path_y,
    optimal_path_t2_B.optimal_path_x, &optimal_path_t2_B.SL_l);

  // MATLAB Function: '<Root>/MATLAB Function1'
  optimal_path_t2_MATLABFunction1(optimal_path_t2_B.odom,
    optimal_path_t2_B.optimal_path_y, &optimal_path_t2_B.SL_l0);

  // MATLAB Function: '<Root>/MATLAB Function2'
  optimal_path_t2_MATLABFunction1(optimal_path_t2_B.next_point_cmd,
    optimal_path_t2_B.test_p, &optimal_path_t2_B.SL_b);

  // MATLAB Function: '<Root>/MATLAB Function3'
  optimal_path_t2_MATLABFunction1(optimal_path_t2_B.previous_point_cmd,
    optimal_path_t2_B.test_m, &optimal_path_t2_B.SL_m);

  // BusAssignment: '<Root>/Bus Assignment6' incorporates:
  //   Constant: '<S3>/Constant'

  optimal_path_t2_B.BusAssignment6 = optimal_path_t2_P.Constant_Value_lh;
  memcpy(&optimal_path_t2_B.BusAssignment6.Data[0], &optimal_path_t2_B.test_m[0],
         sizeof(real32_T) << 7U);
  optimal_path_t2_B.BusAssignment6.Data_SL_Info.CurrentLength =
    optimal_path_t2_B.SL_m;

  // Outputs for Atomic SubSystem: '<Root>/Publish4'
  // MATLABSystem: '<S20>/SinkBlock'
  Pub_optimal_path_t2_526.publish(&optimal_path_t2_B.BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish4'

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<S2>/Constant'

  optimal_path_t2_B.BusAssignment6 = optimal_path_t2_P.Constant_Value_m;
  memcpy(&optimal_path_t2_B.BusAssignment6.Data[0], &optimal_path_t2_B.test_p[0],
         sizeof(real32_T) << 7U);
  optimal_path_t2_B.BusAssignment6.Data_SL_Info.CurrentLength =
    optimal_path_t2_B.SL_b;

  // Outputs for Atomic SubSystem: '<Root>/Publish3'
  // MATLABSystem: '<S19>/SinkBlock'
  Pub_optimal_path_t2_520.publish(&optimal_path_t2_B.BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish3'

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<S1>/Constant'

  optimal_path_t2_B.BusAssignment6 = optimal_path_t2_P.Constant_Value_l;
  memcpy(&optimal_path_t2_B.BusAssignment6.Data[0],
         &optimal_path_t2_B.optimal_path_y[0], sizeof(real32_T) << 7U);
  optimal_path_t2_B.BusAssignment6.Data_SL_Info.CurrentLength =
    optimal_path_t2_B.SL_l0;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S17>/SinkBlock'
  Pub_optimal_path_t2_516.publish(&optimal_path_t2_B.BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // BusAssignment: '<Root>/Bus Assignment5' incorporates:
  //   Constant: '<S6>/Constant'
  //   MATLAB Function: '<Root>/MATLAB Function13'

  optimal_path_t2_B.BusAssignment6 = optimal_path_t2_P.Constant_Value_f;
  memcpy(&optimal_path_t2_B.BusAssignment6.Data[0],
         &optimal_path_t2_B.optimal_path_z[0], sizeof(real32_T) << 7U);
  optimal_path_t2_B.BusAssignment6.Data_SL_Info.CurrentLength = 128U;

  // Outputs for Atomic SubSystem: '<Root>/Publish6'
  // MATLABSystem: '<S22>/SinkBlock'
  Pub_optimal_path_t2_454.publish(&optimal_path_t2_B.BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish6'

  // BusAssignment: '<Root>/Bus Assignment4' incorporates:
  //   Constant: '<S5>/Constant'

  optimal_path_t2_B.BusAssignment6 = optimal_path_t2_P.Constant_Value_b;
  memcpy(&optimal_path_t2_B.BusAssignment6.Data[0],
         &optimal_path_t2_B.optimal_path_x[0], sizeof(real32_T) << 7U);
  optimal_path_t2_B.BusAssignment6.Data_SL_Info.CurrentLength =
    optimal_path_t2_B.SL_l;

  // Outputs for Atomic SubSystem: '<Root>/Publish5'
  // MATLABSystem: '<S21>/SinkBlock'
  Pub_optimal_path_t2_453.publish(&optimal_path_t2_B.BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish5'

  // BusAssignment: '<Root>/Bus Assignment3' incorporates:
  //   Constant: '<S4>/Constant'

  optimal_path_t2_B.BusAssignment6 = optimal_path_t2_P.Constant_Value_g;
  memcpy(&optimal_path_t2_B.BusAssignment6.Data[0], &optimal_path_t2_B.test[0],
         sizeof(real32_T) << 7U);
  optimal_path_t2_B.BusAssignment6.Data_SL_Info.CurrentLength =
    optimal_path_t2_B.SL;

  // Outputs for Atomic SubSystem: '<Root>/Publish2'
  // MATLABSystem: '<S18>/SinkBlock'
  Pub_optimal_path_t2_452.publish(&optimal_path_t2_B.BusAssignment6);

  // End of Outputs for SubSystem: '<Root>/Publish2'

  // Outputs for Enabled SubSystem: '<Root>/Reset Octomap ' incorporates:
  //   EnablePort: '<S23>/Enable'

  // MATLAB Function: '<Root>/MATLAB Function7'
  if (optimal_path_t2_B.k > 0) {
    // BusAssignment: '<S23>/Bus Assignment1' incorporates:
    //   Constant: '<S23>/Constant'
    //   DataTypeConversion: '<S23>/Cast To Boolean'

    rtb_BusAssignment1_o.SL_DummyData = (optimal_path_t2_P.Constant_Value_ic !=
      0.0);

    // Outputs for Atomic SubSystem: '<S23>/Call Service'
    // MATLABSystem: '<S27>/ServiceCaller'
    isCreated = ServCall_optimal_path_t2_496.getIsCreated();
    if (!isCreated) {
      for (optimal_path_t2_B.align2_data_tmp = 0;
           optimal_path_t2_B.align2_data_tmp < 22;
           optimal_path_t2_B.align2_data_tmp++) {
        optimal_path_t2_B.cv2[optimal_path_t2_B.align2_data_tmp] =
          tmp_0[optimal_path_t2_B.align2_data_tmp];
      }

      b_varargout_2 = ServCall_optimal_path_t2_496.createServiceCaller
        (optimal_path_t2_B.cv2, false, 5.0);
      if (b_varargout_2 != SLSuccess) {
      } else {
        ServCall_optimal_path_t2_496.call(&rtb_BusAssignment1_o, &b_varargout_1);
      }
    } else {
      ServCall_optimal_path_t2_496.call(&rtb_BusAssignment1_o, &b_varargout_1);
    }

    // End of MATLABSystem: '<S27>/ServiceCaller'
    // End of Outputs for SubSystem: '<S23>/Call Service'
  }

  // End of Outputs for SubSystem: '<Root>/Reset Octomap '

  // MATLABSystem: '<Root>/Set Parameter1' incorporates:
  //   MATLAB Function: '<Root>/MATLAB Function7'

  ParamSet_optimal_path_t2_528.set_parameter(optimal_path_t2_DW.hover_flag);

  // MATLABSystem: '<Root>/Set Parameter' incorporates:
  //   MATLAB Function: '<Root>/MATLAB Function11'

  ParamSet_optimal_path_t2_527.set_parameter(optimal_path_t2_DW.waypoint_flag[3]
    == 1.0);
}

// Model initialize function
void optimal_path_t2_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // block I/O
  (void) memset((static_cast<void *>(&optimal_path_t2_B)), 0,
                sizeof(B_optimal_path_t2_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&optimal_path_t2_DW), 0,
                sizeof(DW_optimal_path_t2_T));

  {
    int32_T i;
    char_T tmp[15];
    char_T tmp_0[12];
    char_T tmp_1[16];
    static const char_T tmp_2[28] = { '/', 'o', 'c', 't', 'o', 'm', 'a', 'p',
      '_', 'p', 'o', 'i', 'n', 't', '_', 'c', 'l', 'o', 'u', 'd', '_', 'c', 'e',
      'n', 't', 'e', 'r', 's' };

    static const char_T tmp_3[27] = { '/', 'm', 'a', 'v', 'r', 'o', 's', '/',
      'l', 'o', 'c', 'a', 'l', '_', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n', '/',
      'p', 'o', 's', 'e' };

    static const char_T tmp_4[19] = { '/', 'p', 'r', 'e', 'v', 'i', 'o', 'u',
      's', '_', 'p', 'o', 'i', 'n', 't', '_', 'c', 'm', 'd' };

    static const char_T tmp_5[15] = { '/', 'n', 'e', 'x', 't', '_', 'p', 'o',
      'i', 'n', 't', '_', 'c', 'm', 'd' };

    static const char_T tmp_6[18] = { '/', 'c', 'u', 'r', 'r', 'e', 'n', 't',
      '_', 'p', 'o', 'i', 'n', 't', '_', 'c', 'm', 'd' };

    static const char_T tmp_7[15] = { '/', 'o', 'p', 't', 'i', 'm', 'a', 'l',
      '_', 'p', 'a', 't', 'h', '_', 'z' };

    static const char_T tmp_8[15] = { '/', 'o', 'p', 't', 'i', 'm', 'a', 'l',
      '_', 'p', 'a', 't', 'h', '_', 'y' };

    static const char_T tmp_9[15] = { '/', 'o', 'p', 't', 'i', 'm', 'a', 'l',
      '_', 'p', 'a', 't', 'h', '_', 'x' };

    static const char_T tmp_a[11] = { '/', 'h', 'o', 'v', 'e', 'r', '_', 'f',
      'l', 'a', 'g' };

    static const char_T tmp_b[14] = { '/', 'l', 'a', 'n', 'd', 'i', 'n', 'g',
      '_', 'p', 'h', 'a', 's', 'e' };

    // Start for Atomic SubSystem: '<Root>/Subscribe5'
    // Start for MATLABSystem: '<S25>/SourceBlock'
    optimal_path_t2_DW.obj_os.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_os.isInitialized = 1;
    for (i = 0; i < 28; i++) {
      optimal_path_t2_B.cv[i] = tmp_2[i];
    }

    optimal_path_t2_B.cv[28] = '\x00';
    Sub_optimal_path_t2_457.createSubscriber(optimal_path_t2_B.cv, 1);
    optimal_path_t2_DW.obj_os.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S25>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe5'

    // Start for MATLABSystem: '<Root>/Read Point Cloud1'
    optimal_path_t2_DW.obj.isInitialized = 1;
    optimal_path_t2_DW.obj.inputVarSize.f1[0] = 1U;
    optimal_path_t2_DW.obj.inputVarSize.f1[1] = 1U;
    for (i = 0; i < 6; i++) {
      optimal_path_t2_DW.obj.inputVarSize.f1[i + 2] = 1U;
    }

    // End of Start for MATLABSystem: '<Root>/Read Point Cloud1'

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S24>/SourceBlock'
    optimal_path_t2_DW.obj_l.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 27; i++) {
      optimal_path_t2_B.cv1[i] = tmp_3[i];
    }

    optimal_path_t2_B.cv1[27] = '\x00';
    Sub_optimal_path_t2_456.createSubscriber(optimal_path_t2_B.cv1, 1);
    optimal_path_t2_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Publish4'
    // Start for MATLABSystem: '<S20>/SinkBlock'
    optimal_path_t2_DW.obj_f.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 19; i++) {
      optimal_path_t2_B.cv3[i] = tmp_4[i];
    }

    optimal_path_t2_B.cv3[19] = '\x00';
    Pub_optimal_path_t2_526.createPublisher(optimal_path_t2_B.cv3, 1);
    optimal_path_t2_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S20>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish4'

    // Start for Atomic SubSystem: '<Root>/Publish3'
    // Start for MATLABSystem: '<S19>/SinkBlock'
    optimal_path_t2_DW.obj_j.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      tmp_1[i] = tmp_5[i];
    }

    tmp_1[15] = '\x00';
    Pub_optimal_path_t2_520.createPublisher(tmp_1, 1);
    optimal_path_t2_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S19>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish3'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S17>/SinkBlock'
    optimal_path_t2_DW.obj_o.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      optimal_path_t2_B.cv4[i] = tmp_6[i];
    }

    optimal_path_t2_B.cv4[18] = '\x00';
    Pub_optimal_path_t2_516.createPublisher(optimal_path_t2_B.cv4, 1);
    optimal_path_t2_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S17>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // Start for Atomic SubSystem: '<Root>/Publish6'
    // Start for MATLABSystem: '<S22>/SinkBlock'
    optimal_path_t2_DW.obj_e.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      tmp_1[i] = tmp_7[i];
    }

    tmp_1[15] = '\x00';
    Pub_optimal_path_t2_454.createPublisher(tmp_1, 1);
    optimal_path_t2_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S22>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish6'

    // Start for Atomic SubSystem: '<Root>/Publish5'
    // Start for MATLABSystem: '<S21>/SinkBlock'
    optimal_path_t2_DW.obj_h.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      tmp_1[i] = tmp_8[i];
    }

    tmp_1[15] = '\x00';
    Pub_optimal_path_t2_453.createPublisher(tmp_1, 1);
    optimal_path_t2_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S21>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish5'

    // Start for Atomic SubSystem: '<Root>/Publish2'
    // Start for MATLABSystem: '<S18>/SinkBlock'
    optimal_path_t2_DW.obj_i.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      tmp_1[i] = tmp_9[i];
    }

    tmp_1[15] = '\x00';
    Pub_optimal_path_t2_452.createPublisher(tmp_1, 1);
    optimal_path_t2_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S18>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish2'

    // Start for Enabled SubSystem: '<Root>/Reset Octomap '
    // Start for Atomic SubSystem: '<S23>/Call Service'
    // Start for MATLABSystem: '<S27>/ServiceCaller'
    optimal_path_t2_DW.obj_c.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_c.isInitialized = 1;
    optimal_path_t2_DW.obj_c.isSetupComplete = true;

    // End of Start for SubSystem: '<S23>/Call Service'
    // End of Start for SubSystem: '<Root>/Reset Octomap '

    // Start for MATLABSystem: '<Root>/Set Parameter1'
    optimal_path_t2_DW.obj_ic.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_ic.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_0[i] = tmp_a[i];
    }

    tmp_0[11] = '\x00';
    ParamSet_optimal_path_t2_528.initialize(tmp_0);
    optimal_path_t2_DW.obj_ic.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Set Parameter1'

    // Start for MATLABSystem: '<Root>/Set Parameter'
    optimal_path_t2_DW.obj_a.matlabCodegenIsDeleted = false;
    optimal_path_t2_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp[i] = tmp_b[i];
    }

    tmp[14] = '\x00';
    ParamSet_optimal_path_t2_527.initialize(tmp);
    optimal_path_t2_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Set Parameter'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe5'
    // SystemInitialize for Enabled SubSystem: '<S25>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S29>/Out1'
    optimal_path_t2_B.In1 = optimal_path_t2_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S25>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe5'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S24>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S28>/Out1'
    optimal_path_t2_B.In1_d = optimal_path_t2_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S24>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for MATLAB Function: '<Root>/MATLAB Function11'
    memset(&optimal_path_t2_DW.waypoint_flag[0], 0, 10U * sizeof(real_T));

    // SystemInitialize for MATLAB Function: '<Root>/MATLAB Function7'
    optimal_path_t2_DW.optimal_not_empty = false;
    for (i = 0; i < 384; i++) {
      optimal_path_t2_DW.optimal[i] = (rtNaN);
    }

    optimal_path_t2_DW.hover_flag = false;
    optimal_path_t2_DW.astar_restart = 1.0;
    optimal_path_t2_DW.path_exist = false;

    // End of SystemInitialize for MATLAB Function: '<Root>/MATLAB Function7'
  }
}

// Model terminate function
void optimal_path_t2_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe5'
  // Terminate for MATLABSystem: '<S25>/SourceBlock'
  matlabCodegenHandle_m_nhjwvvggb(&optimal_path_t2_DW.obj_os);

  // End of Terminate for SubSystem: '<Root>/Subscribe5'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S24>/SourceBlock'
  matlabCodegenHandle_m_nhjwvvggb(&optimal_path_t2_DW.obj_l);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Publish4'
  // Terminate for MATLABSystem: '<S20>/SinkBlock'
  matlabCodegenHandle_matlabCo_nh(&optimal_path_t2_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Publish4'

  // Terminate for Atomic SubSystem: '<Root>/Publish3'
  // Terminate for MATLABSystem: '<S19>/SinkBlock'
  matlabCodegenHandle_matlabCo_nh(&optimal_path_t2_DW.obj_j);

  // End of Terminate for SubSystem: '<Root>/Publish3'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S17>/SinkBlock'
  matlabCodegenHandle_matlabCo_nh(&optimal_path_t2_DW.obj_o);

  // End of Terminate for SubSystem: '<Root>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Publish6'
  // Terminate for MATLABSystem: '<S22>/SinkBlock'
  matlabCodegenHandle_matlabCo_nh(&optimal_path_t2_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Publish6'

  // Terminate for Atomic SubSystem: '<Root>/Publish5'
  // Terminate for MATLABSystem: '<S21>/SinkBlock'
  matlabCodegenHandle_matlabCo_nh(&optimal_path_t2_DW.obj_h);

  // End of Terminate for SubSystem: '<Root>/Publish5'

  // Terminate for Atomic SubSystem: '<Root>/Publish2'
  // Terminate for MATLABSystem: '<S18>/SinkBlock'
  matlabCodegenHandle_matlabCo_nh(&optimal_path_t2_DW.obj_i);

  // End of Terminate for SubSystem: '<Root>/Publish2'

  // Terminate for Enabled SubSystem: '<Root>/Reset Octomap '
  // Terminate for Atomic SubSystem: '<S23>/Call Service'
  // Terminate for MATLABSystem: '<S27>/ServiceCaller'
  matlabCodegenHandle_ma_nhjwvvgg(&optimal_path_t2_DW.obj_c);

  // End of Terminate for SubSystem: '<S23>/Call Service'
  // End of Terminate for SubSystem: '<Root>/Reset Octomap '

  // Terminate for MATLABSystem: '<Root>/Set Parameter1'
  matlabCodegenHandle_matlabCodeg(&optimal_path_t2_DW.obj_ic);

  // Terminate for MATLABSystem: '<Root>/Set Parameter'
  matlabCodegenHandle_matlabCodeg(&optimal_path_t2_DW.obj_a);
}

//
// File trailer for generated code.
//
// [EOF]
//
