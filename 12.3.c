#include <stdio.h>
void main(void)
{
int x = 25, y = 50, z = 75;
int *ptr;
printf("Here are the values of x, y, and z:\n");
printf("%d %d %d\n", x, y, z);
ptr = &x; // Store the address of x in ptr
*ptr += 100; // Add 100 to the value in x
ptr = &y; // Store the address of y in ptr
*ptr += 100; // Add 100 to the value in yx
ptr = &z; // Store the address of z in ptr
*ptr += 100; // Add 100 to the value in z
printf("Once again, here are the values of x, y,
and z:\n");
printf("%d %d %d\n", x, y, z);
}
