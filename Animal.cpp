#include <Animal.h>



Animal::Animal(int maxX, int maxY)
{
    this->x = randomMax(maxX-1);
    this->y = randomMax(maxY-1);
}

void Animal::setAttaque(Attaque atq)
{

}