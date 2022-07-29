#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Please input 3 sides of this triangle : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1)
    {
        printf("All sides can combine into a triangle.");
    }
    else
    {
        printf("All sides cannot combine into a triangle.");
    }
    return 0;
}