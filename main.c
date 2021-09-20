

#include <stdio.h>

int main (){
     
    printf ("=================== QUOCIENTE E RESTO DA DIVISAO ENTRE DOIS INTEIROS =================");
    
    int x, y, quociente, resto;
    
    printf ("\n Digite um numero inteiro: ");
    scanf ("%d", &x);
    
    printf ("\n Digite outro numero inteiro: ");
    scanf ("%d", &y);
    
    quociente = x / y;
    printf ("O quociente da divisao de = %d", quociente);
}