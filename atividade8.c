#include <stdio.h>


/*
@kelvinarrudaa
*/


int main(){

int a;
int b;
int c;

printf("Valor 1' ");
scanf("%i", &a);

printf("Valor 2' ");
scanf("%i", &b);

printf("Valor 3' ");
scanf("%i", &c);

if (a < (b+c) && b < (a+c) && c < (a+b) ){
    printf("Forma um triangulo!");
}
else{
    printf("Nao forma um triangulo!");
}

}

