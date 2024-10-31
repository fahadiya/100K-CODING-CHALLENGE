#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a<0){
        printf("entered number is negative");
    }
    else{
        printf("Entered number is positive");
    }
    return 0;
}



#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2;
    printf("Enter  number :");
    scanf("%d",&num1);
    printf("Enter  number :");
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d is greaterthan %d",num1,num2);
    }
    else{
        printf("%d is lessthan %d",num1,num2);

    }
return 0;
}