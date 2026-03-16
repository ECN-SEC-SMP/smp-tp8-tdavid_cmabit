#pragma once
#include <Animal.h>

class Pierre : public Animal
{
private:
    /* data */
public:
    Pierre();
    ~Pierre();

    void setAttaque();
    void deplace(int maxX, int maxY);
};
