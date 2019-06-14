#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dependentes,ht;
	float vl,vb,vh;
	
	printf("\tSalário base");
	printf("\nNúmero de dependentes:");
	scanf("%d",&dependentes);
	printf("Valor da hora:");
	scanf("%d",&vh);
	printf("Digite a quantidade de horas trabalhadas:");
	scanf("%d",&ht);
	
	vb = vh*ht;
	vl = (300*dependentes)+vb;
	
	printf("Valor Bruto: %d",vb);
	printf("\nValor Liquido: %d",vl);

	return 0;
	
}  


