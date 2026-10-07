#include <stdio.h>
#include <math.h>


int main(void)
{
    
    double x, y, z, d, a, b;

    printf("Enter: x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    d = x * x * y - cbrt(x * x - y * z * z * z);

    if (d == 0)
    {
        printf("Error:a не існує\n");
        return 0;
    }

    a = (x + y - z) / d;

    if (a == 0)
    {
        printf("Error:b не існує\n");
        return 0;
    }

    b = cos((x * y + y * y) / (a * a));

    printf("a = %f\n", a);
    printf("b = %f\n", b);

    return 0;
}