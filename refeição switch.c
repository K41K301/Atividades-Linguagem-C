/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int cod, quant;
   float total;
   
   printf("Digite o codigo da refeição: ");
   scanf("%d", &cod);
   printf("Digite a quantidade da refeição: ");
   scanf("%d", &quant);
   
   switch(cod)
   {
       case 100:
       total = quant * 1.20;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 101:
       total = quant * 1.30;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 102:
       total = quant * 1.50;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 103:
       total = quant * 1.20;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 104:
       total = quant * 1.70;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 105:
       total = quant * 2.20;
       printf("Total a pagar: %.2f", total);
       break;
       
       case 106:
       total = quant * 1.00;
       printf("Total a pagar: %.2f", total);
       break;
       
       default:
       printf("Codigo invalido");
       break;
   }
}