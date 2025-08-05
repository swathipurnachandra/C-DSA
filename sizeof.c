#include<stdio.h>
#include<limits.h>

int main() {
    printf("Size of character in bytes = %zu\n", sizeof(char), sizeof(char)* CHAR_BIT);
    printf("Size of integer in bytes = %zu\n", sizeof(int), sizeof(int)* CHAR_BIT);
    printf("Size of float in bytes = %zu\n", sizeof(float), sizeof(float)* CHAR_BIT);
    printf("Size of short integer in bytes = %zu\n", sizeof(short int), sizeof(short int)* CHAR_BIT);
    printf("Size of long integer in bytes = %zu\n", sizeof(long int), sizeof(long int)* CHAR_BIT);

}