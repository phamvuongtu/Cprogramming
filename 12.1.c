#include<stdio.h>
int countEven (int * a, int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (*(a + i)%2==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    printf("Enter the size of the array? ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("So cac so chan trong mang la %d\n", countEven(a, n));
}
