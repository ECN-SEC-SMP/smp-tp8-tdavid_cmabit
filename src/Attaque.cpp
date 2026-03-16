#include <Attaque.h>

int randomMax(int maxi)
{
    srand(time(NULL)); // seed
    int r = rand() % maxi;
    return r;
}

Attaque::Attaque(){ this->type = randomMax(2); }

Attaque::Attaque(int a){ this->type = a; }

int Attaque::getTypeAttaque() const { return type;}

string Attaque::getNomAttaque() const
{
    string type_string;
    int type_int = getTypeAttaque();
    if (type_int == 0){ type_string = "pierre"; }
    if (type_int == 1){ type_string = "feuille"; }
    if (type_int == 2){ type_string = "ciseaux"; }
    return type_string;
}

bool Attaque::resoudreAttaque(Attaque &a) const
{
    bool result = 0;
    int type = getTypeAttaque();
    if ((a.type == 0) && (type == 1)){ !result;}
    if ((a.type == 1) && (type == 2)){ !result;}
    if ((a.type == 2) && (type == 0)){ !result;}
    return result;
}

