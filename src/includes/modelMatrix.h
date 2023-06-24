#pragma once
#include <iostream>

class modelMatrix
{

public:
    static const int N = 10;
    int matrix[N][N];
    void initMatrix();
    modelMatrix();
    ~modelMatrix();
};
