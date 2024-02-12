//1....To check weather the number is armstong or not
#include <stdio.h>
#include <math.h>
int main(){
  int num_1,num_2,num_3,sum=0,a,n=0;
  printf("Enter the number::");
scanf("%d", &num_1);
  num_2 = num_1;
  num_3 =num_1;
  while (num_3!=0)
  {
   num_3= num_3/10;
   n++;
  }
  printf("%d\n",n);
  int i;
  while(num_1!=0){
    a = num_1 % 10;
    int c=1;
  for(i=0;i<n;i++){
   c=c*a;
  }
    sum= sum +c;
    num_1 = num_1/10;
  }
  printf("%d",sum);
  if(num_2== sum){
  printf("The given number %d is armstrong number",num_2);
  }
  else{
    printf("It is not an armstrong number");
  }
}
//To check if the number is prime or not
#include <stdio.h>
int main(){
  int num_1,i,p=0;
  printf("Enter the number::");
  scanf("%d",&num_1);
  if(num_1<=1){
    p=1;
  }
  for(i=2;i<=num_1/2;i++){
    if(num_1%i==0){
    p=1;
    break;
  }
  }
  if(p==1){
    printf("The number is composite");
  }
  else{
    printf("The number is prime");
  }
}
//Wap to find the prime numbers from 1 to n
#include <stdio.h>
int main(){
  int n,i,j;
  printf("Enter up to which dight you want to print the prime numbers");
  scanf("%d",&n);
  for(i=2;i<=n;i++){
    int p=0;
    for(j=2;j<=i/2;j++){
      if(i%j==0){
        p=1;
        break;
      }
      }
      if(p==0){
        printf("%d,",i);
      }
    }
  }
  //Wap to find the prime numbers from 1 to n stroing in the array
#include <stdio.h>
int main(){
  int n,i,j,count=0,k;
  printf("Enter up to which dight you want to print the prime numbers");
  scanf("%d",&n);
  int array_prime[n];
  for(i=2;i<=n;i++){
    int p=0;
    for(j=2;j<=i/2;j++){
      if(i%j==0){
        p=1;
        break;
      }
      }
      if(p==0){
        array_prime[count]=i;
         count+=1;
        }
      }
      printf("%d\n\n",count);
        for(i=0;i<count;i++){
          printf("%d,",array_prime[i]);
        }

      }
    //Wap to print the even numbers from 1 to 100 and find the sum of them
#include <stdio.h>
int main(){
  int sum =0,i,j=0;
  int array_sum[100];
  for(i=1;i<=100;i++){
    if(i%2==0){
    sum+=i;
    array_sum[j]=i;
    j++;
  }
}
printf("The list of even numbers from 1 to 100 are::::::::::::");
for(i=0;i<=j;i++){
  printf("%d,",array_sum[i]);
}
printf("\n");
printf("The sum is %d",sum);
}
#include <stdio.h>
//To print sum 100 even numbers

int main() {
    int count = 0, i;

    for (i = 1; count < 100; i++) {
        if (i % 2 == 0) {
            printf("%d, ", i);
            count++;
        }
    }

    return 0;
}
//To print the the even number up to nth term and sum of them
#include <stdio.h>
int main(){
  int n,i,count=0,sum=0;
  printf("Print upto which number you want to print the even number\n");
  scanf("%d",&n);
  int array_even[n];
  for(i=1;i<=n;i++){
    if(i%2==0){
      array_even[count] =i;
      sum+=i;
      count++;
    }
    printf("%d",count);
  }
  printf("The even numbers in the range of 1 to %d  are given below::",n);
  for(i=0;i<count;i++){
    printf("%d,",array_even[i]);
  }
  printf("\n\n");
  printf("The sum of these even numbers are %d",sum);
}
// Tao check if the given number is perfect number or not
#include <stdio.h>
int main(){
  int num_1,original_num,rem,sum=1,i;
  printf("Enter the number");
  scanf("%d",&num_1);
  for(i=2;i<=num_1/2;i++){
    if(num_1%i==0){
      sum+=i;
    }
  }
if(num_1==sum){
  printf("The entered number %d is a perfect number",num_1);
}
else{
  printf("The entered number %d is not a perfect number",num_1);
}
}
// To find the perfect number between 1 to 1000
#include <stdio.h>
int main(){
  int num,i,j;
for(i=6;i<=1000;i++){
  int sum=1;;
  for(j=2;j<=i/2;j++){
    if(i%j==0){
      sum+=j;
    }
  }
  if(sum==i){
    printf("%d,",i);
  }
}//Wrie a program to find the factorial of the number entered
#include <stdio.h>
int main(){
  int num,i,factorial=1;
  printf("Enter the number::");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
  factorial= factorial*i;
}
printf("The factorial of %d is %d",num,factorial);
return 0;
}
}
//To check the given number is strong or not
#include <stdio.h>
int main(){
  int num,originalnum,i,j,p,sum1=0;
  printf("Enter the number::");
  scanf("%d",&num);
  originalnum = num;
  while(num!=0){
  p =num%10;
  int sum=1;
  for(i=1;i<=p;i++){
    sum= sum*i;
  }
  printf("The sum is %d\n",sum);
  num = num/10;
  sum1=sum+sum1;
  }
  printf("%d",sum1);
  if(sum1==originalnum){
    printf("The entered number %d is a strong number::",originalnum);
  }
  else{
    printf("The entered number %d is not a strong number::",originalnum);
  }
  return 0;
}//Write a program to print the fibonachie sereies
#include <stdio.h>
int main(){
  int a=1,b=1,c,i;
  printf("%d,",a);
  printf("%d,",b);
  for(i=1;i<9;i++){
    c=a+b;
    printf("%d,",c);
    a=b;
    b=c;
  }
return 0;

}//Program to perform matrix multiplication
#include <stdio.h>
int main(){
 int  array_1[2][2] = {{1,2},{3,4}};
 int array_2[2][2] ={{3,4},{5,6}};
 int array_3[2][2];
 int i,j;
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
      array_3[i][j]= array_1[i][j] + array_2[i][j];
  }
 }
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    printf("%d,",array_3[i][j]);
  }
 }
}
