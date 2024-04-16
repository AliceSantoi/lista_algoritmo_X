#include<stdio.h>

/*3. Elabore um programa que solicita e armazena o nome e três notas de cinco alunos em uma matriz 5 x 3. Por fim, o programa deve exibir uma mensagem com o nome e a média aritmética de cada aluno.*/

void linha();

int main()
{
    char nomes[5][20];
    float notas[5][3],medias[5],m;
    int l,c,x = 1;
    
    for(l = 0;l < 5;l++){
        printf("Nome do %i° aluno: ",x++);
        gets(nomes[l]);
    }
    
    linha();
    
    for(l = 0; l < 5;l++){
        printf("Digite as três notas de %s\n",nomes[l]);
        
        m = 0;
        for(c = 0;c < 3;c++){
            printf("%i nota: ",c + 1);
            scanf("%f",&notas[l][c]);
            m += notas[l][c];
        }
        medias[l] = m/3;
        linha();
    }
    
    for(l = 0;l < 5;l++){
        printf("%i,%s essa é sua média: %.1f\n",l + 1,nomes[l],medias[l]);
    }
    
    
    
    
    
    return 0;
}

void linha(){
    printf("\n");
}