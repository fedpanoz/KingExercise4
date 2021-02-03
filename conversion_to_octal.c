#include<stdio.h>
int main(void)
{
    int n, first, second, third, fourth, fifth;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);
    fifth = n % 8;
    fourth = (n / 8) % 8;
    third = ((n / 8) / 8) % 8;
    second = (((n / 8) / 8) / 8) % 8;
    first = ((((n /8) / 8) / 8) / 8) % 8;
    printf("The reversal is : %d%d%d%d%d", first, second, third, fourth, fifth);
    return 0;


}