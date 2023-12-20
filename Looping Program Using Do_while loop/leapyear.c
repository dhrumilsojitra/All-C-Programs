// leap year
#include <stdio.h>

int main() {
    int year=2000;
    do{
        if(year%4==0){
            printf("Leap year-%d\n",year);
        }
        year++;
    }while(year<=3000);
    return 0;
}