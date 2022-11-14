#include<stdio.h>
int power(int a, int b){
    if(b==1)
    return a;
    return a*power(a,b-1);
}
int main(){
    int n,t;
    printf("Enter the value of number & it's power : ");
    scanf("%d%d",&n,&t);
    printf("The %d raised to power %d is %d",n,t,power(n,t));
    return 0;
}