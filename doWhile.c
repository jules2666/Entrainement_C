#include <stdio.h>

int main(void)
{
    //do while est utile si on veux attendre jusqu'à ce que quelque chose soit correcte 
    //si je programme un robot je veux qu'il avance jusqu'à ce qu'il rencontre un obstacle devant lui 
    int obstaclePresent = 0; // pas d'obstacle par défaut
    int boutonPressed = 0;

    do
    {
        printf("Robot avance \n");
        printf("Y'a t'il un obstacle ? Oui : 1 Non : 0\n");
        scanf("%d" , &obstaclePresent);
    } while (obstaclePresent == 1); // si il y a un obstacle -> obstaclePresent = 1 alors on sort de la boucle
    
    // deuxième cas mon robot démare je veux qu'il soit sous tension mais qu'il ne bouge pas tant que le bouton pour lancer le programme est presser

    do
    {
        printf("Robot attente \n");
        printf("Avez vous pressez le bouton ? Oui : 1 Non : 0\n");
        scanf("%d" , &boutonPressed);
    } while (boutonPressed == 1); // si le bouton est pressé alors on quitte la boucle et éxécute le code de navigation par exemple ou bien un affichage 
                                  // on peut imaginer une borne dans un magasin qui tant que l'utilisateur n'a pas appuyer sur 'commander' elle reste bloquer sur la page d'accueil


    printf("Salut\n");

    return 0;
}