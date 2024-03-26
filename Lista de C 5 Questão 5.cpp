#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a[5], b[5], i;
	for(i = 0; i < 5; i++){
		printf("Informe o %iº número: ", i+1);
		scanf("%i", &a[i]);
	}
	for(i = 0; i < 5; i++){
		if(a[i] == 0) {
           	 b[i] = a[i];
           	 printf("O valor de a[%i] = %i e o de b[%i] = %i\n\n", i+1, a[i], i+1, b[i]);
        } 
        	else if(a[i] % 2 == 0) {
            	b[i] = a[i] * 5;
            	printf("O valor de a[%i] = %i e o de b[%i] = %i\n\n", i+1, a[i], i+1, b[i]);
       		 }
        	else if(a[i] % 2 != 0) {
           		b[i] = a[i] + 5;
           	 	printf("O valor de a[%i] = %i e o de b[%i] = %i\n\n", i+1, a[i], i+1, b[i]);
       		 }
    }
    return 0;    
}

