#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    strcpy( student1.name, "Obed");
    strcpy( student1.major, "Computer science");

    printf("%s", student1.major);
    return 0;
}
