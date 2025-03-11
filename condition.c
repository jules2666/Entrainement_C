#include <stdio.h>

#define doorCode 1552
#define adminCode 9999

int main()
{
    
    int inputUser = 0;
    printf("Saissisez le code de la porte \n");
    scanf("%d",&inputUser);

    (doorCode == inputUser || adminCode == inputUser ) ? printf("Acess Granted! \n") : printf("Acess Denied \n"); // test ternaire au lieu d'écrire

    /*if(doorCode==inputUser)
    {
        printf("Acess Granted\n");
    }
    else
        printf("Acess Denied\n");
    */
   switch(inputUser)
   {
        case doorCode:
            printf("Welcome Visitor\n");
            break;
        case adminCode:
            printf("Welcome Administrator\n");
            break;
        default:
            printf("Bad password \n");
            break;
   }
   // attention on peux utiliser des variables devant 'case' mais il faut qu'elle soit déclarer en define on ne peux pas utiliser une variable qui est initialise en cours d'éxécution .
   // on utilise define (préprocesseur)
    return 0;
}
