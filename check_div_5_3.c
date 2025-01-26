#include<stdio.h>
int main(){
    int a;
    printf("enter: "); 
    scanf("%i", &a);

if ((a%3==0) && (a%5==0))   
{
    printf("True");
}
else{
    printf("Lool, Not that");
}
}
