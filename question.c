//1.Program to find the greatest numebers among the threee(USing if else)
#include <stdio.h>
int main(){
    int num_1,num_2,num_3;
    printf("Enter the first numbers");
    scanf("%d", &num_1);
    printf("Enter the second number");
    scanf("%d", &num_2);
    printf("Enter the second number");
    scanf("%d",&num_3);
    if(num_1>num_2 && num_1>num_3){
    printf("The greatest numbers amoung %d %d and %d is %d", num_1,num_2,num_3,num_1);
    }
    else if(num_2>num_1 && num_2>num_3){
          printf("The greatest numbers amoung %d %d and %d is %d", num_1,num_2,num_3,num_2);
    }
    else if(num_3>num_1 && num_3>num_2){
          printf("The greatest numbers amoung %d %d and %d is %d", num_1,num_2,num_3,num_3);
    }
    else {
        printf("The numbers are equal");
    }
    return 0;

}//2... To chceck the number is prime or not
#include <stdio.h>
int main(){
    int num_1,i ,sum=0 ;
    //getting number from the user
    printf("Enter the numbers\n");
    scanf("%d", &num_1);

    if(num_1==1){
        sum=1;
    }
   for(i=2;i<=num_1/2;i++){
    //change the value of sum to 1 if the condition is valid
    if(num_1%i==0){
        sum=1;
        break;
        //if the condition is valid then we break out from the existing loop
    }
   }
   if(sum==1){
    printf("The numbers %d is not a prime numbers", num_1);
   }
   else {
    printf("The number %d is a prime number", num_1);
   }
return 0;
}
//3.. To find the compound intrest
#include <stdio.h>
#include <math.h>
int main(){
    #define rate 0.07
    float priniple, time , amount, intrest;
    printf("Enter the the total deposite amount\n");
    scanf("%f",&priniple);
    printf("Enter the numbers of year you want to hold\n");
    scanf("%f",&time);
    intrest =priniple*(pow((1+rate),time));
    printf("The total amount you will get is %.2f\n",intrest);
    printf("Principle=%.2f\n",priniple);
    printf("Time=%.2f\n",time);
    printf("Intrest=%.2f\n",intrest-priniple);
}
//4.. To print the ASCII value of the characters
#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    printf("%c\n",ch);
    printf("%d",ch);
return 0;
}
// changes has been added
