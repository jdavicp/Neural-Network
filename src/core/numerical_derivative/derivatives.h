#ifndef __NUMERICAL_DERIVATIVE_H__
#define __NUMERICAL_DERIVATIVE_H__
#include "../common.h"

float64 *derivative(float64(*f)(float64*),float64 variables_values[] ,size_t dimension, float64 epsilon);

#endif
