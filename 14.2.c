#include <stdio.h>
struct data
{
    float r;
    float ht;
    float lt;
    float at;
};
int main()
{
    struct data a[12];
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        printf("Enter the data thang thu %d", i + 1);
        scanf("%lf %lf %lf %lf", &a[i].r, &a[i].ht, &a[i].lt, &a[i].at);
    }
    float max = a[0].ht, min = a[0].lt;
    for (int i = 0; i < 12; i++)
    {
        if (max < a[i].ht)
            max = a[i].ht;
        if (min > a[i].lt)
            min = a[i].lt;
        sum = sum + a[i].r;
    }
    float arf = (float)sum / 12.0;
    printf("The total rain fall of the year is %lf ", sum);
    printf("Luong mua trung binh la %lf ", arf);
    printf("The highest temperature of the year")
}