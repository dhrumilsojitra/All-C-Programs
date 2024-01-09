#include<stdio.h>
void dispNo(int a){
    if(a<=5){
        printf("\n%d",a);
        dispNo(a+1);
    }
}
int sum(int a){
    if(a<=5){
        return a*sum(a+1);
    } else{
        return 1;
    }
}
void main(){
    int i=1;
    dispNo(i);
    printf("\n fectorial of 5 no is:%d",sum(i));
}