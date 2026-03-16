#include "tableau.h"
#include <cstdlib>
#include <ctime>
#include <random>
#include <iostream>

using namespace std;

int main() {
    rand();
    cout << "Bienvenue dans le jeu de la vie !" << endl;
    char plateau[TABLEAU_H_SIZE][TABLEAU_L_SIZE];
    initTableau(plateau);
    afficherTableau(plateau);

    return 0;
}