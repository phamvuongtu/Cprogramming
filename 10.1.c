#include<stdio.h>
int main(){
    int n;
    int sum = 0;
    int tem;
    printf("Nhap so phan tu ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("Enter number %d ", i + 1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0) {
        sum = sum + a[i];
        } 
    } printf("Tong cac so le la %d\n", sum);
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i]<a[j]) {
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    } printf("So nho nhat la %d\n", a[n-1]);
    int min = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] < min){
            min = a[i];
        }
    } printf("Min la %d\n", min);
    return 0;
}