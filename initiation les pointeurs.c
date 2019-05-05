#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// déclaration d'un pointeur
	int *P1;
	// allocation d'espace mémoire 
	P1=(int*)malloc(sizeof(int));
	// utilisation du varaible
	*P1=5;
	printf("la valeur de P1 est:%d",*P1);
	// allocation d'espace mémoire 
	free(P1);
	
	
	
	
	
	return 0;
}
