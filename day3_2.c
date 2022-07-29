#include <stdio.h>

int main()
{
    int x = 61, n = 0;
    while(x != 0)
    {
        n += x%2;
        x = x/2;
        n = n * 10;
    }
    while(n != 0)
    {
        printf("%d", n%10);
        n = n/10;
    }
    return 0;
}