#include <stdio.h>
#include <stdlib.h>

int main()
{

int** Ppointeur = malloc(sizeof(int*)*5);

	for(int i = 0 ; i < 5 ; i++)
	{
	*(Ppointeur+i) = malloc(sizeof(int)*5);

	}
	
	for(int i = 0 ; i < 5 ; i++)
	{
		printf("tableau pointeur %d : \t" , i );
		for(int j = 0 ; j < 5 ; j++)
		{
		*(*(Ppointeur+i)+j) = i+j;
		printf("%d " , *(*(Ppointeur+i))+j);
		}
		printf(" \n ");
	}
		
}
