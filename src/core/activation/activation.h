#ifndef __ACTIVATION_H__
#define __ACTIVATION_H__

enum ActivationFunction {
    ReLU = 0,
    Sigmoid = 1,
    TanH = 2,
    Linear = 3
};

float64 relu(float64 x);
float64 sigmoid(float64 x);
float64 tanh(float64 x);
float64 linear(float64 x);
float64 switch_activation(enum ActivationFunction activation, float64 x);

#endif
