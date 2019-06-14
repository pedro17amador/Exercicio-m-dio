#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area;
	
	printf("\tCalculo da área de um triângulo.");
	printf("\nAtribua um valor para a base do triângulo: ");
	scanf("%d",&base);
	printf("Atribua o valor para altura do triângulo: ");
	scanf("%d",&altura);
	
	area = (base*altura)/2;
	
	printf("A área do triângulo é igual a: %d",area);
	
	return 0;
	
}  
