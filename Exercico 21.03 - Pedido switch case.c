/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo, quantidade, valor;
    
    printf("Digite o codigo do pedido: ");
    scanf("%i", &codigo);
    
    printf("Digite a quantidade de pedidos: ");
    scanf("%i", &quantidade);
    

    switch (codigo){
        
        case 100:
        valor = (quantidade * 120);
        printf("O valor a ser pago é: R$ %i.%02i\n", valor / 100, valor % 100);
        break;
        
        case 101:
        valor = (quantidade * 130);
        printf("O valor a ser pago é: R$ %i.%02i\n", valor / 100, valor % 100);
        break;
        
        case 102:
        valor = (quantidade * 150);
        printf("O valor a ser pago é: R$ %i.%02i\n", valor / 100, valor % 100);
        break;
        
        case 103:
        valor = (quantidade * 120);
        printf("O valor a ser pago é: R$ %i.%02i\n", valor / 100, valor % 100);
        break;
        
        case 104:
        valor = (quantidade * 170);
        printf("O valor a ser pago é: R$ %i.%02i\n", valor / 100, valor % 100);
        break;
        
        case 105:
        valor = (quantidade * 220);
        printf("O valor a ser pago é: R$ %i.%02i\n", valor / 100, valor % 100);
        break;
        
        case 106:
        valor = (quantidade * 100);
        printf("O valor a ser pago é: R$ %i.%02i\n", valor / 100, valor % 100);
        break;
        
        default:{
            printf("Codigo errado");
        }
    }

    return 0;
}

