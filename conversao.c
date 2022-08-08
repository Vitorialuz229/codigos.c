#include <stdio.h> 
#define N 32

int main () { 
	int i, num, vet[N];
	
	while (scanf("%d", &num)!=EOF) { 
		if(num==0) //enquanto num for igual a zero
		printf("%d\n", num); 
		else { 
			for(i=0;i<16;i++) {  
		vet[i] = num%2; //obtém o resto da divisão de num por 2 
		num = num/2;
	} //percorre o vetor para mostrar o número em binário 
	i=15; 
	while(vet[i]==0)
	i--; 
	while(i>=0){
		printf("%d", vet[i]); 
		i--; 
	} 
	printf("\n"); 
} 
} 
return 0; 
} 

