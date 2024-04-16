#include<stdio.h>

/*5.Crie um programa que solicita e armazena n × m números inteiros em uma matriz n × m, denominada de A, onde n e m também devem ser fornecidos pelo usuário. 
Construa outra matriz, denominada de B, do mesmo tipo e tamanho de A, onde cada elemento de B deve ser definido pela multiplicação do elemento correspondente de A por 3*/

void linha();

int main()
{
    
    int l,c,x,y,s,t = 1;
    
    printf("valor de linhas: ");
    scanf("%i",&l);
    
    printf("valor de colunas: ");
    scanf("%i",&c);
    
        linha();
    
    int a[l][c];
    printf("Insira os números da matriz:\n");
    for(x = 0;x < l;x++){
        for(y = 0;y < c;y++){
            printf("%i° número: ",t++);
            scanf("%i",&a[x][y]);
        }
    }
   
       linha();
   
   int b[x][y];
   for(x = 0;x < l;x++){
        for(y = 0;y < c;y++){
           b[x][y] = a[x][y] * 3;
        }
    }
    
    //exibição de matrizes A e B.
    //matriz A.
    printf("Matriz A:\n");
    for(x = 0;x < l;x++){
        for(y = 0;y < c;y++){
            printf("%i ",a[x][y]);
        }
        linha();
    }
    
        linha();
    
    //matriz B.
    printf("Matriz B:\n");
    for(x = 0;x < l;x++){
        for(y = 0;y < c;y++){
            printf("%i ",b[x][y]);
        }
        linha();
    }
    
    return 0;
}

void linha(){
    printf("\n");
}