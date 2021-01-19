#include <stdio.h>
#include <string.h>
void func(char s[], char a, char b)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == a)
        {
            s[i] = b;
        }
    }
}

int main()
{
    char a[1000];
    char x;
    char y;
    printf("Enter a string and 2 characters ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a)-1] = '\0';
    scanf("%c %c", &x, &y);
    printf("Before replacing: %s\n", a);
    func(a, x, y);
    printf("After replacing: %s\n", a);
}