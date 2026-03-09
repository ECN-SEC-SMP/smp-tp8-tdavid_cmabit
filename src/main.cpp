#include "tableau.h"
#include <cstdlib>
#include <ctime>
#include <random>

int main() {
    rand();

    char plateau[TABLEAU_H_SIZE][TABLEAU_L_SIZE];
    initTableau(plateau);
    afficherTableau(plateau);

    return 0;
}