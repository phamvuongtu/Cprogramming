#include <stdio.h>
void swap3(int *p, int *q, int *r){
int tmp;
tmp= *p; *p=*q; *q=*r; *r=tmp;
}
void main(void)
{
int a, b, c;
printf("Enter a, b, c:");
scanf("%d%d%d", &a, &b, &c);
printf("Value before swap. a=%d, b=%d, c=%d\n", a,
b, c);
swap3(&a,&b,&c);
printf("Value after swap. a=%d, b=%d, c=%d\n", a,
b, c);
}
