#include<stdio.h>
int hcf(int a,int b){
    if(a==0)
       return b;
    return hcf(b%a,a);
}
int main(){
    int a,b;
    printf("Enter the value of a & b : ");
    scanf("%d%d",&a,&b);
    printf("TThe HCF of %d & %d is %d " ,a,b,hcf(a,b));
}