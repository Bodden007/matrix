#pragma once
#include <iostream>
#include "modelMatrix.h"

class contrlMatrix
{
    modelMatrix modMat;

public:
    int coutN = 0;
    contrlMatrix();
    ~contrlMatrix();
    void startMatrix();
    void outMatrix();
};
