#include<stdio.h>
#include<conio.h>
int main(){
    int choice;
    printf("1-Porotta \n2-Biriyani\n3-Fried Rice \n4-Mandhi\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("You have selected Porotta");
            break;
        case 2:
            printf("You have selected Biriyani");
            break;
        case 3:
            printf("You have selected Fried Rice");
            break;
        case 4:
            printf("You have selected Mandhi");
            break;
    default :
        printf("FOOL!!!");
    }
    return 0;
}