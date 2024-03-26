#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
int n[10], i, m;
	for(i = 0; i < 10; i++){
	printf("Informe o %iº número: ", i+1);
	scanf("%i", &n[i]);
}
m = n[0];

	for(i = 0; i < 10; i++){
	if(n[i] > m){
		m = n[i];
}
}
 	printf("O maior número informado foi: %i\n", m);
}
