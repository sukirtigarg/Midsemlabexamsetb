#include <stdio.h>
int main()
{
    int x, y, r, x1, y1, a, b, c;
    printf("Enter the coordinates of the circle and its radius: ");
    scanf("%d%d%d", &x, &y, &r);
    printf("\nEnter the coordinates of the point: ");
    scanf("%d%d", &x1, &y1);
    a = (x1 - x) * (x1 - x);
    b = (y1 - y) * (y1 - y);
    c = r * r;
    if (a + b == c)
        printf("The point lies on the circle");
    else if (a + b < c)
        printf("The point lies inside the circle");
    else 
        printf("The point lies outside the circle");
}