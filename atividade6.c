#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19
*/


    int main(){

    int n1;
    int n2;
    int n3;

    printf("Valor 1' ");
    scanf("%i", &n1);

    printf("Valor 2' ");
    scanf("%i", &n2);

    printf("Valor 3' ");
    scanf("%i", &n3);

    if(n1 > n2 & n1 > n3);{

    if( n2 > n3){
        printf("Soma dos maiores: %i", n1+n2);
    }
        else{
        printf("Soma dos maiores: %i", n1+n3);
        }
}

    if(n2 > n1 & n2 > n3){

    if( n1 > n2 & n3){
        printf("Soma dos maiores' %i", n2+n1);
    }
        else{
        printf("Soma dos maiores' %i", n2+n3);
        }
}

    if(n3 > n2 & n3 > n1){

    if( n2 > n1){
        printf("Soma dos maiores' %i", n3+n2);
    }
        else{
        printf("Soma dos maiores' %i", n3+n1);
        }

}
