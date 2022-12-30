#ifndef __TENSOR_H__
#define __TENSOR_H__
#include "../common.h"

struct Matrix
{
    size_t row;
    size_t column;

    float64 **matrix;
};


#endif
