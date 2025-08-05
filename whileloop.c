#include<stdio.h>

int main() {
    int i, n, m, sum =0;
    printf("\n Enter the initial number : ");
    scanf("%d", &n);
    i = n;
    printf("\n Enter the final number : ");
    scanf("%d", &m);
    while(i<=m){
        sum = sum + i;
        i = i + 1;
    }
    printf("\n The sum is %d", sum);
}