#include <stdio.h>


/*
@kelvinarrudaa
data:13/09/19
*/


    int main(){
    char time1[10];
    char time2[20];
    int time1g;
    int time2g;

    printf("Time 1' ");
    scanf("%s", &time1);

    printf("Time 2' ");
    scanf("%s", &time2);

    printf("Quantidade de gol time 1' ");
    scanf("%i", &time1g);

    printf("Quantidade de gol time 2' ");
    scanf("%i", &time2g);

    if(time1g > time2g){
    printf("Time 1 vencedor ( %s )", time1);
}
    else if ( time1g < time2g){
    printf("Time 2 vencedor ( %s )", time2);
}
    else{
    printf("Empate");
}


}

