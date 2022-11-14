#include<stdio.h>
int oddN(int n){ 
    if(n==1)
     return 1;
    return n + oddN(n-2);
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Sum of First %d odd number is %d ",n,oddN(2*n-1));
    return 0;
}