/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int nota;
  printf("Digite a nota: \n");
  scanf("%d", &nota);
  
 if(nota >= 86 && nota <=100)
 {
     printf("A");
 }
 else if(nota >= 61 && nota <= 85){
    printf("B");}
 else if(nota >= 36 && nota <= 60){
    printf("C");}
 else if(nota >= 1 && nota <= 35){
    printf("D");}
 else{
     printf("E");
 }
 
}