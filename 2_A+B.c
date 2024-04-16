#include<stdio.h>

/*2. Faça um programa que solicita e armazena seis números inteiros em uma matriz 2 x 3, denominada de A, e solicita e armazena seis números inteiros em outra matriz 2 x 3, denominada de B. Em seguida, exiba a soma dessas matrizes.*/

int main()
{
    int A[2][3],B[2][3],C[2][3];
    int l,c,x = 1;
    
    for(l = 0;l < 2;l++){
        for(c = 0;c < 3;c++){
            printf("Insira o %i° valor de A: ",x++);
            scanf("%i",&A[l][c]);
        }
    }
    
    printf("\n");
    
    x = 1;
    for(l = 0;l < 2;l++){
        for(c = 0;c < 3;c++){
            printf("Insira o %i valor de B: ",x++);
            scanf("%i",&B[l][c]);
        }
    }
    
    printf("\n");
    
    for(l = 0;l < 2;l++){
        for(c = 0;c < 3;c++){
            C[l][c] = A[l][c] + B[l][c];
        }
    }
    
    printf("Matriz A + B:\n");
    for(l = 0;l < 2;l++){
        for(c = 0;c < 3;c++){
            printf("%i ",C[l][c]);
        }
        printf("\n");
    }
    
    
    return 0;
}