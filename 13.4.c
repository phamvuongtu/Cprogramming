#include <stdio.h>

void strcpy(char target[], char source[])
{
    int i = 0;
    while (1)
    {
        target[i] = source[i];
        if (source[i] == '\0')
        {
            break;
        }
        i++;
    }
}

int strlen(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    printf("Nhap chuoi ");
    char a[100];
    char b[100];
    fgets(a, sizeof(a), stdin);a[strlen(a)-1] = '\0';
    fgets(b, sizeof(b), stdin);b[strlen(b)-1] = '\0';
    printf("Before copy: Chuoi 1: %s\nChuoi 2: %s\n", a, b);
    strcpy(a, b);
    printf("After copy: Chuoi 1: %s\nChuoi 2: %s\n", a, b);
}