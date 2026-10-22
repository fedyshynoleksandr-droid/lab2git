#include <stdio.h>

int main()
{
    double a,b,c,d,e,f;
    double D, Dx, Dy;
    double x, y;

    printf("Input a,b,c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Input d,e,f: ");
    scanf("%lf %lf %lf", &d, &e, &f);

    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;

    if (D != 0)
{
    x = Dx / D;
    y = Dy / D;

    printf("x = %.2lf\n", x);
    printf("y = %.2lf\n", y);
}
else if (Dx == 0 && Dy == 0)
{
    printf("Система має безліч розв'язків.\n");
}
else
{
    printf("Система несумісна, розв'язків немає\n");
}
    return 0;
}
