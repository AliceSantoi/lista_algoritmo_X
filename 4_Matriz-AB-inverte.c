#include<stdio.h>
/*4. Elabore programa que solicita e armazena oito números reais em uma matriz 4 × 2, denominada de A. Construa outra matriz, denominada de B, do mesmo tipo e tamanho de A, e com os mesmos elementos armazenados em A, porém de forma invertida. Ou seja, o primeiro elemento de A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo de B e assim por diante. Ao final, o programa deve exibir o conteúdo de A e B.*/


int main()
{
    int A[4][2],B[4][2];
    
    int l,c,x = 1;
    
    printf("Insira os 8 valores:\n");
    for(l = 0;l < 4;l++){
        for(c = 0;c < 2;c++){
            printf("%i: ",x++);
            scanf("%i",&A[l][c]);
        }
        
    }
    //subtraia o último valor dos índice pelas variáveis de inicialização
    for(l = 0;l < 4;l++){
        for(c = 0;c < 2;c++){
            B[3 - l][1 - c] = A[l][c];
        }
    } 
    
   printf("\n"); 
   printf("Matriz A:\n");
    
   for(l = 0;l < 4;l++){
        for(c = 0;c < 2;c++){
            printf("%i  ",A[l][c]);
        }
        printf("\n");
    }
    
   printf("\n"); 
   printf("Matriz B com índice inversos:\n");
    
  for(l = 0;l < 4;l++){
        for(c = 0;c < 2;c++){
            printf("%i  ",B[l][c]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}