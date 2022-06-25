#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{

 float reais;
 do{
    reais = get_float("Qual é o valor?\n");
 }
 while(reais<=0);

int centavos = round (reais * 100);
int coin = 0;

while (centavos>=25)
{
    centavos -=25;
    coin++;
}

while (centavos>=10)
{
    centavos -=10;
    coin++;
}

while (centavos>=5)
{
    centavos -=5;
    coin++;
}

while (centavos>=1)
{
    centavos -=1;
    coin++;
}
printf("Você precisará %i de", coin);


}