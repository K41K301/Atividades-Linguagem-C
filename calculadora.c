/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2; 
    char operacao;
   
   printf ("escolha uma operação +  -  *  /  ");
   scanf ("%c", &operacao); 
   
   printf ("digite um numero: \n");
   scanf ("%d", &num1);
   
   printf ("digite outro numero: \n");
   scanf ("%d", &num2);
   
   
   
   switch (operacao)
   {
       case '+':
       printf ("resultado: %d",(num1 + num2));
       break;
       
       case '-':
       printf ("resultado: %d",(num1 - num2));
       break;
       
       case '*':
       printf ("resultado: %d",(num1 * num2));
       break;
       
       case '/':
       printf ("resultado: %d",(num1 / num2));
       break;
       
       
       default:
       printf("operação invalida");
       break;
   }
   
   
}