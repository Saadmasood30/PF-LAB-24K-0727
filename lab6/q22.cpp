#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter your number\n");
    scanf("%d", &num);
    if (num > 0)
    {
        while (i <= num)
        {
            if (i % 2 == 0)
            {
                printf("%d is an even number\n", i);
            }
            i++;
        }
    }
    else
        printf("thats it");
        return 0;
}
