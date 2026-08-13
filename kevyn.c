
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro Valor");
	scanf("%d" , &primeiro);
	printf("Digite o segundo Valor");
	scanf("%d" , &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", segundo, primeiro);
	
	return 0;
	
	///////////////// 2 ex ///////////////////
	
	double cotacao1, cotacao2, soma;
	
	printf("\nDigite o primeiro numero");
	scanf("%lf" , &cotacao1);
	printf("\nDigite o segundo numero");
	scanf("%lf" , &cotacao2);
	
	soma = (cotacao1 + cotacao2);
	
	printf("%lf" , soma);
	
