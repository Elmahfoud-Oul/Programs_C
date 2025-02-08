#include<stdio.h>
int main(){
    int a,b;
          printf("============Welcome To Score Calculator EST Laayoune============");
    printf("\nTotal Students & Total Modules: ");
    scanf("%d %d", &a,&b);
    int tab[a][b];
    int i,j,g;
    for(i=0;i<=a-1;i++){
        printf("Student ID: %d Total Subjects %d \n",i,b);
         for (j=0;j<=b-1;j++){
         printf("\nStudent ID %d Subject Num %d, Enter Score: ",i,j+1);
         scanf("%d", &tab[i][j]);

            while (tab[i][j] < 0 || tab[i][j] > 20) {
            printf("\nError renter the value agin should be between 0 to 20: ");
         scanf("%d", &tab[i][j]);
         }

        }
   }
      printf("==================S1-ESTL-RESULTS==================\n");
   char p; 
   double s;
   int max,min;
   min=0;
    max=0;
   for(i=0;i<=a-1;i++){
    g=0;
   printf("\n-------------------- Student ID: %d --------------------\n", i);
         for (j=0;j<=b-1;j++){
         g+=tab[i][j];

      if(tab[i][j]<6){
            p='A';
         }else if(tab[i][j]<12){
            p='R';
         }else{
            p='V';
         }
         printf("Module Num: %d || Module State: %c\n",j,p);
    }
    s=g/b;
       if(s<min){
         min=s;
        }
        if(s>max){
         max=s;
        }   
   }

   printf("\n--------------------Session_Normal_List--------------------\n");
   for(i=0;i<=a-1;i++){
    g=0;
         for (j=0;j<=b-1;j++){
                     g+=tab[i][j];
                     }
    s=g/b;
         if(s<12){
            p='F';
         }else{
            p='V';
         }
                 printf("Student ID: %d | Semister Score: %.2lf | Semister Status: %c\n",i,s,p);
         }

printf("\n------------------Low&High_Score--------------------");
printf("\nMin Score: %d || :Max Score: %d", min,max);
}