#pragma once
#include <cstdlib> 
#include <ctime> 
#include <iostream>

double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}