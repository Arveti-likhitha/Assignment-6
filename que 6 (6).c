#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter the number of which you want to find the factorial: ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
        fact = fact * i;
    printf("The factorial of %d is: %d", n, fact);


    return 0;
}
