// C program to display the unique elements in and array and coun t them
#include <stdio.h>
int main(){
  int i,j ,count =0,duplicate=0;
  //Creating the first array
  int array_1[10] = {1,7,3,40,2,40,78,1,6,3};
  //Creating an empty array to store the duplicate elements
  int array_2[10];

  for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
      if(array_1[i] ==array_1[j]){
      count+=1;
      //if the condition is verified then storing the value in the second array
      array_2[i] = array_1[j];
      //it will chnage the value of this postion to 100
      array_1[i]=100;
      array_1[j]=100;
      break;
      }

    }
  }
  printf("The unique elements in the given array are::\n");
for(i=0;i<10;i++){
  if(array_1[i]!=100){
    printf("%d,",array_1[i]);
  }
}
}