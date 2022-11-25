#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Write a C Program to Calculate the sum of N Natural Number\n");
    printf("Enter the value of N\n");
    scanf("%d",&n);
    n=(n*(n+1)/2);
    printf("sum=%d",n);
    getch();
}
