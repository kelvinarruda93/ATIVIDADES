#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19
*/


int main(){

int n1,n2,n3;

printf("Valor 1' ");
scanf("%i", &n1);

printf("Valor 2' ");
scanf("%i", &n2);

printf("Valor 3' ");
scanf("%i", &n3);

if(n1 > n2 && n1 > n3){

    printf("%i e maior!", n1);
}

else if (n2 > n1 && n2 > n3){
    printf("%i e maior!", n2);
}

else{
    printf("%i e maior!", n3);
}




}
