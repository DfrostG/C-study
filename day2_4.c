#include <stdio.h>

int main()
{
    int a, b, c;
    int l1, l2, max;
    printf("Please input 3 sides of this triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
    {
        if(a >= b && a >= c)
        {
            max = a;
            l1 = c;
            l2 = b;
        }
        else if(b >= a && b >= c)
        {
            max = b;
            l1 = a;
            l2 = c;
        }
        else
        {
            max = c;
            l1 = a;
            l2 = b;
        }
        if(l1 == l2 && l1 == max)
        {
            printf("This is an equilateral triangle.");
        }
        else if((l1 == l2 && l1 != max) || (l1 == max && l1 != l2) || (l2 == max && l2 != l1))
        {
            printf("This is an isosceles triangle.");
        }
        else if(l1*l1 + l2*l2 == max*max)
        {
            printf("This is a right triangle.");
        }
        else
        {
            printf("This is a scalene triangle.");
        }
    }
    else
    {
        printf("All sides cannot combine into a triangle.");
    }
    return 0;
}