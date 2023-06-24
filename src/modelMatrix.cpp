#include "includes/modelMatrix.h"

void modelMatrix::initMatrix()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix[i][j] = 0;
        }
    };
}

modelMatrix::modelMatrix(/* args */)
{
}
modelMatrix::~modelMatrix()
{
}
