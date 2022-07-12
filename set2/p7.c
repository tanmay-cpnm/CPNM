#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Enter three numbers: \n");
    scanf("%f %f %f", &a, &b, &c);

    float avg = (a + b + c) / 3;
    printf("Average of the three numbers: %0.3f\n", avg);

    if (a < avg)
    {
        printf("%0.3f is below average.\n", a);
    }
    else if (a > avg)
    {
        printf("%0.3f is above average.\n", a);
    }

    if (b < avg)
    {
        printf("%0.3f is below average.\n", b);
    }
    else if (b > avg)
    {
        printf("%0.3f is above average.\n", b);
    }

    if (c < avg)
    {
        printf("%0.3f is below average.\n", c);
    }
    else if (c > avg)
    {
        printf("%0.3f is above average.\n", c);
    }

    return 0;
}