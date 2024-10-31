#include <stdio.h>
#include <conio.h>

int main() {
    int a, b,choice;
    float result;
    printf("Enter three numbers: ");
    scanf("%d%d", &a, &b);
    printf(" 1 - Addition \n 2 - Substraction \n 3 - Multiplication \n 4 - Division \n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    if(choice==1){
        result=a+b;
        printf("result = %d",result);
    }
    else if (choice ==2)
    {
        result=a-b;
        printf("result = %f",result);
    }
    else if (choice==3)
    {
        result=a*b;
        printf("result = %f",result);
    }
    else if (choice==4)
    {
        result=a/b;
        printf("result = %f",result);
    }
    else{
        printf("FOOL");
    }
return 0;
}