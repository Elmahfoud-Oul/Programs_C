#include<stdio.h>
int main(){{}
float a,b,c,max;
char choix;
max=a;
do
{

printf("Enetr value A et B: ");
scanf("%f %f", &a, &b);

if (max<b){
    max=b;
}
if (max>b){
    max=a;
}

printf("Do y want contan Y or N: ");
scanf(" %c", &choix);

} while (choix=='n');

printf(" the highest is: %.2f", max);
}