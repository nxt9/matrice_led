#include "alphabet.h"
#include "main.h"

void test(char matrice[][lettre_x][nb_lettre],int nb)
{
    int i,j;

    for(i=0;i<lettre_x;i++)
    {
        matrice[0][i][nb]=1;
        matrice[lettre_y-1][i][nb]=1;
    }
    for(j=0;j<lettre_y;j++)
    {
        matrice[j][0][nb]=1;
        matrice[j][lettre_x-1][nb]=1;
    }
}

void l (char matrice[][lettre_x][nb_lettre],int nb)
{
    int i,j;

    for(i=0;i<lettre_x;i++)
    {
        matrice[lettre_y-1][i][nb]=1;
    }
    for(j=0;j<lettre_y;j++)
    {
        matrice[j][0][nb]=1;
    }
}

void lettre_i (char matrice[][lettre_x][nb_lettre],int nb)
{
    int j;
    for(j=0;j<lettre_y;j++)
    {
        matrice[j][2][nb]=1;
    }
}
