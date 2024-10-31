// selection sort
#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j,temp,a[100];
    printf("Enter your limit:");
    scanf("%d",&n);
    printf("Enter your values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

printf("sorted values are :");
for(i=0;i<n;i++){
    printf("%d \t",a[i]);
}
return 0;
}