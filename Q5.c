#include<stdio.h>
int digit(int n){
    if(n==0)
     return 0;
    return n%10 + digit(n/10);
}
int main(){
    int n;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("Sum of digit of %d is %d ",n,digit(n));
    return 0;
}