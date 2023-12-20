// leap year
#include <stdio.h>

int main() {
   
    for (int year=2000; year<=3000; year++)
    {
        if(year%4==0){
            printf("Leap year-%d\n",year);
        }
    }
    
    return 0;
}