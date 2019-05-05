#include <stdio.h>
#include <stdlib.h>

typedef struct etudiant{
	int n;
	char nom[20];
	char prenim[20];
}etudiant;

int main(int argc, char *argv[]) {
	
	     // etud : est un pointeur vers l'enregistrement de type etudiant
	etudiant *etud[50]; int n,i;
	
	
	printf("donner n:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		etud[i]=(etudiant*)malloc(sizeof(etudiant));  // on alloue les espace mémoire spéciaux pour les adresses 
	}
	
	
	return 0;
}
