#include <stdio.h>
int main()
{
    int ll, ul, i, j, sum = 0;
    printf("Enter the lower limit and upper limit: ");
    scanf("%d%d", &ll, &ul);
    for (i = ll; i <= ul; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                sum = sum + j;
            else
                sum = sum + 0;
        }
        if (sum == i)
        {
            printf("\n %d is a perfect number", i);
            sum = 0;
        }
        else
            sum = 0;
    }
}