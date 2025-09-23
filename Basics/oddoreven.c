#include<stdio.h>
int main() {
    int a,b;
    printf("\n Enter the number : ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("\n The number is even");
    }
    else {
        printf("\n The number is odd");
    }   
}