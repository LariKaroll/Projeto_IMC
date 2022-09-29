#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	float pesoDaPessoa,alturaDaPessoa,imc;
	printf("Digite seu peso: ");
	scanf("%f", &p);
	printf("Digite sua altura: ");
	scanf("%f",&h);
	
	imc= pesoDaPessoa/(alturaDaPessoa*alturaDaPessoa);
	if(imc < 18.5){
		printf("Abaixo do peso");
	}
	if(imc>=18.5 && imc<25){
		printf("Peso normal");
	}
	if(imc>=25 && imc<30){
		printf("Acima do peso");
	}
	if(imc>=30
	){
		printf("Obeso");
	}
}
