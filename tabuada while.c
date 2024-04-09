/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool controle = false;
    int numero;
    
    while(controle == false)
    {
        printf("Digite um numero entre 1 e 10:");
        scanf("%i", &numero);
        
        if (numero >= 1 && numero <= 10)
        {
            int contador;
            while(contador <= 10)
            {
                printf("%i X %i = %i \n", numero, contador, numero * contador);
                contador++;
            }
            break;
            
        }
        else
        {
            printf("Numero invalido");
            controle = true;
        }
    }
}