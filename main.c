#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "main.h"
#include "affichage_matrice_console.h"
#include "initialisation_matrice.h"
#include "alphabet.h"
/* test git hub lilol llll*/
void main()
{
    char matrice[taille_matrice_y][taille_matrice_x];
    char test1[lettre_y][lettre_x][nb_lettre];
    init_lettre(test1);
    l(test1,0);
    test(test1,1);
    l(test1,2);
    //lettre_i(test1,3);
    //l(test1,4);
    //test(test1,5);
    //l(test1,6);
    init_mat(matrice);
    int i,j,h,f;
    //affichage_lettre_console( test1,0);
    //affichage_lettre_console( test1,1);
    //affichage_lettre_console( test1,2);

do {

    for ( i = 0 ; i < taille_matrice_x ; i++) // place de l'ancrage
    {
        for(f=-nb_lettre;f<nb_lettre;f++) //-nb_lettre
        {
            for (j = 0 ; j < lettre_y ; j++)  // recopie selon y
            {
                for (h = i+lettre_x*f ; h < (lettre_x*(1+f)+i) ; h++) // recopie selon x
                {
                    if ((h < taille_matrice_x)&&(h>=0))
                    {
                        matrice[j][h]=test1[j][h-(i+f*lettre_x)][f];

                    }
                }
        }
    }
    affichage_matrice_console_simple(matrice);
    init_mat(matrice);
    Sleep(100);
    }

} while(1);

}
