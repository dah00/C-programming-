#include <stdio.h>
#include <stdlib.h>

int main()
{
//    printf("%f", 5+4.5);
//    printf("\n%d", pow(4,3));

    //Getting user input
    /*double gpa;
    printf("Enter your age: ");
    scanf("%lf", &gpa);

    printf("Your age is %f", gpa);*/

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);    // 20 is the number of character the user can enter
    printf("Your name is %s", name);
    return 0;
}
