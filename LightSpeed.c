#include <stdio.h>

/*
int main(void)
{
    double lightSpeed = 3e5; // vitesse de la lumière
    double distance = 1e10; // km 

    double time = distance / lightSpeed; 

    printf("%lf secondes soit %d heure et %d minutes \n",time, (int)time/3600 , (int)((time/3600 - (int)time/3600) * 60)); //  Afin de bien afficher un temps correcte je dois afficher l'heure sans les minutes puisque 9.23 ne correspond pas a 9heure et 23 minutes puisque .23 n'est pas convertie. J'affiche donc le temps total en seconde /3600 converison en heure ensuite je precast en (int) le chiffre afin d'avoir que la partie entière du résultat. Je dois mainteant convertir 0.23 en minute pour cela je soustrait la partie entière et ensuite je multiplie par 60 et je precast en int

    return 0;
}*/


int main(void)
{
    const double LIGHTSPEED = 3e5; // vitesse de la lumière , déclaration d'une constante car la vitesse de la lumière en est une 
    double distance = 1e10; // km 
    int ternaire = LIGHTSPEED < distance? 500 : 0;
    printf("%d\n", ternaire);
    double time = distance / LIGHTSPEED; 

    printf("%lf secondes soit %1.f heure et %d minutes \n",time, time/3600 , (int)((time/3600 - (int)time/3600) * 60)); //  Afin de bien afficher un temps correcte je dois afficher l'heure sans les minutes puisque 9.23 ne correspond pas a 9heure et 23 minutes puisque .23 n'est pas convertie. J'affiche donc le temps total en seconde /3600 converison en heure ensuite je precast en (int) le chiffre afin d'avoir que la partie entière du résultat. Je dois mainteant convertir 0.23 en minute pour cela je soustrait la partie entière et ensuite je multiplie par 60 et je precast en int

    return 0;
}