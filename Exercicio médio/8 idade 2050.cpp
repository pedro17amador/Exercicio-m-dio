#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	int ano,anoA,idadeA,NVidade;
	
	printf("\tPrograma para calcular a idade.");
	printf("\nDigite o ano em que nasceu:");
	scanf("%d",&ano);
	printf("Digite o ano atual:");
	scanf("%d",&anoA);
	
	idadeA = (anoA - ano);
	
	printf("A sua idade atual �: %d",idadeA);
	
	NVidade = (2050 - ano);
	
	printf("\nA sua idade em 2050 ser�: %d",NVidade);
	
	return 0;
	
}  
