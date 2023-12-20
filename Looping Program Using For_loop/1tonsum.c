// 1 to n sum
#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("Enter a no: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
         sum += i;
    };
    printf("Sum = %d", sum);
    return 0;
}