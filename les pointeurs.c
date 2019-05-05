#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int *p; int a;
	
	p=&a;
	
	printf("donner la valeur de a:");
	scanf("%d",&a);
	
	printf("l'adresse de a est:%u",p);
	
	
	
   return 0;
}
