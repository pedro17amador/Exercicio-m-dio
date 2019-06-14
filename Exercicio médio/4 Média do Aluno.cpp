#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	int n1,n2,n3,n4,total;
	
	printf("\tEsse algoritmo é para ver a média de um aluno.");
	printf("\nDigite a primeira nota do um alumo:");
	scanf("%d",&n1);
	printf("Digite a segunda nota de um alumo:");
	scanf("%d",&n2);
	printf("Digite a terceira nota de um alumo:");
	scanf("%d",&n3);
	printf("Digite a quarta nota de um alumo:");
	scanf("%d",&n4);
	
	total = (n1+n2+n3+n4)/4;
	
	printf("A média desse aluno é: %d",total);
	
	return 0;
}
