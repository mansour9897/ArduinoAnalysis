#ifndef _moving_avrage_included_
#define _moving_avrage_included_

class MovingAvrage
{
private:
    unsigned int deg;
    float *buff;
    int index;
public:
    MovingAvrage(unsigned int d);
    ~MovingAvrage();

    void InserData(float data);
    float Avrage(void);
};




#endif