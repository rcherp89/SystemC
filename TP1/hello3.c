#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	void bonjour2(int i){
		printf("Bonjour utilisateur %d !", i);
	}
	bonjour2(n);
	return 0;
}
