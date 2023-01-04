#include "activation.h"

float64 switch_activation(enum ActivationFunction activation, float64 x)
{
    switch(activation)
    {
        case ReLU:
            return relu(x);
        case Sigmoid:
            return sigmoid(x);
        case TanH:
            return tanh(x);
        case Linear:
            return linear(x);
        default:
            return x;
    }
}

float64 relu(float64 x)
{
    return x < 0 ? 0 : x;
}

float64 sigmoid(float64 x)
{
    return 1.0/(1.0 + exp(-x));
}

float64 tanh(float64 x)
{
    return (exp(x) - exp(-x))/(exp(x) + exp(-x));
}

float64 linear(float64 x)
{
    return x;
}