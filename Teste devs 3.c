#include <stdio.h>
#include <locale.h>

int main(){
	int n, i, soma=0;
	//Tentativa de imprimir n�meros primos e som�-los, "mal sucedida".
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
		if(i%==0){    
			printf("%d\n", i);
			soma = soma + i;
		}
	}
	printf("\nSoma = %d", soma);

	return 0;
}
