#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x,n,total;
	 
	printf("\tCalculo Exponencial.");
	printf("\nAtribua um valor para X: ");
	scanf("%d",&x);
	printf("Atribua o valor para N: ");
	scanf("%d",&n);
	
	total = pow((x*n),2);
	
	printf("O resultado final é: %d",total);
	
	return 0;
	
}  
