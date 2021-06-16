#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good job");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("very bad");
            break;
        case 'F':
            printf("Failed");
            break;
        default:
            printf("Invalid grade");
    }
    return 0;
}
