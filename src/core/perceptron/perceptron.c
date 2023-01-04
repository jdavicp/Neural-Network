#include "perceptron.h"

float64 perceptron(float64 *values, float64 *weights, size_t *shape,enum ActivationFunction activation)
{
    float64 sum = 0;

    for(size_t i = 0; i < shape[0]; i++)
    {
        for(size_t j = 0; j < shape[1]; j++)
        {
            sum = sum + values[i]*weights[i]; 
        }
        
    }
    return switch_activation(activation, sum );
}
