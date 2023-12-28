#include <stdio.h> //bibliotheque scanf_s , printf, getchar, putchar, gets, puts, fread, fwrite
#include <stdbool.h> //bibliotheque variable booleennes 
#include <math.h>// sqrt=carre
	void main(void){ //nom fonction principale
		int nombreEntier;  
		double nombreReel;
		float nombreReel;
		char caracteres;
		bool booleens;

			printf("message à afficher à l'ecrant"); 
			printf("%d %f %f %c\n", nombreEntier nombreReel nombreReel caracteres); 
			// pour aller a la ligne \n

		// pour une condition simple		
			printf("obtenir la condition à evaluee");
			scanf_s("texte %d texte %lf texte %f texte %c texte",&nombreEntier, &nombreReel &nombreReel &caracteres);
			// jamais de \n dans un scanf
			printf("%s", condition ? "resultaSiConditionRespectee" : "resultatSiConditionNonRespectee");
			
		
		//pour une alternative 

			if (condition){
				printf("si la condition est vraie");
			}
		 //à ajouter si alternative double 
			else {
				printf("si la condition est fausse");
			}

		// alternative "longue"

			switch (variableATester)
			{
			case valeur1 :
				printf("si case valeur1 est vraie");
				break;
			case valeur2 : //sinon
				printf("si case valeur1 est vraie");
				break;
			default: // = else
				printf("si aucune case n'est vraie");
				break;
			}


            		//repetitive
			int i=1		//initialise
			while(condition){	//condition
				printf("tant que la condition est vraie");
				i++ 	//mise a jour de la variable 
			}
			printf("fin de la boucle");

			for (int i=1 ; tant que i ; i++) { 
				//(initialisation variable ; condition ; misa à jour)
				printf("tant que la condition est vraie");
			}

			do 
			{
				printf("tant que la condition est vraie");
				compteur++;
			}while(condition);