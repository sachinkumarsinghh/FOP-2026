#include <stdio.h>
int main(){
    int decimal=0,remainder,i=0;
    printf("enter a binary number :");
    scanf("%d",&binary);
    while(binary!=0){
        remainder=binary%10;
        binary/=10;
        decimal+=remainder*pow(2,i);
        ++i;

    }
    printf("decimal equivalent=%d\n",decimal);
return 0;