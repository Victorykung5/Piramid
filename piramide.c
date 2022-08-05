#include <stdio.h>

int main()
{
    int a, b, c = 0;
    printf("How many row? :");
    scanf("%d", &a);

    for (int i = 1; i <= a;i++)
    {
        for (int j = 1; j <= a - i; j++)
        {
            printf(" ");
        }
        while (c != (2 * i) - 1)
        {  //if(c%2==0)
            printf("#");
            //else
            //{printf(" ");}
            ++c;
            }
        printf("\n");
        c=0;
            }

    return 0;
}
