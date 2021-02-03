#include<stdio.h>
int main(void)
{
    int a, b ,c;
    printf("Enter a two digits number: ");
    //scanf("%1d%1d", &a, &b);
    scanf("%d", &c);
    b = c % 10;
    a = c / 10;
    printf("The reversal is : %d%d", b, a);
    return 0;
}