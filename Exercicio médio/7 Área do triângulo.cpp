#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area;
	
	printf("\tCalculo da �rea de um tri�ngulo.");
	printf("\nAtribua um valor para a base do tri�ngulo: ");
	scanf("%d",&base);
	printf("Atribua o valor para altura do tri�ngulo: ");
	scanf("%d",&altura);
	
	area = (base*altura)/2;
	
	printf("A �rea do tri�ngulo � igual a: %d",area);
	
	return 0;
	
}  
