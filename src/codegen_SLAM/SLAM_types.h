//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: SLAM_types.h
//
// MATLAB Coder version            : 2.8
// C/C++ source code generated on  : 20-Aug-2015 19:17:37
//
#ifndef __SLAM_TYPES_H__
#define __SLAM_TYPES_H__

// Include Files
#include "rtwtypes.h"

// Type Definitions
#include <stdio.h>
#include "../stereoParameters.h"
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray__common

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_boolean_T

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_int32_T

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_real_T
#endif

//
// File trailer for SLAM_types.h
//
// [EOF]
//
