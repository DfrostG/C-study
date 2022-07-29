#include <stdio.h>

int main()
{
    int sum=0;
    for(int i=66; i<= 5648; i+=2)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}