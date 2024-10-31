#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;   
    printf("Enter your first Number :");
    scanf("%d",&a);
    printf("Enter your first Number :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;

    // temp=a;
    // a=b;
    // b=temp;
    printf("a:%d , b: %d",a,b);
    return 0;

}