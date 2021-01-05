#include <stdio.h>

int main()
{
    int a, b, c;
    int *pointer;
    printf("Enter 3 integers:\n");
    scanf("%d%d%d", &a, &b, &c);
    pointer = &a;
    printf("a = %d\n", *pointer);
    pointer = &b;
    printf("b = %d\n", *pointer);
    pointer = &c;
    printf("c = %d\n", *pointer);
}
