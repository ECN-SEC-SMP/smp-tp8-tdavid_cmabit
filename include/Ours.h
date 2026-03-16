#pragma once
#include <Animal.h>

class Ours : public Animal
{
private:
    /* data */
public:
    Ours();
    ~Ours();

    void setAttaque();
    void deplace(int maxX, int maxY);
};
