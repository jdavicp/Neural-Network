#include <stdio.h>
#include "../core/numerical_derivative/derivatives.h"
#include "../core/common.h"
#include "../core/gradient_descent/gradient.h"
#include "../core/perceptron/perceptron.h"

#include <math.h>

// float64 func(float64 *x);

// int main(void)
// {
    
//     size_t dimension = 2;
//     //float64 epsilon = 1.0E-10;
//     //float64 arr[2] = { 1, 1 };
//     float64 *localmin = gradient_descent(func, dimension, 600, 0.01);
//     //float64 *deriv = derivative(func, arr, dimension, epsilon);
//     if(localmin == NULL)
//     {
//         printf("Error");
//     }
//     for(size_t i = 0; i < dimension; i++)
//     {
//         printf("random values: %lf\n", localmin[i]);
//     }
    
    
//     return 0;
// }

// float64 func(float64 *arguments)
// {
//     float64 x = arguments[0];
//     float64 y = arguments[1];
//     float64 z = (float64) pow(x, 4) + pow(y, 4);
//     return z;
// }

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

int main(void)
{
    const struct Shape m1_shape = {3, 2};
    const struct Shape m2_shape = {2, 4};
    const struct Shape m3_shape = {m1_shape.row, m2_shape.col};

    float64 m1[3][2] = {{3, 4}, {2, 1}, {0, 8}};
    float64 m2[2][4] = {{1, 2, 3, 4}, {5, 2, 7, 0}};
    float64 **m3;

    m3 = dot_product(m1_shape, m1, m2_shape, m2);

    for(size_t i = 0; i < m3_shape.row; i++)
    {
        for(size_t j = 0; j < m3_shape.col; j++)
        {
            printf("%f\t",m3[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;

}

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
