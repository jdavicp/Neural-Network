#include "perceptron.h"

float64 perceptron(float64 *values, float64 *weights, size_t input_size,enum ActivationFunction activation)
{
    float64 sum = 0;

    for(size_t i = 0; i < input_size; i++)
    {
        sum = sum + values[i]*weights[i]; 
    }
    return switch_activation(activation, sum );
}
