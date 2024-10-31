#include<stdio.h>
#include<conio.h>
int main(){
    int n,i;
    printf("Enter number :");
    scanf("%d",&n);
    printf("Even numbers are :\n");
    for (i=2;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}