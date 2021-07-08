#include <stdio.h>
#include <stdlib.h>

int main()
{
//    char characterName[]  = "John";
//    int characterAge = 35;
//    printf("Hello world! %s", characterName);x`xx
//    printf("\nhe was %d", characterAge) ;

/*    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s%*c", s);
    scanf("%[^\n]s", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);*/

    char name[20];
    printf("My favorite %s is %f %s", "number", 500.0, "dollar");
    printf("Enter your full name: ");
    scanf("%[^\n]s%*c", name);
    printf("your name is %s", name);
    return 0;
}
