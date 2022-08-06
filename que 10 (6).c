#include<stdio.h>
#include<conio.h>

int main()
{
    int n, num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Reverse of %d is: %d",num, rev);


    return 0;
}
