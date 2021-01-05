#include<stdio.h>
int main(){
int n;
printf("Nhap so phan tu ");
scanf("%d", &n);
int sum = 0;
int a[n];
for (int i = 0; i < n; i ++ ){
    scanf("%d", &a[i]); 
    if (a[i-1] < a[i] && a[i] > a[i+1]){
        sum = sum + a[i];
    }
} printf("Sum la %d\n", sum);
return 0;
}