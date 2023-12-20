//n to 1 print
#include <stdio.h>

int main() {
  int n;
  printf("Enter No:");
  scanf("%d",&n);

  for (int i = 1; n>=i ; n--)
  {
    printf("%d \n",n);
  };
  
    printf("\n loop is over..");
    return 0;
}