#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int randomNumber = rand() % 100 + 1;
	printf("Bienvenue dans le jeu du numéro magique!\n");
	int count = 1;

	while(1){
		int userNumber;
		printf("Veuillez saisir un nombre entre 1 et 100: ");
		scanf("%d",&userNumber);
		if(userNumber == randomNumber){
			printf("Félicitations, vous avez gagnée c'était bien le %d!\n", randomNumber);
			break;
			}

		else if(userNumber > randomNumber){
			printf("Le nombre magique est plus petit!\n");
			}		

		else{
			printf("Le nombre magique est plus grand!\n");
			
			}
		printf("Ceci était votre essai n°%d.\n\n", count);
		count++;
		}

	exit(0);
}

