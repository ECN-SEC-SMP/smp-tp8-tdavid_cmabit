#include <Animal.h>

Animal::Animal(int maxX, int maxY)
{
    this->x = randomMax(maxX-1);
    this->y = randomMax(maxY-1);
}

Animal::Animal(int maxX, int maxY, int a, int b)
{
    if (a < maxX){ this->x = a; }
    if (b < maxY){ this->y = b; }
}

string Animal::getNom() const { return nom; }
int Animal::getX() const { return x; }
int Animal::getY() const { return y; }
bool Animal::getVivant() const { return vivant; }
Attaque Animal::getAttaque() const { return typeAttaque; }

void Animal::setVivant(bool v) { this->vivant = v; }

bool Animal::attaque(Animal &a)
{
    bool result;
    result = ;
    return result;
}