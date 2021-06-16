#include <stdio.h>
#include <stdlib.h>

double cube(double num);

int main()
{
    printf("Answer: %f", cube(3));

    char name[20];
    printf("\nEnter your name: ");
    scanf("%[^\n]s", name);
    sayHi(name);
    printf("\nbottom");
    return 0;
}

double cube(double num){
    double result = num * num * num;
    return result;
}

void sayHi(char name[]){
    printf("Hello %s!", name);
}
