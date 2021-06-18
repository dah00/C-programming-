#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age =10;
    int *pAge = &age;

    double gpa = 3.4;
    double *pGpa = &gpa;

    printf("age: %p\ngpa: %p", pAge, pGpa);

    // Dereferencing a pointer
    printf("\n%f", *pGpa);
    return 0;

}
