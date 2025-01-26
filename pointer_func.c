#include<stdio.h>
  //declaratin function it be outside of main() func, for exaple i will build func tht calculeate puis okay, let tray that
  //"void" means that the function does not have a return value
  //"agram_func_puis()" is the name of fuction
void agram_func_puis(){
  int i, pui;
  float r,var;
  double gh=5;
     printf("size id %lu\n", sizeof(gh));
    printf("--------Hello! Prof again:)--------\n");
    printf("Give me Number then Puis: ");
  scanf("%f %d",&var, &pui);
  r=1.00;
  for (i=1;i<=pui;i++){
    r=var*r;
  }
 printf("The result is: %.2f", r); 

}
//This is main func in our program and its oblegatory
int main(){
  agram_func_puis();
}
/*
int main(){
    int first=100;
    printf("--------------Hello! Prof--------------");
    printf("\nvalue of this variable is: %d",first);
    printf("\nmemory address of our varibale is: %p", &first); 
  //role of '&first' here is to show memory address, is often called a "pointer" AND "%p" to show value of the pointeur


 //okay I will declarate the pointer var here abouve, yalah
    int* agram=&first; 
    printf("\n poinetur address is: %p", &agram);
    printf("\n poinetur value is: %d", *agram);


    //Declarate "*agram" accesses the value stored at the memory address pointed to by "agram" 
    int val= *agram;    
    printf("\n Val value is: %d", val);}
*/
