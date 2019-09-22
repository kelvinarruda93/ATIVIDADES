#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19
*/


int main(){

int valor;

printf("Diga o valor' ");
scanf("%i", &valor);

if(valor > 0){
    printf("Positivo!");
}
else if( valor < 0){
    printf("Negativo!");
}
else{
    printf("Zero!");
}

}
