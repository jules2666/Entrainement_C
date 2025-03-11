#include <stdio.h>
#include <math.h>

int main(void)
{
   /* on utilise la boucle while quand on ne sait pas à l'avance le nombre d'itératios nécessaire ! attention aux boucles infini*/

    
    int multiplicateur = 4;
    int resultat = 2;
    int compteur = 0;

    while (resultat < 1e5)
    {
        resultat = resultat * 4;
        compteur++;
    }

// Ici le but de l'exercice est de savoir combien de fois je dois multiplier par 4 le nombre deux pour dépasser 1e10 ou bien qu'elle est le premier multiple de deux qui depasse 1e10
// I va me permettre le nombre de tour de boucle j'aurai ensuite le nombre de fois qu'il faut multiplier par 4 le chiffre 2 poyr dépassser 1e10 mais aussi je peux avoir le multiple direct en faisant 4^i


    printf("On a besoin de multiplier %d fois pour dépasser 1e5  , le premier multiple de 2 par 4 qui depasse 1e10 est %d \n" , compteur, resultat);
    printf("Soit l'équivalent de %d \n ", (int) pow(multiplicateur,compteur));

// gcc -Wall -Werror -Wextra while.c -o prog1 -lm 
// -lm pour inclure math.h dans la compilation 

    return 0;
}