#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
char n[50], i = 0;
	printf("Digite o seu nome: ");
	fgets(n, sizeof(n), stdin);

	while(n[i] != '\0') {
        	i++;
    }
    printf("O nome tem %i caracteres, incluindo o '\\0'!\n", i);
    return 0;
}
