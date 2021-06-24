#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int a;
    printf("Insert an integer less than 10: ");
    scanf("%d", &a);
    assert(a<=10);
    printf("You entered %d", a);
    return 0;
}
