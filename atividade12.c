#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19
*/


    int main(){
    char nome[] = " ";
    int quantidadeadquirida;
    int preco;
    int total;
    int totalapagar;

    printf("Diga o nome: ");
    scanf("%s", &nome);

    printf("Qtd adquirida' ");
    scanf("%i", &quantidadeadquirida);

    printf("preco unitario' ");
    scanf("%i", &preco);

    total = quantidadeadquirida * preco;

    if(quantidadeadquirida <= 5){

    printf("%i", totalapagar = total - 0.98);
}

    else if( quantidadeadquirida > 5 && quantidadeadquirida <= 10){

    printf("%i",totalapagar = total - 0.97);
}
    else{
    printf("%i",totalapagar = total - 0.95);
}




}
