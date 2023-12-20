// Even number
#include <stdio.h>

int main() {
    int n,i=1;
    printf("Enter no:");
    scanf("%d",&n);
    while(n>=i){
        if(n%2==0){
            printf("\n Even no-- %d",n);
        }
        n--;
    }

    return 0;
}