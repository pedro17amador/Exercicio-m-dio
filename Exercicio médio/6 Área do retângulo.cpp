#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area;
	
	printf("\tCalculo da �rea de um ret�ngulo.");
	printf("\nAtribua um valor para a base do ret�ngulo: ");
	scanf("%d",&base);
	printf("Atribua o valor para altura do ret�ngulo: ");
	scanf("%d",&altura);
	
	area = base*altura;
	
	printf("A �rea do ret�ngulo � igual a: %d",area);
	
	return 0;
	
}  
