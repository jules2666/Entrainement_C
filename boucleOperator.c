#include <stdio.h>

#define TAILLE 13

int main(void)
{
    // continue aller a l'itération suivante 
    // break quitter la boucle sans finir toutes les itérations
    
    int tab[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int i = 0;

    // cas de break 
    // je veux verifier si une liste que je reçois est rempli de tout les entiers , si un entier manque alors la liste est invalide sinon elle est correcte
    while(i < TAILLE-1) // pcq i va de 0 à 12 equivalent a 12 tours de boucle car quand on compare 12 et 13 la liste est fini on ne va pas comparer 13 et i+1 sinon on lit de la mémoire non alloué ce qui est faux est dangereux 
    {
        if(tab[i] == tab[i+1]-1 )
        {
            i++;
            continue; 
        }
        else
        {
            printf("%d %d " , tab[i] , tab[i+1] );
            i = -1;
            break; // les nombres ne se suivent pas liste incorrecte !
        }
    
    }
    printf("%d ", i );
    (i == TAILLE-1) ? printf("Liste correcte\n") : printf("liste Incorrecte \n");
    

    return 0;
}