#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1+num2); */

    char color[20];
    char pluralNound[20];
    char celebrity[20];

    printf("Enter the color: ");
    scanf("%s", color);
    printf("Enter the plural noun: ");
    scanf("%s", pluralNound);
    fgetc(stdin);
    printf("Enter the celebrity: ");
    fgets(celebrity, 20 , stdin);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNound);
    printf("I love %s\n", celebrity);

    return 0;
}
