#include <stdio.h>

main(){
    int n1 = 2, n2, soma, opcao, res, contador = 0;

   /* do{
        printf("Digite dois numeros");
        scanf("%d %d", &n1, &n2);

        soma = n1 + n2;

        printf("\nSoma: %d", soma);

        printf("\nDeseja fazer uma nova soma? 1- Sim, 0-Nao");
        scanf("%d", &opcao);
    }while(opcao != 0);*/


    do{
        res = n1 * contador;
        printf("\n%d * %d = %d ",n1,contador,res);
        contador++;
    }while(contador <= 10);

}