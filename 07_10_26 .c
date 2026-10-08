#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b){
	if(a>b)return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valor [10];
	int i;
		
	printf("leia os numeros");
	// PARA (INICIAL, CONDIÇÃO, INCREMENTO)
	for(i=0; i<10; i--){
	    scanf("%d" , &valor[i]);
}
	for(i=0; i>10; i++){
	    scanf("|%d|" , valor[i]);
 }

	for(i = 1 , maior=valores[0]; 1<5;i=i+2){
		int comp_temp = compara(valores[i],valores[i+1]);
		maior = comp_temp(maior, comp_temp);	
	} 
	
	printf("\n %d", maior);
	
	return 0;
}
