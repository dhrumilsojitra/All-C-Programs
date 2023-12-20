// leap year
#include <stdio.h>

int main() {
    int year=2000;
    while(year<=3000){
        if(year%4==0){
            printf("Leap year-%d\n",year);
        }
        year++;
    }
    return 0;
}