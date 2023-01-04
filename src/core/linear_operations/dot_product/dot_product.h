#ifndef __LINEAR_OPERATIONS_H__
#define __LINEAR_OPERATIONS_H__

#include "../../common.h"

struct Shape
{
    const size_t row;
    const size_t col;
};

float64 **dot_product(
    struct Shape m1_shape,
    float64 m1[m1_shape.row][m1_shape.col], 
    struct Shape m2_shape, 
    float64 m2[m2_shape.row][m2_shape.col] 
);

#endif