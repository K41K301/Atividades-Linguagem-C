/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mes; 
    
   printf ("qual mes: \n");
   scanf("%i", &mes);
   switch (mes)
   {
       case 02:
       printf ("28 dias");
       break;
       
       case 04:
       printf ("30 dias");
       break;
       
       case 06:
       printf ("30 dias");
       break;
       
       case 9:
       printf ("30 dias");
       break;
       
       case 11:
       printf ("30 dias");
       break;
       
       case 01:
       printf ("31 dias");
       break;
       
       case 03:
       printf ("31 dias");
       break;
       
       case 05:
       printf ("31 dias");
       break;
       
       case 07:
       printf ("31 dias");
       break;
       
       case 8:
       printf ("31 dias");
       break;
       
       case 10:
       printf ("31 dias");
       break;
       
       case 12:
       printf ("31 dias");
       break;
       
       default:
       printf("mes invalido");
       break;
   }
   
   
}