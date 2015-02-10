#include "affichage_matrice_console.h"
#include "main.h"

void init_mat(char matrice[][taille_matrice_x])
{

int i,j;

for (i = 0 ; i < taille_matrice_y ; i++)
{
        for (j = 0 ; j< (taille_matrice_x) ; j++)
        {
            matrice[i][j]=0;
        }
}
}

void init_lettre(char matrice[][lettre_x][nb_lettre])
{
    int i,j,h;
for(h=0;h<nb_lettre;h++)
{

    for (i = 0 ; i < lettre_y ; i++)
{
        for (j = 0 ; j< (lettre_x) ; j++)
        {
            matrice[i][j][h]=0;
        }
}
}
}
