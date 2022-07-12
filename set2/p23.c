#include <stdio.h>

int main()
{
    int s;
    printf("Enter time in seconds:\n");
    scanf("%d", &s);

    int hours = s / 3600;
    int r = s % 3600;

    int minutes = r / 60;
    r = r % 60;

    printf("%d seconds is equivalent to %d hours %d minutes %d seconds.\n", s, hours, minutes, r);

    return 0;
}