#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    int pop;
    int endpop;
    int year = 0;
    do{
        pop = get_int("qual é o tamanho inicial da sua população?\n");

    }while(pop<9);

     do{
        endpop = get_int("qual é o tamanho final da sua população?\n");

    }while(endpop<=9);

    while (  pop<endpop) {
        pop = pop+(pop/3)-(pop/4);
        year++;
    }
printf("years:%i\n",year);

}
