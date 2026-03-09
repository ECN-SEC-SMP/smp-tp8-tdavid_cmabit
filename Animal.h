#include <Attaque.h>

class Animal
{
private:
    string nom;
    int x; //abs animal
    int y; //ord animal
    bool vivant;
    Attaque typeAttaque;
public:
    // constructeurs
    Animal(int maxX, int maxY);
    Animal(int maxX, int maxY, int a, int b);
    // destructeur
    ~Animal();
    // accesseurs
    string getNom() const;
    int getX() const;
    int getY() const;
    bool getVivant() const;
    Attaque getAttaque() const;
    // mutateurs
    void setVivant(bool v);
    virtual void setAttaque(Attaque atq); 
    virtual void deplace(int maxX, int maxY);
    
    bool attaque(Animal &a);
};
