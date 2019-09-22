#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19

*/


int main(){

int h1;
int h2;
int m1;
int m2;
int auxmn;
int auxmv;
int auxhv;
int auxhn;

printf("Valor h1' ");
scanf("%i", &h1);

printf("Valor h2' ");
scanf("%i", &h2);

printf("Valor m1' ");
scanf("%i", &m1);

printf("Valor m2' ");
scanf("%i", &m2);

if( m1 < m2){
    auxmn = m1;
    auxmv = m2;
}
else{
    auxmv = m1;
    auxmn = m2;
}

if( h1 < h2){

    auxhn = h1;
    auxhv = h2;
}
else{
    auxhv = h1;
    auxhn = h2;
}

printf("Homem mais velho com mulher nova = %i \n", auxhv + auxmn);
printf("Homem mais novo com mulher mais velha = %i", auxhn * auxmv);



}
