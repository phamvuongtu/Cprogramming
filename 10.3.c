#include <stdio.h>

int test(int a[100][2], int n){    
    for(int i =0;i<n;i++){
        if(a[i][0]!=a[i][1])
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    printf("nhap so phan tu 2 mang:\n");
    int n;scanf("%d", &n);
    int a[n][2];
    printf("Nhap mang 1:\n");
    for(int i = 0; i<n;i++){
        scanf("%d", &a[i][0]);
    }
    printf("Nhap mang 2:\n");
    for(int i = 0; i<n;i++){
        scanf("%d", &a[i][1]);
    }
    if(test(a,n)==1){
        printf("giong");
    }else printf("khac");
}