#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[3][2] = {
                        {10, 20},
                        {11, 21},
                        {12, 22}
                    };

    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++)
            printf("%d,", nums[i][j]);

    //printf("%d", nums[2][1]);
    return 0;
}
