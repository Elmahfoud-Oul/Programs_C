#include<stdio.h>
int main(){
    int a,b,some1,some2,i,j;
    
    printf("Enter num A et B: ");
    scanf("%d %d",&a,&b);
    while((a)<0||(b)<0){
    printf("Svp num doit etre positive entier non nul, Rentre A et B: ");
    scanf("%d %d",&a,&b);
    }
some1=0;
    for(i=1;i<=a-1;i++){
        if(a%i==0){
            some1=some1+i;
        }
    }
    some2=0;
    for(j=1;j<=b-1;j++){
        if(b%j==0){
            some2+=j;
        }
    }
    if((some1==b)&&(some2==a)){
        printf("\nNum %d et %d sont amis",a,b);
    }else{
                printf("\nNum %d et %d ne sont pas amis",a,b);
    }
}