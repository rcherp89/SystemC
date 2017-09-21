#include <stdio.h>

int main(){
	int x,y;
	printf("Le premier entier ?\n"); //ne s'affiche pas avant le scan o.O
	fflush( stdout );
	scanf("%d", &x); //la fonction scanf sert à prendre un input et le stocker dans une variable
	printf("Le deuxieme entier ?\n");
	fflush( stdout );
	scanf("%d", &y);
	printf("La somme est %d \n", x+y);
	return 0;
}
