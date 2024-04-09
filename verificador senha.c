/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool senhaConf = false;
    int senhaPass, inputSenha;
    
    while (senhaConf == false)
    {
        printf("Digite a senha padrao \n");
        scanf("%i", &senhaPass );
        printf("Digite sua senha:\n");
        scanf("%i", &inputSenha);
        
        if(senhaPass == inputSenha)
        {
            printf("Acesso autorizado!\n");
            senhaConf = true;
        }
        
        else 
        {
            printf("Senha Incorreta!\n");
        }
        
       
    }
    
    
}