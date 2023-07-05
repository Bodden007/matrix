#include "includes/contrlMatrix.h"

void contrlMatrix::startMatrix()
{
    int sizeMatrix;
    int val = 9;

    for (int i = 0; i < 10; i++)
    {
        if (i > 0)
        {
            coutN++;
        }

        modMat.matrix[i][i] = i;

        if (val > 0)
        {
            coutN++;
        }

        modMat.matrix[i][val] = val;
        val--;
    };
}

void contrlMatrix::outMatrix()
{
    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            std::cout << modMat.matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "number of occupied cells: " << coutN << std::endl;

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (modMat.matrix[i][j] > 0)
            {
                std::cout << "[" << i << "]"
                          << " "
                          << "[" << j << "]"
                          << " " << modMat.matrix[i][j] << std::endl;
            }
        }
    }
}

contrlMatrix::contrlMatrix()
{
}

contrlMatrix::~contrlMatrix()
{
}