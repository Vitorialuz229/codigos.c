#include <stdio.h> 

int main() { 
	int num, cent, dez, uni, controle, final;
//cent = centena, dez= dezena, uni= unidade
	scanf("%d",&num); 
// contando os númeors três numeros da esquerda para direita 
// encontra-se centena, dezena e unidade

	cent = num/100; //primeiro algarismo
	dez =(num - cent*100)/10; 
//segundo algarismo
	uni = num - cent*100 - dez*10; // terceiro algarismo
//quarto algarismo digíto controle e a soma de
	controle =(cent + dez*3 + uni*5)%7;
	
	final = cent*1000 + dez*100+ uni*10 + controle;
	
	printf("O NOVO NUMERO E = %d\n", final);
	
return 0; 
}
