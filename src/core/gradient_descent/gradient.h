#ifndef __GRADIENT_DESCENT_H__
#define __GRADIENT_DESCENT_H__
#include "../numerical_derivative/derivatives.h"
#include <time.h>
float64 *gradient_descent(
    float64 (*f)(float64*), 
    size_t dimension,
    size_t epochs,
    float64 learning_rate);
#endif
