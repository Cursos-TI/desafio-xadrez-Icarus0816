#include <stdio.h>

cavalo(int i){          /*Funçaõ que represanta a  movimentação do cavalo*/
    printf("Cavalo\n");
for (int i = 0; i < 1; i++)     /*loop aninhado para representar a movimentação (cima, cima, direira)*/
{
    for (int i = 0; i <= 2; i++)
    {
        printf("Cima\n");
    }
    printf("Direita\n");
}
}
bispo(int i){       /*função representa a movimentação do bispo*/
    printf("\n");
    printf("Bispo\n");
    for (i = 0; i < 5; i++) /*loop n2 para mostrar a movimentação (esquerda e cima 5 vezes)*/
    {
        printf("Esquerda\n");
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n");
        }
        
    }
}
rainha(int i){
printf("\n");
printf("Rainha\n"); /*movimentação da rainha (esquerda x7)*/
while (i < 8)
{
    printf("Direita\n");
    i++;
}


}
int main(){
int numero = 1;
    cavalo(numero);     /*chama as funções ultilizadno a variavel "numero"*/
    bispo(numero);
    rainha(numero);
}