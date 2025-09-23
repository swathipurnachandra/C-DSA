#include<stdio.h>
#include<string.h>

struct Student {
    int rollno;
    char name[30];
    char conduct[15];
};

int main() {
    struct Student *sptr, s;
    sptr = &s;
    printf("\nEnter Roll Number : ");
    scanf("%d", &sptr -> rollno);
    printf("\nEnter Name : ");
    scanf("%s", &sptr -> name);
    printf("\nEnter Conduct : ");
    scanf("%s", &sptr -> conduct);
    
}