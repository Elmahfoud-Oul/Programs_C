#include<stdio.h>
int main(){
printf("Pls Enter total num of people do you want test: ");
int l;  
scanf("%d", &l);
double ages[l];
int i;
for (i=0;i<l;i++){
  printf("\nEnter age N%d: ", i+1);
  scanf("%lf", &ages[i]);
  while(ages[i]<=0){
      printf("\nReenter value, Age should be positive of person N%d: ", i+1);
scanf("%lf", &ages[i]);
}
}
int length = sizeof(ages) / sizeof(ages[0]);

double lowestAge = ages[0];

for (i = 0; i < length; i++) {
  if (lowestAge > ages[i]) {
    lowestAge = ages[i];
  }
}
printf("The lowest is: %lf", lowestAge);
}