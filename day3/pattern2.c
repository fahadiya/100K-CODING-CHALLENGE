#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j;
    printf("Enter number :");
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        for (j=i;j>0;j--){
                printf("* ");
        }
        printf("\n");
        }
    
    return 0;
}