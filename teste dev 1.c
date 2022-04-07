#include <stdio.h>

//Cálulo de pontuação inteira de letras em uma palavra informada pelo usuário.

int main(){
	char n;
	int num = 0;
	
	printf("Informe uma palavra em caixa alta (ao final digite '.' e pressione enter):\n");
	
	do{
		scanf(" %c", &n);
	if('A'==n || 'E'==n ||'I'==n || 'O'==n || 'U'==n || 'L'==n || 'N'==n || 'R'==n || 'S'==n || 'T'==n){
		num = num + 1;
	}
	else if('D'==n || 'G'==n){
		num = num + 2;
	}
	else if('B'==n || 'C'==n || 'M'==n || 'P'==n){
		num = num + 3;
	}
	else if('F'==n || 'H'==n || 'V'==n || 'W'==n || 'Y'==n){
		num = num + 4;
	}
	else if('K'==n){
		num = num + 5;
	}
	else if('J'==n || 'X'==n){
		num = num + 8;
	}
	else if('Q'==n || 'Z'==n){
		num = num + 10;
	}
	else if(n=='.'){
		printf("Palavra = %d.", num);
		break;
	}
	else{
		printf("Caratere inválido!\n");
	}
	}while(n != '.');
	return 0;
}
