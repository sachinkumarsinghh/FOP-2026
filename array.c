 

#include<stdio.h>
int main(){
    int a[3]={10,3,4};
    int b[3]={2,3,4};
    int c[3];
    for(int i=0;i<3;i++){
        c[i]=a[i]+b[i];
    }
        printf("result in array c:\n");
        for (int i=0;i<3;i++){
            printf("elemeny %d:%d\n",i,c[i]);
        }
        return 0;
    }
