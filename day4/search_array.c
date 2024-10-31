#include<stdio.h>
#include<conio.h>

int main(){
    int n,i,a[10],flag=0;
  
    printf("Enter your values : ");
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    printf("enter your search number : ");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        if(n==a[i]){
        flag=1;
        break;
        }
    }
    if(flag == 1){
        printf("value found at position %d", i+1);
    }
    else{
        printf("value not found.");
    }
    return 0;
}