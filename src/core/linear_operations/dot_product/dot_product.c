#include "dot_product.h"


float64 **dot_product(
    struct Shape m1_shape,
     float64 m1[m1_shape.row][m1_shape.col], 
     struct Shape m2_shape, 
     float64 m2[m2_shape.row][m2_shape.col] 
    )
{
    if(m1_shape.col != m2_shape.row)
    {
        return NULL;
    }

    const struct Shape m3_shape = {m1_shape.row, m2_shape.col};
    float64 **m3 = (float64**)malloc(m3_shape.row*sizeof(float64*));

    for(size_t i = 0; i < m3_shape.row; i++)
    {
        m3[i] = (float64*)malloc(m3_shape.col*sizeof(float64));
    }

    for(size_t i = 0; i < m3_shape.row; i++)
    {
        for(size_t j = 0; j < m3_shape.col; j++)
        {
            m3[i][j] = 0;
        }
    }

    for(size_t i = 0; i < m1_shape.row; i++)
    {
        for(size_t j = 0; j < m2_shape.col; j++)
        {
            for(size_t z = 0; z < m1_shape.col; z++)
            {
                m3[i][j] += m1[i][z]*m2[z][j];
            }
        }
    }

    return m3;

}