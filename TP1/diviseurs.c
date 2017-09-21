#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int div = 1;
	while(div <= n/2){
		if(n%div == 0){
			printf("%d \n", div);
		}
		++div;
	}
	printf("%d", n);
}
