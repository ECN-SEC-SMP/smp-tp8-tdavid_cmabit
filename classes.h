#include <string>
using namespace std;

class Attaque
{
private:
    /* data */
public:
    Attaque(/* args */);
    ~Attaque();
};



class Animal
{
private:
    string nom;
    int x; //abs animal
    int y; //ord animal
    bool vivant;
    Attaque typeAttaque;
public:
    Animal(int maxX, int maxY);
    Animal(int maxX, int maxY, int a, int b);
    string getNom() const;
    int getX() const;
    ~Animal();
};
