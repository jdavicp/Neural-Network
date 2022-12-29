#include <stdio.h>
#include "../core/numerical_derivative/derivatives.h"
#include "../core/common.h"
#include "../core/gradient_descent/gradient.h"
#include <math.h>

float64 func(float64 *x);

int main(void)
{
    
    size_t dimension = 2;
    //float64 epsilon = 1.0E-10;
    //float64 arr[2] = { 1, 1 };
    float64 *localmin = gradient_descent(func, dimension, 600, 0.01);
    //float64 *deriv = derivative(func, arr, dimension, epsilon);
    if(localmin == NULL)
    {
        printf("Error");
    }
    for(size_t i = 0; i < dimension; i++)
    {
        printf("random values: %lf\n", localmin[i]);
    }
    
    
    return 0;
}

float64 func(float64 *arguments)
{
    float64 x = arguments[0];
    float64 y = arguments[1];
    float64 z = (float64) pow(x, 4) + pow(y, 4);
    return z;
}
