#include<stdio.h>
#include<conio.h>

int main()
{
    int n, num, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    num = n;
    while(n != 0)
        n = n/10;
        count += 1;

    printf("The number of  digits in %d is: %d", num, count);

    return 0;
}
