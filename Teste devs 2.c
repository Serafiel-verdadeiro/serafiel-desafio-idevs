#include <stdio.h>

int main (){
	int x[10], y[10], n, i, j;
	
	for(n=10; n>0; n--){
	j=1;
	for(i=n; j<=n; j++){     //Repetição verifica divisores de 10.000.
		if(i%j==0){
			y[n]=j;			//Tentativa de armazenagem de valores de j no vetor y[n], "mal sucedida".
			x[n]=y[n];
			printf("%d ", j); 
		}
	}
	printf("\n");
} 
	printf("\n");
	for(n=10; n>0; n--){ //Tentativa de verificação e impressão de igualdade de valores do vetor y, "mal sucedida".
		if(x[n]==x[n]+1){
			printf("%d = %d\n", x[n], y[n]);
	}
	}
	
	return 0;
}
