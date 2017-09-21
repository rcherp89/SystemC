#include <stdio.h>

int main(){
    int min = 0, max = 0, temp;
    for(int i = 0; i < 5; i++){
    	scanf("%d", &temp);
    	if(i == 0) min = temp;
    	if(i == 0) max = temp;
    	if(temp > max) max = temp;
    	if(temp < min) min = temp;
    }
    printf("valeur de min: %d, valeur de max: %d \n", min, max);
    return 0;
}
