#include <stdio.h>

int main()
{
    char str1[100],str2[100];
    printf("Enter the string to check if it is a palindrome : ");
    scanf("%s", str1);
    strcpy(str2,strrev(str1));
    strrev(str1);
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