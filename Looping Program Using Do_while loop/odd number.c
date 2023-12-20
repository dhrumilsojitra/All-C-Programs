// odd number
#include <stdio.h>

int main() {
    int n,i=1;
    printf("Enter no:");
    scanf("%d",&n);
    do{
        if(i%2!=0){
            printf("\n Odd no-- %d",i);
        }
        i++;
    }while(i<=n);

    return 0;
}