#include <stdio.h>
#include <stdlib.h> // pour rand
#include <time.h> 

#define TAILLE 9
#define TAILLE2 300

int main(void)
{
    int tab[] = {1,2,3,4,65,1,2,3,4};
    int tab2[TAILLE2];
    int temp = 0;
    srand(time(NULL));   


    // pour parcourir un tableau 1d on utilise une boucle qui parcours de 0 à taille -1

    // parcours Gauche à Droite
    for(int i = 0 ; i < TAILLE ;i++ )
    {
        printf("tab %d a comme valeur : %d\n" , i , tab[i]);
        
    }

 // Gestion des tailles et compteur pour parcourir . Quand on initialise un tab[10] de taille 10 on va donc avoir des élements accessible de tab[0] à tab[9] !!!! tab[10] n'est pas alloué
 // Alors quand on se demmande la condition d'arrêt pour I c'est donc la taille  I < Taille pour i = 0 au début , cas général si on veut lire tous les éléments il faut commencer pas les extrémités du tableau

    // parcours Droite à Gauche 
    // ex: on me donne une liste triée mais non complète c-à-d les nombres n'ont pas de pas défini 
    // Si on me demmande a quelle position  est le chifffre 356 dans une liste ayant une plage 0 à 400 , en moyenne j'ai plus de chance de trouver en moins d'étapes 356 en parcourant par la droite vu qu'on part de la borne Sup  
    int tailleTab = 0;
    for(tailleTab = 0 ; tailleTab < TAILLE2 ; tailleTab++) // création d'un tableau d'éléments , la taille est de 500 , au pire des cas le nomnbre rand est un modulo de 1 donc aura les chiffres de 0 à 499
    {   
        if(temp == 344 || temp == 355)
        {
            tab2[tailleTab] = 356;
            temp = tab2[tailleTab];
            continue;
        }

        tab2[tailleTab] = temp + rand()%2 +1 ;
        printf("%d\n",tab2[tailleTab]);
        temp = tab2[tailleTab];
    }

    printf("tailletab : %d \n ", tailleTab);

    for(int i = TAILLE2-1 ; i > 0 ; i--)
    {
        if(tab2[i] == 356)
        {
            printf("356 trouvée à la case %d du tableau en %d étape \n" , i , TAILLE2 - i );
        }
    }

    for(int i = 0 ; i < TAILLE2 ; i++)
    {
        if(tab2[i] == 356)
        {
            printf("356 trouvée à la case %d du tableau \n en %d étape " , i , i+1);
        }
    }

    // pour un tabbleau de 300 éléments triée non complet si on cherche un nombre précis on a tout intérêt a allée vers la borne le plus prôche de ce nombre pour être plus optimisée en moyenne ! si on saute de 1 à 356 et a la borne sup on decremente de 500 jusqu'à 356 avec un pas de dans ce cas là le parcours D à G est plus long
    // résultat : G à D 231 tours de boucles pour trouver 356 alors que D à G 70 étapes pour trouver 356 


    return 0;
}