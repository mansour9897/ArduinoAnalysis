using namespace std;

#include <iostream>

#include "MovingAvrage.h"

MovingAvrage::MovingAvrage(unsigned int d)
{
    this->deg = d;
    this->buff = new float[this->deg];
    this->index = 0;
    // cout << "Created Filter...\r\n";
}

MovingAvrage::~MovingAvrage()
{
}

void MovingAvrage::InserData(float data)
{
    buff[index++] = data;

    if (!(index < this->deg))
        index = 0;
}

float MovingAvrage::Avrage()
{
    float res = 0;
    for (int i = 0; i < deg; i++)
    {
        res += buff[i];
    }
    res = res / deg;
    return res;
}