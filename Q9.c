#include<stdio.h>
int digitc(int n){
    if(n==0)
      return 0;
   return 1+ digitc(n/10);
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The digit in number %d is %d ",n,digitc(n));
}