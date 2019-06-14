#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area;
	
	printf("\tCalculo da área de um retângulo.");
	printf("\nAtribua um valor para a base do retângulo: ");
	scanf("%d",&base);
	printf("Atribua o valor para altura do retângulo: ");
	scanf("%d",&altura);
	
	area = base*altura;
	
	printf("A área do retângulo é igual a: %d",area);
	
	return 0;
	
}  
