#include<stdio.h>
#include<locale.h>

int main(){
//Condições:
//•Se o índice do vetor a for zero, insira em b o respectivo valor de a;
//•Se o índice de a for par, insira em b o respectivo valor de a multiplicado por 5;
//•Se o índice do vetor a for ímpar, insira em b o respectivo valor a somado com 5;
//Ao final, o programa deve exibir o conteúdo dos vetores a e b.
    setlocale(LC_ALL, "Portuguese");
    float a[5], b[5];
    int i;
    
    for(i = 0; i < 5; i++){
        printf("Informe o %.1dº número: ", i+1);
        scanf("%f", &a[i]);
    }
    
    for(i = 0; i < 5; i++){
        if(a[i] == 0) {
            b[i] = a[i];
            printf("\nO valor de a[%.1d] = %.1f e o de b[%.1d] = %.1f\n\n", i+1, a[i], i+1, b[i]);
        }
        else if(a[i] % 2 == 0){
            b[i] = a[i] * 5;
            printf("\nO valor de a[%.1d] = %.1f e o de b[%.1d] = %.1f\n\n", i+1, a[i], i+1, b[i]);
        }
        else if(a[i] % 2 != 0){
            b[i] = a[i] + 5;
            printf("\nO valor de a[%.1d] = %.1f e o de b[%.1d] = %.1f\n\n", i+1, a[i], i+1, b[i]);
        }
        //caso o número seja negativo.
        else if(a[i] < 0){
            printf("ERRO");
        }
    }
    return 0;
}
