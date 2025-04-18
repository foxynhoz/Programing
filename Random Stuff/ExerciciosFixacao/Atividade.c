#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 9, b = 4, c = -2;
    float r = 3.5, s = 2.0, t =0.5;

    printf("%d\n", a/b);
    printf("%d\n", b + c *a);
    printf("%d\n", a % b - c);
    printf("%d\n", a/s);
    printf("%d\n", b * r);
    printf("%d\n", a - (c * r));

    return 0;
}
