#include <stdio.h>
#include <math.h>

int main()
{
    float f;
    printf("Enter the temperature of the city in Fahrenheit degrees:\n");
    scanf("%f", &f);

    float c = ((f - 32) * 5) / 9;
    printf("Temperature of the city in celsius is %0.2f\n", c);

    return 0;
}