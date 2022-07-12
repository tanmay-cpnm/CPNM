#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, r;
    printf("Enter the coordinates of the center of the circle:\n");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle:\n");
    scanf("%d", &r);

    int x1, y1;
    printf("Enter the coordinates of the point:\n");
    scanf("%d %d", &x1, &y1);

    int v = pow((x1 - x), 2) + pow((y1 - y), 2);
    int sr = pow(r, 2);

    if (v > sr)
    {
        printf("The point lie outside the circle.\n");
    }
    else if (v < sr)
    {
        printf("The point lie inside the circle.\n");
    }
    else
    {
        printf("The point lie on the circle.\n");
    }

    return 0;
}