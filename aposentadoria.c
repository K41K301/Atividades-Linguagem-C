/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int temps1, idade;
 printf("Declare o tempo trabalhado: ");
 scanf("%i",&temps1);
 
 printf("Declare sua idade: ");
 scanf("%i",&idade);
 
 if(idade >= 65 || temps1 >= 30 ){
     printf("Pode se aposentar!");
 }
 else if (idade >= 60 && temps1 >= 25  ){
         printf("Pode se aposentar!");
     }
     else {
         printf("Não pode se aposentar!");
         
     }
 
}
