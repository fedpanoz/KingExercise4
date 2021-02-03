#include<stdio.h>
int main(void)
{
    int a, b, c, d, re100, re10;
    printf("Enter a three digits number: ");
    scanf("%d", &d);
    re100 = d % 100;
    re10 = re100 % 10;
    c = re10;
    b = re100 / 10;
    a = d / 100;
    printf("The reversal is %d%d%d: ", c, b, a);
    return 0;

}