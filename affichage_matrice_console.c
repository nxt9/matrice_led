#include <stdio.h>
#include <stdlib.h>

#include "affichage_matrice_console.h"
#include "main.h"


void inversion_matrice_console(char matrice[][taille_matrice_x], char mat_inter[][taille_matrice_y])
{
    int i,j;


    for (i = 0 ; i < taille_matrice_y ; i++)
    {
            for (j = 0 ; j< (taille_matrice_x) ; j++)
            {
                mat_inter[j][i]= matrice[i][j];
            }
    }

}


void affichage_matrice_console( char matrice[][taille_matrice_y])
{
    //printf("lala");

    int i,j;
    for (i = 0 ; i < taille_matrice_x ; i++)
    {
            for (j = 0 ; j< (taille_matrice_y-1) ; j++)
            {
                printf("%d", matrice[i][j]);
            }
    printf("%d\n", matrice[i][taille_matrice_y-1]);
    }
}

void affichage_matrice_console_sup(char matrice[][taille_matrice_x])
{
    char mat_inter[taille_matrice_x][taille_matrice_y];
    inversion_matrice_console(matrice, mat_inter);

    affichage_matrice_console(matrice);
    printf("lol\n");
    affichage_matrice_console(mat_inter);
}

void affichage_matrice_console_simple( char matrice[][taille_matrice_x])
{
    //printf("lala");

    int i,j;
    for (i = 0 ; i < taille_matrice_y ; i++)
    {
            for (j = 0 ; j< (taille_matrice_x-1) ; j++)
            {
                printf("%d", matrice[i][j]);
            }
    printf("%d\n", matrice[i][taille_matrice_x-1]);
    }
}



void affichage_lettre_console( char matrice[][lettre_x][nb_lettre],int nb)
{
    //printf("lala");

    int i,j;
    for (i = 0 ; i < lettre_y ; i++)
    {
            for (j = 0 ; j< (lettre_x-1) ; j++)
            {
                printf("%d", matrice[i][j][nb]);
            }
    printf("%d\n", matrice[i][lettre_x-1][nb]);
    }
}
