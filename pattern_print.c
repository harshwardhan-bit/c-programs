#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i+1;i++)
        {
            printf(i++);

        }
        printf("\n");
    }
    return 0;
}

