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