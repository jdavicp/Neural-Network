#include "derivatives.h"
#include "../common.h"

float64 *derivative(float64(*f)(float64*),float64 variables_values[] ,size_t dimension, float64 epsilon)
{
    
    float64 *arr = (float64*)malloc(dimension*sizeof(float64));

    for(size_t i = 0; i < dimension; i++)
    {
        
        float64 original_value_i = variables_values[i];

        variables_values[i] = original_value_i - epsilon;
        float64 y1 = f(variables_values);

        variables_values[i] = original_value_i + epsilon;
        float64 y2 = f(variables_values);

        float64 dx = (y2 - y1)/(2*epsilon);
        arr[i] = dx;

        variables_values[i] = original_value_i;
    }
    return arr;
}

