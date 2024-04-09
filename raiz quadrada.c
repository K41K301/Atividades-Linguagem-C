/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{   
    float n1, raiz;
    printf("Digite seu numero\n");
    scanf("%f", &n1);
     raiz = sqrt(n1);
    
    printf("a raiz quadradada do numero %.2f é %.2f", n1, raiz);
}