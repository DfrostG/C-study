#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "HELLO", str2[] = "HELLO";
    printf("input your first string : ");
    scanf("%s", str1);
    printf("input your second string : ");
    scanf("%s", str2);
    int result;
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);
    if (result == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}