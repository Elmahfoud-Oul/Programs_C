#include<stdio.h>
int main()
{
    //I use here goto as instraction of loop controle  
    //Also its helpfull to when have larg code isctraction
    int g;
printf("Enter: ");
scanf("%d",&g);
if(g>0){
    goto amio;
}
else if(g<0){
    goto Agharas;
}else{
    goto nuy;
}
Agharas:
printf("Brawvo");
amio:
printf("Pio");
nuy:
printf("wzzzz");


}