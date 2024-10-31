#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,a[10],sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter values :");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("sum of array : %d",sum);
    return 0;
}