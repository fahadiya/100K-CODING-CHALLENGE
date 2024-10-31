#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,sum,sub,mul,div;
    printf("Enter your first number :");
    scanf("%d",&a);
    printf("Enter your second number :");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("sum of two numbers %d \n",sum);
    printf("Subsraction of two numbers %d \n",sub);
    printf("multiple of two numbers %d \n",mul);
    printf("divission of two numbers %d \n",div);
    return 0;
    }