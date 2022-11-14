#include<stdio.h>
int square(int n){
    if(n==1)
      return 1;
    return n*n +square(n-1);
    
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The sum of square of first %d natural number %d ",n,square(n));
    return 0;
}