#include <stdio.h>

void woohoo(char *name, int age);
int main()
{
    woohoo("Dragon", -19);
    
    woohoo("Boss", 19);
    

    return 0;
}
void woohoo(char *name, int age)
{
    if (age < 0)
    {
        return;
    }
    
    printf("My name is %s\n", name);
    printf("I am %d\n", age);

}