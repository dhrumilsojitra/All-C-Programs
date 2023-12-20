//n to 1 print
#include <stdio.h>

int main() {
  int i=1,n;
  printf("Enter No:");
  scanf("%d",&n);
  do{
    printf("%d \n",n);
    n--;
  }while(n>=i);
    printf("\n loop is over..");
    return 0;
}