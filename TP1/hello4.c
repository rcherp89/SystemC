#include <stdio.h>

int main() {

	int identification(){
		int n;
		scanf("%d", &n);
		return n;
	}

	void bonjour2(int i){
		printf("Bonjour utilisateur %d !", i);
	}

	bonjour2(identification());
	return 0;
}
