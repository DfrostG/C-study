#include <stdio.h>

int main()
{
    int number;
    printf("Please inpt your number : ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("%d is a positive number", number);
    }
    else if (number < 0)
    {
        printf("%d is a negative number", number);
    }
    else
    {
        printf("This number is equal to 0", number);
    }
    return 0;
}   