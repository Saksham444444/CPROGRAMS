// Notes on functions
//Here entire work is done in add function only calling is done in main
#include <stdio.h>
//Function prototype(decleartion)
int add();
int main(){
    //function call
    add();
}
//Function defination
int add(){
    int a= 5;
    int b=6;
    int c =a+b;
    printf("The sum is %d",c);
}
// Another way of write code in function 
// Here i have define the values of a and b in main function and send that value to sum function
#include <stdio.h>
int sum(int a, int b);
int main(){
    int a=5;
    int b=6;
    sum(a,b);
}
int sum(int a, int b){
    int c= a+b;
    printf("The sum is %d",c);
}
// Third type of writing code using the functions
#include <stdio.h>
int sum(int a, int b);
int main(){
    int p,q;
printf("Enter the first number");
scanf("%d",&p);
printf("Enter the second number");
scanf("%d",&q);
printf("The sum of %d and %d is %d", p,q,sum(p,q));
return 0;
}
//The sum of a and b is stored in sum();
// when we return the value of function it get stored in the  name of fuction
// when we are returing  the value of  function we must print that function in the main function
// When we are not using the reture we print in the bulit in function and we just call the function
int sum(int a,int b){
    return a+b;
}
// another example
#include <stdio.h>
void love();
void love(int n){
    int i;
    for(i=1;i<n;i++){
printf(" %d.Iloveyou!!\n",i);
    }
}
int main(){
    int n;
    printf("How many times do you want to print?");
    scanf("%d",&n);
    love(n);
    love(n);
}
  