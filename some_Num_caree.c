#include<stdio.h>

int main(){
float p,s,a;
s=0;
    for(a=1;a<=10;a++){
        p=a*a;
        s=s+p;
    }
    printf("%f", s);
}