#include<stdio.h>

main(){

    char nomes[3][20];
    float notas[3][3], soma, media;

    for(int i = 0; i < 3; i++ ){
        printf("Digite o nome dos alunos ");
        fgets(nomes[i], 20,stdin);
    }

    for(int i = 0; i < 3; i++){
        soma = 0;
       for(int j = 0; j < 3; j++ ){
          printf("Digite as notas: ");
          scanf("%f",&notas[i][j]);
          soma += notas[i][j];
       }
       media = soma/3;
       printf("Aluno: %s", nomes[i]);
       printf("Media: %f", media);
       printf("\n");
    }

}