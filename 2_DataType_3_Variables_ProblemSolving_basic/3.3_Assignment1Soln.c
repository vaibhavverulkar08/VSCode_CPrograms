//ToDO - Assignment1 for you
//A1. Write a program to print the variable:
//    - Create two variable "number1" with value 20 and "number2" with value 56.12
//    - Print number1 & number2 with a space in between. 

//Solution:

#include <stdio.h>
int main()
{
    
int number1=20;
double number2=56.12;
printf("%d ",number1);
printf("%lf",number2);


// To print value in next line we use "/n" in print statement.
//e.g.
printf("\n%f",number2);  // By default it takes 6 digit number after decimal
                        // e.g  12.560000

//we can print two variable in one print statement
printf("\n%d %lf",number1,number2);

//To print only 2 decimal value we use .2  bfore formate specifier under quotation mark.
//e.g. printf("%lf",number2);
printf("\n%.2f\n",number2); 

// you can try out below statement :

printf("%.1lf\n",number2);
printf("%.3lf\n",number2);
printf("%.4lf\n",number2);
printf("%.5lf\n",number2);
printf("%.6lf\n",number2);
printf("%.7lf\n",number2);
printf("%.15lf\n",number2);
    return 0;
}


