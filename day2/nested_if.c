#include <stdio.h>
#include <conio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("a is the largest number");
        } else {
            printf("c is the largest number");
        }
    } 
    else {
        if (b > c) {
            printf("b is the largest number");
        } else {
            printf("c is the largest number");
        }
    }

    
    return 0;
}
