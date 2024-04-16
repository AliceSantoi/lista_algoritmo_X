#include<stdio.h>

/*1.Crie um programa que solicita e armazena nove valores inteiros em uma matriz 3 x 3. Em seguida, exiba os elementos da matriz na ordem inversa.*/

int main()
{
    int A[3][3],l,c,x = 1;
    
    
    for(l = 0;l < 3;l++){
        for(c = 0;c < 3;c++){
           printf("Insira o %i° valor: ",x++);
           scanf("%i",&A[l][c]);
        }
    }
   printf("\n");
   printf("Matriz inversa:\n");
   
   for(l = 2;l >= 0;l--){
        for(c = 2;c >= 0;c--){
           printf("%i ",A[l][c]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}