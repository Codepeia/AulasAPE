#include <stdio.h>

main(){
    int n = 5, contador = 0, res;
    
   /* while(n <= 10){
        if(n < 5){
            printf("\n%d",n);
        }
        n++;
    }*/

    while(contador <= 100){
        res = n * contador;
        printf("\n%d * %d = %d ",n,contador,res);
        contador++;
    }




    //encerra a execucao do bloco de repeticao


}