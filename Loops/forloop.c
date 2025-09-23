#include<stdio.h>
int main() {
    int flag = 0, num, i;
    printf("\n Enter the number: ");
    scanf("%d", &num);
    for(i = 2; i <= num/2; i++) {
        if(num%i == 0) {
            flag = 1;
            break;
        }
    }
    if( num == 1) {
        printf("The number is neither prime nor composite");
    }
    else if(flag == 1) {
        printf("The number is composite");
    }
    else {
        printf("The number is prime");
    }
    
}