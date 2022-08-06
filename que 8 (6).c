#include<stdio.h>
#include<conio.h>

int main()
{
    int n, count = 0, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i =1; i<= n;i++)
        if(n%i ==0)
            count += 1;
    if(count == 2)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}
