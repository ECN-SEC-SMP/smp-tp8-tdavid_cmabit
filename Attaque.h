#include <string>
using namespace std;

class Attaque
{
private:
    int type; // 0: pierre, 1: feuille, 2: ciseaux
public:
    // constructeurs
    Attaque(); // cree une attaque random
    Attaque(int a); // cree une attaque specifique
    // destructeur
    ~Attaque();
    // accesseurs
    int getTypeAttaque() const;
    bool resoudreAttaque(Attaque &a) const;
    string getNomAttaque() const;
};
