/* Program to Perform Arithmetic Operations in C */

#include<stdio.h>

int main()
{
double a = 5;
int b = 2;
 int addition, subtraction, multiplication, mod;
 int division;

 addition = a + b; //addition of 3 and 12= 15
// 7
 subtraction = a - b; //subtract 12 from 3= -9
// 3
 multiplication = a * b; //Multiplying both= 36
// 10
 division = a / b; //dividing 12 by 3 (number of times)= 0.25= 0
// 2
 //mod = a % b; //calculation the remainder= 3
// 1


 printf("Addition of two numbers a, b is : %d\n", addition);
 printf("Subtraction of two numbers a, b is : %d\n", subtraction);
 printf("Multiplication of two numbers a, b is : %d\n", multiplication);
 printf("Division of two numbers a, b is : %d\n", division);
 printf("Modulus of two numbers a, b is : %d\n", mod);

 return 0;

}
