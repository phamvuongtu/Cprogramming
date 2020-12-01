#include <stdio.h>
#include <math.h>
int main (){
int h,i,j;
printf("Enter the number of rows ");
	scanf("%d", &h);
	for (i=1; i<=h; i++){
	for (j=1; j<=i; j++)
		printf("*");
	printf("\n");
	}
return 0;
}
