#include "../common.h"
#include "loss.h"


float64 MSE(float64 y_predicted, float64 y)
{
    return pow(y - y_predicted, 2)/2;
}

float64 MSE_D(float64 y_predicted, float64 y)
{
    return y - y_predicted;
}

float64 CROSS_ENTROPY(float64 y_predicted, float64 y)
{
    return -(y*log(y_predicted) + (1 - y)*log(1 - y_predicted));
}