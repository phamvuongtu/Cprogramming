#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    for(int i=1;i<=10;i++){
        printf("Cau hoi %d:\n", i);
    srand((int)time(0));
    int a = rand() % 99 + 1;
    int b = rand() % 99 + 1;
    printf("%d x %d = ", a, b);
    int c;
    scanf("%d", &c);
    if(c==a*b){
        printf("Dung roi");
        }else {
            while(1){
    printf("Sai");
    scanf("%d", &c);
    if(c==a*b) break;
}}}}
