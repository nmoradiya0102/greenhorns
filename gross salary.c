#include<stdio.h>  
    int main()   
    { 
    float a,b,c,d,e;
    printf("Enter your base salary amount:");
    scanf("%f",&a);
    printf("Enter HRA(House Rent Allowance) in percentage:");
    scanf("%f",&b);
    printf("Enter DA(Dearness Allowance) in percentage:");
    scanf("%f",&c);
    printf("Enter TA(Travelling Allowance) in percentage:");
    scanf("%f",&d);
    e = a + (a*b/100)+(a*c/100)+(a*d/100);
    printf("Gross salary according to entered data is:%f",e);
    return (0);  
    }  
