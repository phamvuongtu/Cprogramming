#include <stdio.h>

struct date
{
    int d;
    int m;
    int y;
};
int checkDate(int d, int m, int y) // int checkDate(struct date x)
{
    if (1000 < y && y < 9999 && 0 < m && m < 13)
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if (0 < d && d <= 31)
            {
                printf("Valid day");
            }
            else
            {
                printf("Invalid day");
            }
        }
        else
        {
            if (0 < d && d <= 30)
            {
                printf("Valid day");
            }
            else
            {
                printf("Invalid day");
            }
        }
    }
    else
        printf("INvalid");
}

int checkyear(int year)
{
    // Nếu số năm chia hết cho 400,
    // đó là 1 năm nhuận
    if (year % 400 == 0)
        return 1;

    // Nếu số năm chia hết cho 4 và không chia hết cho 100,
    // đó không là 1 năm nhuận
    if (year % 4 == 0 && year % 100 != 0)
        return 1;

    // trường hợp còn lại
    // không phải năm nhuận
    return 0;
}

int check(int d, int m, int y)
{
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (d < 1 || d > 31)
            return 0;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        if (d < 1 || d > 30)
            return 0;
        break;

    default:
        if (checkyear(y))
        {
            if (d < 1 || d > 29)
                return 0;
        }
        else
        {
            if (d < 1 || d > 28)
                return 0;
        }
        break;
    }
    return 1;
}
int Datecmp(struct date a, struct date b)
{
    if (a.y > b.y)
        return 1;
    if (a.y < b.y)
        return -1;
    if (a.m > b.m)
        return 1;
    if (a.m < b.m)
        return -1;
    if (a.d > b.d)
        return 1;
    if (a.d < b.d)
        return -1;
    return 0;
}

int main()
{
    struct date a, b;
    printf("Enter the first date ");
    
    scanf("%d%d%d", &a.d, &a.m, &a.y);
    printf("Enter the second date ");
    scanf("%d%d%d", &b.d, &b.m, &b.y);
    if (check(a.d, a.m, a.y) && check(b.d, b.m, b.y))
    {
        printf("Valid date\n");
    }
    else
    {
        printf("Invalid\n");
        return -1;
    }
    switch (Datecmp(a, b))
    {
    case 1:
    printf("Ngay 1 sau ngay 2\n");
        break;
    case -1:
    printf("Ngay 1 truoc ngay 2\n");
    break;
    default:
    printf("Hai ngay nhu nhau\n");
        break;
    }
}
