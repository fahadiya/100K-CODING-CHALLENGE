#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    for (i=0;i<10;i++){
        printf("Hi\n");
        if(i==5){
            continue;
        }
        printf("Hello\n");
    }
   printf("Finished");
    return 0;
}