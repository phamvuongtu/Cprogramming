#include <stdio.h>
#include <string.h>

void checkname(char a[])
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
        {
            a[i] = '\0';
        }
    }
}
int main()
{
    char a[1000];
    
    printf("Enter your first name & last name ");
    fgets(a, sizeof(a), stdin);
    checkname(a);
    printf("Your first name: %s\n", a);
}