#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum += i*i;
    printf("The sum of square of first %d natural numbers is: %d", n, sum);

    return 0;
}
