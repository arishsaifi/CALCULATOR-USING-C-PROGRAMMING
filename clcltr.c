#include<stdio.h>
#include<math.h>
//A program to make a simple clculater //
int main(){
        int a , b ;
        char op;
        printf ("enter the operation i.e. +, -,*,etc :");//taking the operation what user wants
        scanf("%c",&op);
        printf("enter the first number"); //taking the input of ist number
        scanf("%d",&a);
        
        printf("enter the second number "); //taking the input of second number
        scanf("%d", &b);

        switch (op)
        {
        case '+':
                printf("%d+%d=%d",a,b,a+b);//case 1 to add two numbers
            break;
        case '-':
                printf("%d-%d=%d",a,b,a-b);//case2 to substract 2 numbers 
            break;
        case'*':
                printf("%d*%d=%d",a,b,a*b);//case3 to multiply two numbers 
            break;
        case'/':
                printf("%d/%d=%d",a,b,a/b);//case4 to dividation two numbers
            break;    
        default:
            printf("ATTENTION:enter the valid operator");//when the user enter a invalid operation it wiil show this message
        }
}