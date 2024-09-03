#include <stdio.h>

int main()
{
    int A = 0, B = 0;

    printf("Enter number for A:");
    scanf("%d", &A);

    printf("Enter number for B:");
    scanf("%d", &B);

    int sum = A - B;

    printf("A = %d, B = %d, sum = %d\n", A, B, sum);

    return 0;
}
