#include<stdio.h>
int evenN(int n){ 
    if(n==2)
     return 2;
    return n + evenN(n-2);
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Sum of First %d even number is %d ",n,evenN(2*n));
    return 0;
}