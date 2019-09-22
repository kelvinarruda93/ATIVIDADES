#include <stdio.h>


/*
@kelvinarrudaa
data 13/09/19


*/


int main(){

    int quantidadeatual;
    int quantidademaxima;
    int quantidademinima;
    int quantidademedia;

    printf("Diga-me a quantidadeatual' ");
    scanf("%i", &quantidadeatual);

    printf("Diga-me a quantidademaxima' ");
    scanf("%i", &quantidademaxima);

    printf("Diga-me a quantidademinima' ");
    scanf("%i", &quantidademinima);

    quantidademedia = (quantidademaxima + quantidademinima )/2;


    if(quantidadeatual >= quantidademedia){

    printf("Nao efetuar a compra!");
}
    else{
    printf("Efetuar a compra!");
}


}
