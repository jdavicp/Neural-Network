#include "linear.h"


struct Matrix *dot_product(struct Matrix *m1, struct Matrix *m2)
{
    if(m1->column != m1->row)
    {
        return NULL;
    }
    struct Matrix *m_result = (struct Matrix*)malloc(1*sizeof(struct Matrix));
    m_result->row = m1->row;
    m_result->column = m2->column;

    m_result->matrix = (float64**)malloc(m_result->row*sizeof(float64*));

}