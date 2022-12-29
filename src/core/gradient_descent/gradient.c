#include "./gradient.h"
void localmin_update(float64 *localmin, float64 *gradient, float64 learning_rate, size_t dimension);

float64 *gradient_descent(
    float64 (*f)(float64*), 
    size_t dimension,
    size_t epochs,
    float64 learning_rate)
{
    time_t t = (time_t) dimension;
    srand((unsigned) time(&t));
    
    float64 *localmin = malloc(dimension*sizeof(float64));
    float64 epsilon = 1.0e-8;

    for(size_t i = 0; i < dimension; i++)
    {
        localmin[i] = ((double) rand()) / RAND_MAX;
    }

    float64 *gradient; 
    for(size_t i = 0; i < epochs; i++)
    {
        gradient = derivative(f, localmin, dimension, epsilon);
        localmin_update(localmin, gradient, learning_rate, dimension);
        free(gradient);
    }

    return localmin;
}

void localmin_update(float64 *localmin, float64 *gradient, float64 learning_rate, size_t dimension)
{
    for(size_t i = 0; i < dimension; i++)
    {
        localmin[i] = localmin[i] - gradient[i]*learning_rate;
    }
}
