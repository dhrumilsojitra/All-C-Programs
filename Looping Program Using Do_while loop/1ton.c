//1 to n print
#include <stdio.h>

int main() {
  int i=1,n;
  printf("Enter No:");
  scanf("%d",&n);
  do{
    printf("%d \n",i);
    i++;
  }while(i<=n);
    printf("\n loop is over..");
    return 0;
}