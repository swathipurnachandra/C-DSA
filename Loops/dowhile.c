#include<stdio.h>
int main() {
    int n, i = 0, sum = 0;
    float avg = 0.00;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    do {
        sum = sum + i;
        i = i+1;
    } while(i <= n);
    avg = (float)sum/n;
    printf("\n The average of %d numbers is: %f", n, avg );
    return 0;
}