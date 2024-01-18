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