#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19

*/


int main(){

int n1;
int n2;

printf("n1' ");
scanf("%i", &n1);

printf("n2' ");
scanf("%i", &n2);

while(n2 == 0){
printf("n2' ");
scanf("%i", &n2);
}

printf("Divisao: %i", n1/n2);

}
