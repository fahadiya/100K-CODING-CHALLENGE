#include<stdio.h>
#include<conio.h>
int main(){
    float a,b,c;
    float avr;
    printf("enter three numbers :");
    scanf("%f%f%f",&a,&b,&c);
    avr=(a+b+c)/3;
    printf("Avarage : %f",avr);
    return 0;
}