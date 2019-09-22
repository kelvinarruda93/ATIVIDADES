#include <stdio.h>


/*
@kelvinarrudaa
*/


int main(){

int soma, media, i,qtd;

for(i = 10 ; i <= 100 ; i+= 2){

soma+=i;
qtd++;
}
media = soma/qtd;
printf("%i", media);
}
