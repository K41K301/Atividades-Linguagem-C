/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char vogal; 
    
   printf ("digite uma letra: \n");
   scanf("%c", &vogal);
   switch (vogal)
   {
       case 'a':
       printf ("é vogal");
       break;
       
       case 'e':
       printf ("é vogal");
       break;
       
       case 'i':
       printf ("é vogal");
       break;
       
       case 'o':
       printf ("é vogal");
       break;
       
       case 'u':
       printf ("é vogal");
       break;
       
       default:
       printf("é uma consoante");
       break;
   }
   
   
}