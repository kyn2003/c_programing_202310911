#include <stdio.h>

int main(void)
{
    double kilo;
    double mile;
    printf("Please enter kilometers: ");
    scanf("%lf", &kilo);
    mile = kilo / (1.609);
    printf("%.1f km is equal to %.1f miles.\n", kilo, mile);
    return 0;
}
