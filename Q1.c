#include<stdio.h>
int sumN(int n){
    if(n==1)
       return 1;
    return n+ sumN(n-1);
}
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The sum of First %d natural number is %d " , n,sumN(n));
}