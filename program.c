// Use of function to print multiplication table of the number
#include <stdio.h>
void multiplication_table(int num);
int main(){
  int num;
  printf("Enter the number:\n");
  scanf("%d",&num);
  multiplication_table(num);
  return 0;
}
void multiplication_table(int num){
  for(int i =1;i<=10;i++){
    printf("%d * %d = %d",num,i,num*i);
    printf("\n");
  }
}