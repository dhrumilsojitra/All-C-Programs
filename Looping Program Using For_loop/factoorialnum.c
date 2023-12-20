#include <stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    
    for (int i = 1; i<=n ; i++)
    {
        f*=i;
    }
    
    printf("The Factorial of %d is : %d",n,f);
    return 0;
}