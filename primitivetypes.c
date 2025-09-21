#include<stdio.h>

int main() {
    short int a;
    unsigned short int b;
    unsigned int c;
    int d;
    long int e;
    unsigned long int f;
    long long int g;
    unsigned long long int h;
    signed char i;
    unsigned char j;
    char k;
    float l;
    double m; 
    long double n;

    printf("\nEnter short int: ");
    scanf("%hd\n", &a);
    printf("\nEnter unsigned short int: ");
    scanf("%hu\n", &b);
    printf("\nEnter unsigned int: ");
    scanf("%u\n", &c);
    printf("\nEnter int: ");
    scanf("%d\n", &d);
    printf("\nEnter long int: ");
    scanf("%ld\n", &e);
    printf("\nEnter unsigned long int: ");
    scanf("%lu\n", &f);
    printf("\nEnter long long int: ");
    scanf("%lld\n", &g);
    printf("\nEnter unsigned long long int: ");
    scanf("%llu\n", &h);
    printf("\nEnter character: ");
    scanf("%c\n", &i);
    printf("\nEnter signed character: ");
    scanf("%c\n", &j);
    printf("\nEnter unsigned character: ");
    scanf("%c\n", &k);
    printf("\nEnter float: ");
    scanf("%f\n", &l);
    printf("\nEnter long double: ");
    scanf("%lf\n", &m);
    printf("\nEnter long double: ");
    scanf("%Lf\n", &n);
    
    printf("%hd\n", a);
    printf("%hu\n", b);
    printf("%u\n", c);
    printf("%d\n", d);
    printf("%ld\n", e);
    printf("%lu\n", f);
    printf("%lld\n", g);
    printf("%llu\n", h);
    printf("%c\n", i);
    printf("%c\n", j);
    printf("%c\n", k);
    printf("%f\n", l);
    printf("%lf\n", m);
    printf("%Lf\n", n);
}