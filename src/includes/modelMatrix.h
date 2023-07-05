#pragma once
#include <iostream>
#include <map>

class modelMatrix
{

public:
    std::map<int, std::map<int, int>> matrix;
    modelMatrix();
    ~modelMatrix();
};
