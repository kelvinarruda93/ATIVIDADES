#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19
*/


int main(){

int n1;
int n2;
int n3;
int media;
int mediaexer;

printf("n1' ");
scanf("%i", &n1);

printf("n2' ");
scanf("%i", &n2);

printf("n3' ");
scanf("%i", &n3);

printf("mediaExer' ");
scanf("%i", &mediaexer);

media = ((n1+n2*2+n3*3) + mediaexer)/7;

if(media >= 9){
    printf("A");
}

else if(media >= 7.5 && media <9){
    printf("B");
}
else if(media >= 6 && media < 7.5){
    printf("C");
}

else if (media < 6){
    printf("D");
}



}
