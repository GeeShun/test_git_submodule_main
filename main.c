#include <stdio.h>
#include <fun_add.h>

int main()
{
    int a = 10;
    int b = 5;
    int c = Add(a, b);
    int d = Sub(a, b);

    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, d);

    return 0;
}