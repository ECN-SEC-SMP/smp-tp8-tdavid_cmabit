#include "tableau.h"
#include <iostream>
using namespace std;

/**
 * @brief Initialise le tableau de jeu
 * 
 * @param tableau 
 */
void initTableau(char tableau[TABLEAU_H_SIZE][TABLEAU_L_SIZE]) {
    for (int i = 0; i < TABLEAU_H_SIZE; i++) {
        for (int j = 0; j < TABLEAU_L_SIZE; j++) {
            tableau[i][j] = ' ';
        }
    }
}

/**
 * @brief Affiche le tableau de jeu
 * 
 * @param tableau 
 */
void afficherTableau(char tableau[TABLEAU_H_SIZE][TABLEAU_L_SIZE]) {
    for (int i = 0; i < TABLEAU_H_SIZE; i++) {
        // Ligne de séparation
        for (int j = 0; j < TABLEAU_L_SIZE; j++) {
            cout << "|----";
        }
        cout << "|" << endl;

        // Ligne de contenu
        for (int j = 0; j < TABLEAU_L_SIZE; j++) {
            cout << "| " << tableau[i][j] << "  ";
        }
        cout << "|" << endl;
    }
    // Dernière ligne de séparation
    for (int j = 0; j < TABLEAU_L_SIZE; j++) {
        cout << "|----";
    }
    cout << "|" << endl;
}
