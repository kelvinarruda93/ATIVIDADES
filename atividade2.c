#include <stdio.h>


/*
@kelvinarrudaa
Data:13/09/19

*/


int main(){

int numerodaconta;
int saldo;
int debito;
int credito;
int saldoatual;

printf("Diga-me o numero da conta' ");
scanf("%i", &numerodaconta);

printf("Diga-me seu saldo' ");
scanf("%i", &saldo);

printf("Diga-me o valor do debito' ");
scanf("%i", &debito);

printf("Diga-me o valor do credito' ");
scanf("%i", &credito);

saldoatual = (saldo - debito + credito);


if(saldoatual >= 0 ){

    printf("Saldo positivo!");
}
else{
    printf("Saldo negativo!");
}


}
