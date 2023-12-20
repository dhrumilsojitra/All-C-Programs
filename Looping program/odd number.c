// odd number
#include <stdio.h>

int main() {
    int n,i=1;
    printf("Enter no:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            printf("\n Odd no-- %d",i);
        }
        i++;
    }

    return 0;
}