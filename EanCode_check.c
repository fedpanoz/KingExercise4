#include<stdio.h>
int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, check, sum1, sum2, sum3;
    printf("Enterf the first group 12 digits of a EAN: \n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3 ,&i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
    sum2 = (i1 + i3 + i5 + i7 + i9 + i11);
    sum1 = (i2 + i4 + i6 + i8 + i10 + i12);
    sum3 = (sum1 * 3 + sum2) - 1;
    check = 9 - (sum3 % 10);
    printf("Check digit is : %d\n", check);
}