#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,flag=0;
    printf("Enter number :");
    scanf("%d",&n);
    // printf("Even numbers are :\n");
    for (i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
     if(flag==0){
        printf("prime number");
    }
    else{
        printf("non prime");
    }
    return 0;
}