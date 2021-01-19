#include <stdio.h>
#include <string.h>

int kiemtraso(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int kiemtrakitu(char a)
{
    if (a >= 'a' && a <= 'z')
        return 1;
    if (a >= 'A' && a <= 'Z')
        return 1;
    return 0;
}

int kiemtramaso(char s[])
{
    for (int i = 0; i < 3; i++)
    {
        if (!kiemtrakitu(s[i]))
        {
            return 0;
        }
    }
    for (int i = 3; i < 7; i++)
    {
        if (!kiemtraso(s[i]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char s[7];
    printf("Enter customer number ");
    scanf("%s", s);
    if (kiemtramaso(s))
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }
}