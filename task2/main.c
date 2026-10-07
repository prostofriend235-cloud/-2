#include <stdio.h>

int day_of_week(int year, int month, int day)
{
    int m, Y, y, cc, w;

    if (month >= 3)
    {
        m = month - 2;
        Y = year;
    }
    else
    {
        m = month + 10;
        Y = year - 1;
    }

    y = Y % 100;
    cc = Y / 100;

    w = (26 * m - 2) / 10 + day + y + y / 4 + cc / 4 - 2 * cc;

    w = w % 7;
    if (w < 0)
    {
        w = w + 7;
    }
    return w;
}

int main(void)
{
    int c, year, month, count;

    printf("Enter century number c: ");
    scanf("%d", &c);

    count = 0;

    for (year = (c - 1) * 100 + 1; year <= c * 100; year++)
    {
        for (month = 1; month <= 12; month++)
        {
            if (day_of_week(year, month, 13) == 5)
            {
                count++;
            }
        }
    }

    printf("Friday the 13th in century %d: %d\n", c, count);

    return 0;
}