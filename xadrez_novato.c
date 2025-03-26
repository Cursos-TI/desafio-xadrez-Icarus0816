#include <stdio.h>

int main(){
int r = 0; // variavel r de rainha
int t = 0; // variavel t de torre
printf("Torre\n");
while (t < 5) // estrutura de repetição para representar a movimentação da torre
{
   
    printf("Direita\n");
    t++;
}
printf("\nBispo\n");
for (int b = 0; b < 5; b++) // estrutura de repetição para representar a movimentação do bispo "b"
{
    
    printf("Cima, Direita\n");
}
printf("\nRainha\n");
do // estrutura de repetição para representar a movimentação da rainha "r"
{
    
   
    printf("Esquerda\n");
    r++;
} while ( r <= 7); // Como o "do" ja roda o codigo pelo menos 1 vez e desejo 8 vezes, a condição é "<=7"
































}