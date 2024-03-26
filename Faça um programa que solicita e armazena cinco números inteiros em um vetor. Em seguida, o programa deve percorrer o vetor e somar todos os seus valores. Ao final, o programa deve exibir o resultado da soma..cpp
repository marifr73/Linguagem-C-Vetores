#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
int n[5], i, s = 0;
	for(i = 0; i < 5; i++){
	printf("Informe o %iº número: ", i+1);
	scanf("%i", &n[i]);
		s+=n[i];
}
	printf("\nA soma dos números informados é: %i ", s);
return(0);
}
