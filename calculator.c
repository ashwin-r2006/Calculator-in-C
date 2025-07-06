#include <stdio.h>
#include <windows.h>
int main(){
    char op;
    printf("This is a simple calculator for:\nAddition +\nSubtraction -\nMultiplication x\n division /\n");
    printf("Enter operation you want to do: ");
    scanf("%c",&op);
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if (op=='+'){
        printf("sum is: %d",num1+num2);
    }
    else if(op=='-'){
        printf("difference is: %d",num2-num1);
    }
    else if(op=='x'){
        printf("product is: %d",num1*num2);
    }
    else if(op=='/'){
        printf("quotient is: %d",num2/num1);
    }
    Sleep(5000);
    return 0;
}