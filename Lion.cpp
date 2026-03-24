#include <Lion.h>

Lion::Lion(int maxX, int maxY) : Animal(maxX,maxY)
{
    this->nom = "Lion";
    setVivant(1);
}

void Lion::setAttaque()
{
    Attaque(); 
}

void Lion::deplace(int maxX, int maxY)
{
    
}