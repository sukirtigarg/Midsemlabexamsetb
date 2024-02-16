#include <stdio.h>
int main()
{
    int n, i, j, k, l;
    int array[100000];
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; i < n - 1; i++)
    {
        for (j = 4; j < n; j++)
        {
            for (k = 2; k < j; k++)
            {
                if (j % k == 0)
                {
                    array[i] = j;
                    printf("%d", array[i]);
                }
                else
                    k++;
            }
        }
    }
}


