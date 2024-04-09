/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdbool.h>

int main()
{
    int idade;
    int maior;
    int numerador = 1;
    
    while(numerador <= 5)
    {
        printf("Digite sua idade: \n");
        scanf("%i", &idade);
        numerador ++;
        
       
        if( idade >= 18)
        {
            maior++;
        }
    }
    printf(" %d são maiores de idade", maior);
    
}