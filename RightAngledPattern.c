#include<stdio.h>

int main()
{
   int num = 7;

   for(int i = 1; i<= num; i++)
    {
        for(int j = 1; j<= i; j++)
        {
            printf("X");
        }
        printf("\n");
    }

    return 0;
}