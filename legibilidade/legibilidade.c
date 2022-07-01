#include <stdio.h>
#include <cc50.h>
int
main(int argc, char *argv[])
{
// pergunta um número ao usuário
printf("Quantas garrafas de cerveja? ");
int n = GetInt();
// para se input for inválido
if (n < 1)
{
    printf("Desculpe, isso não faz sentido.\n");
    return 1;
}

// canta a música chata
printf("\n");
for (int i = n; i > 0; i--)
{
    printf("%d garrafa(s) de cerveja no muro,\n", i);
    printf("%d garrafa(s) de cerveja,\n", i);
    printf("Bebo uma, jogo no lixo\n");
    printf("%d garrafa(s) no muro.\n\n", i - 1);
}

// sair quando a música terminar
printf("Nossa isso foi chato.\n");
return 0;

}Responder
  LuccaPintoDez '21ta ai o meu exercício de Legibilidade:

#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
int letras = 0;
int palavras = 1;
int frases = 0;
float resultado;
string s = get_string("Insira seu texto: ");

//cria um loop verificando todos caracteres do texto
for (int i = 0, n = strlen(s); i < n; i++)
{
    //verifica se o caractere é alguma letra maiuscula ou minuscula
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
        letras++;
    }
    //verifica se o caractere é um espaço (o que significa que acabou uma palavra)
    else if (s[i] == ' ')
    {
        palavras++;
    }
    //verifica se o caractere é algum tipo de pontuação, para contar as frases
    else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
    {
        frases++;
    }
}
//Calcula a quantidade de letras e frases para cada 100 palavras
float letrasm = ((float) letras / palavras) * 100;
float frasesm = ((float) frases / palavras) * 100;
//Coleman
resultado = ((0.0588 * letrasm) - (0.296 * frasesm) - 15.8);

int a = (int) round(resultado);

if (a < 0)
{
    printf("Before Grade 1\n"); 
}
else if (a > 16)
{
    printf("Grade 16+\n");
}
else
{
    printf("Grade %.i\n", a);
}