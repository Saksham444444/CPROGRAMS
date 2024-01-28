//ARRAY
//Array in C is a fixed size collection of similar data items stored in contigious memory location
//Array in C is one of the most used data structures in C programming. 
//It is a simple and fast way of storing multiple values under a single name
//It can be used to store user define data type such as pointers and structure
// Syntax
data_type name_name[size1] [size2] [sizeN];
// here N is the number of dimension
#include <stdio.h>
//Array declearion
int neppal[34];
char ch[34];

int main()
{
 
    // array initialization using initialier list
    int arr[5] = { 10, 20, 30, 40, 50 };
 
    // array initialization using initializer list without
    // specifying size
    int arr1[] = { 1, 2, 3, 4, 5 };
 
    // array initialization using for loop
    float arr2[5];
    for (int i = 0; i < 5; i++) {
        arr2[i] = (float)i * 2.1;
    }
    return 0;
}
//To get specific element from the array
#include <stdio.h>
int main(){
    //Array decleartion and initilization
    int arr1[20]={1,2,3,5,3,56,356,34};
    //printing the element of an array
    printf("%d\n",arr1[5]);
    //For changing and edititing the value of particular index in array
    arr1[5]=44;
    printf("%d\n",arr1[5]);
    // Array traversal(printing every element of array)
    int i;
     for(i=0;i<8;i++){
    printf("%d..%d\n",i,arr1[i]);
     }
}

// 1-D Array
#include <stdio.h>
int main(){
    //array decleration
    int n;
    printf("Enter the numbers of elements in an array\n");
    scanf("%d",&n);
    int number[n];
    // array initilazation using loop
    int i;
    for(i=0; i<n;i++){
        scanf("%d",&number[i]);
    }
    printf("The given array has %d elemeents and the elements are::";
    //printing 1d array by traversing loop
    for(i=0;i<=n;i++){
        printf("%d..%d",i+1,number[i]);
    }
}
//getting the input as strings of words from user using array
#include <stdio.h>
int main(){
    char name[453];
    printf("Enter the line that you wabt to frint out\n");
    scanf("%[^\n]",name);
    printf("%s",name);
    
}
//1d array for char data type
#include <stdio.h>
    int main(){
        char ch[65] = {'c','r','t'};
        //for getting the single character we use %c
        printf("%c",ch[1]);
        //for getting the entire character in c
        printf("%s",ch);

}
//2d array 
#include <stdio.h>
int main(){
    int i,j;
    int number[3][3] = {1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("(%d,%d)%d\t",i,j,number[i][j]);
        }
        printf("\n");
    }
}
//Creating a 2d array
int matrix[3][4] ={{2,4,3,4},{2,4,3,2},{4,7,8,6}};
//The first dimension represents the number of rows 
//The second dimension represents the numbers of column
//1... Wap to store elements in an array and dispaly them
#include <stdio.h>
int main(){
  int array[] ={1,1,2,3,4,5,6,7,8,9};
  int i;
  for(i=0;i<10;i++){
    printf("%d",array[i]);
    if(i<9){
      printf(",");
    }
  }
}
//2...Wap to read n numbers in an array and dispaly the result in reverse order
#include <stdio.h>
int main(){
  int n,i;
  printf("Enter the numbers of elements\n");
  scanf("%d",&n);
  int array[n];
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  printf("The reverse array is\n");
  for(i=n-1;i>=0;i--){
    printf("%d,",array[i]);
  }
}
//3..Wap to find the sum of al the elements of array
#include <stdio.h>
int main(){
  //Declare the variables
  int n,i,sum=0;
  printf("Enter the numbers of elements in an array");
  //Taking the input of number of elements
  scanf("%d",&n);
  //Declare of arrray
  int array[n];
  //Taking elements of arrays from the user as input
  for(i=0;i<n;i++){
    //Performing the addation operation on all the elements present in the array
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++){
    sum+=array[i];
  }
  //Displaying the su of all the elements to the user
  printf("The sum is %d",sum);
  return 0;
}
//4...WAp to copy the element from one array to the other
#include <stdio.h>
int main(){
  int array_1[5] ={ 2,4,6,8,10};
  int i, array_2[5];
  for(i=0;i<5;i++){
    //copying the element from arry 1 to 2
    array_2[i] = array_1[i];
  }
  for(i=0;i<5;i++){
  //Elements from first array
    printf("%d,",array_1[i]);
    //ELements from second array
    printf("%d,",array_2[i]);
  }
  return 0;
}
//5.. to reverse the given arrays
#include <stdio.h>
int main(){
  int array_1[5] = {1,2,3,4,5};
  int array_2[5];
  int i,j;
  for(i=0,j=4;i<5;i++,j--){
    array_2[j] = array_1[i];
  }
  for(i=0;i<5;i++){
    printf("%d\n",array_2[i]);
  }
}
// C program to count total number of duplicate elements in c
#include <stdio.h>
int main(){
  int i,j,count=0;
  int array[10] = {1,2,3,4,5,2,3,4,1,5};
  for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
      if(array[i]==array[j]){
        count+=1;
  //modifies the duplicate element to a unique value (-99 + j) to ensure it is not counted again in the future iteration
        array[j]=-99+i;
        break;
      }
    }
  }
  printf(" THe number of duplicate element is %d", count);
}
// C program to count total number of duplicate elements in c taking input
#include <stdio.h>
int main(){
  int i,j,n,count=0;
  printf("Enter the numbers of digits in the Array");
  scanf("%d",&n);
  int array[n];
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(array[i]==array[j]){
        count+=1;
        array[j]=-99+i;
        break;
      }
    }
  }
  printf(" THe number of duplicate element is %d", count);
}
// C program to display the duplicate elements in and array and coun t them
#include <stdio.h>
int main(){
  int i,j ,count =0,duplicate=0;
  //Creating the first array
  int array_1[10] = {1,2,3,4,2,4,6,1,6,3};
  //Creating an empty array to store the duplicate elements
  int array_2[10];

  for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
      if(array_1[i] ==array_1[j]){
      count+=1;
      //if the condition is verified then storing the value in the second array
      array_2[i] = array_1[i];
      array_1[i]=100;
      }

    }
  }
  printf("The total number of ducpilacate elements is %d\n",count);
  for(i=0;i<10;i++){
if(array_1[i] == 100 ){
  printf("%d,",array_2[i]);
}
}
}
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