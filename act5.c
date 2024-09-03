#include <stdio.h>

int main()
{
    int number = 0;
    int a = 0, b = 0, c = 0, d = 0;
    int sum;
    int difference;
    int product;
    double quotient;

    printf("Enter values for number from 1-5: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("Enter number for a:");
        scanf("%d", &a);

        printf("Enter number for b:");
        scanf("%d", &b);

        sum = a + b;

        printf("a = %d, b = %d, a, b\n", a, b, sum);
    }
    else if (number == 2)
    {
        printf("Enter number for a:");
        scanf("%d", &a);

        printf("Enter number for b:");
        scanf("%d", &b);

        printf("Enter number for c:");
        scanf("%d", &c);

        difference = a - b - c;

        printf("a = %d, b = %d, c = %d, a, b, c\n", a, b, c, difference);
    }
    else if (number == 3)
    {
        printf("Enter number for a:");
        scanf("%d", &a);

        printf("Enter number for b:");
        scanf("%d", &b);

        printf("Enter number for c:");
        scanf("%d", &c);

        printf("Enter number for d:");
        scanf("%d", &d);

        product = a * b * c * d;

        printf("a = %d, b = %d, c = %d, d = %d, a, b, c, d\n", a, b, c, product);
    }
    else if (number == 4)
    {
        printf("Enter number for a:");
        scanf("%lf", &a);

        printf("Enter number for b:");
        scanf("%lf", &b);

        if (b == 0)

            printf("b cannot be 0\n");

        quotient = a / b;

        printf("a = %.2lf, b = %.2lf, quotient = %.2lf\n", a, b, quotient);
    }
    else if (number == 5)
    {
        printf("Goodbye.");
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}