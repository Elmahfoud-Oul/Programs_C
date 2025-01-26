#include <stdio.h>

int main() {
  int myNum;
  printf("Enter a rand num: ");
scanf("%d", &myNum);
  
if (myNum<0){
  while (myNum < 0) {
  printf("enter: ");
scanf("%d",&myNum);
 }
}
printf("Glad you right");

  return 0;
}