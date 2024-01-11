#include <stdio.h>
int findLength(char arr[30] ) {
    int i,count=0;
    for (i = 0; arr[i] !='\0'; i++)
    {
        
        count++;
    }

    return count;
}

int main() {
    char name[30];
    printf("Enter name: ");
    scanf("%s",name);
    printf("length of name %d",findLength(name));

   return 0;
}