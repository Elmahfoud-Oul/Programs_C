#include<stdio.h>
int main(){
    int x,l,g;
    do{
    printf("Enter total number of students: ");
    scanf("%d", &x);
    }while(x>0);

    int studnet[x];
    for(int i=0;i<=x-1;i++){
        printf("\nEnter Score of N° %d Studnet: ", i);
        scanf("%d", &studnet[i]);
        while(studnet[i]<0 || studnet[i]>20){
            printf("\nPls, No Negative Values RENTER Score of N° %d Studnet: ", i);
        scanf("%d", &studnet[i]);
        }
    }
    int lmin=studnet[0];
    int max=studnet[0];
    g=l=1;
    int some=0;

     for(int i=0;i<=x-1;i++){
        printf("\nScore Student N° %d is: %d", i, studnet[i]);
        if(max<studnet[i]){ 
            max=studnet[i];
             g=i;
    }if(lmin>studnet[i]){ 
            lmin=studnet[i];
             l=i;
    }
    some+=studnet[i];
     }
     printf("\n\nMin Score is: %d from student N° %d",l,lmin);
     printf("\nMax Score: %d from student N° %d",max,g);
    printf("\nAverage Score: %f", (float)some/x); 
}