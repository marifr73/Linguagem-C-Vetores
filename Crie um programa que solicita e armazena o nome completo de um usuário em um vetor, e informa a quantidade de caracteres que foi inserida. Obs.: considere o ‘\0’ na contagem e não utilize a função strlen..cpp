#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
char n[50], i = 0, cont = 1;
	printf("Digite o seu nome: ");
	gets(n);

	while(n[i] != '\0') {
        	i++;
		cont++;
    }
    printf("O nome tem %i caracteres, incluindo o '\\0'!\n", cont);
    return 0;
}
