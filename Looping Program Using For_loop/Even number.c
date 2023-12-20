// Even number
#include <stdio.h>

int main() {
    int n;
    printf("Enter no:");
    scanf("%d",&n);
  
    for (int i = 1; n >= i ; n--)
    {
         if(n%2==0){
            printf("\n Even no-- %d",n);
        }
    }
    

    return 0;
}