#include <stdio.h>

int main(){

int tab[5] = {1,2,3,4,5};
int* pTab = tab;


	for(int i = 0 ; i < (int)(sizeof(tab)/sizeof(tab[0]));i++)
	{
		printf("%d \n",*(pTab+i));
	}

}
