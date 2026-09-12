#include <stdio.h>

int main()
{
    float a, b, c, d, e, total, percentage;

    printf("Enter marks of 5 subjects:\n");

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);

    total = a + b + c + d + e;
    percentage = total / 5;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}