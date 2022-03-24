#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int tam, n=0, z;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    double vetor[tam];
    n=tam;

    for (int i = 0; i < tam; i++){
        printf("Digite o valor da %d posicao: ", i+1);
        scanf("%lf", &vetor[i]);
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            z = vetor[j];
            if (vetor[j]<vetor[j-1]){

                vetor[j]=vetor[j-1];
                vetor[j-1]=z;

            }
        }
    }

    for (int i=0; i<n; i++){

        printf("%.2f\n", vetor[i]);

    }

    return 0;
}
