#include <stdio.h> 
#define NB_SCORES 5 //appel d'un autre tableau
void main(void) {
	int scores[NB_SCORES];

	for(int i=0 ; i<NB_SCORES ; i++){
		printf("quel est le score?");
		scanf_s("%d", &scores[i]);

	}
	for(int i=0 ; i<NB_SCORES ; i++){
		printf("%d,", scores[i]);
	}
} 


/*	// afficher l'indice, l'adresse et la valeur de chaque cellule
	for (int i = 0; i < NB_SCORES; i++) {
		printf("Cellule d'indice %d - Adresse %p - Valeur : %d\n", 								i, &scores[i], scores[i]);
	}*/