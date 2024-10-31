#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,a[10];
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter  values : ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Your entered numbers are : ");
     for (i=0;i<n;i++){
        printf("%d\t",a[i]);
       
     }

     return 0;
}