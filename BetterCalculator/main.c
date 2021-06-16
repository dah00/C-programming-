#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1, number2;
    char op;
    printf("Enter the first number: ");
    scanf("%lf", &number1);
    printf("Enter the second number: ");
    scanf("%lf", &number2);
    printf("Enter the operator: ");
    scanf(" %c", &op);

    if(op == '-')
        printf("%f", number1-number2);
    else if(op == '+')
        printf("%f", number1+number2);
    else if(op == '/')
        printf("%f", number1/number2);
    else if(op == '*')
        printf("%f", number1*number2);
    else
        printf("Invalid operator");

    return 0;
}
