// Write a program to assign values to double and char variables.
     // Problem Statement:
    // - Create a double variable named number with value 42.15
    // - Create a character variable named letter with value j
    // - Print both variable with spaces between them

//solution:
#include<stdio.h>
int main()
{
    double number = 42.15;
    char   letter = 'j';
    printf("%.2lf %c\n", number,letter);


// Try out:  Print-spaces in left & right direction
      //  ..
int num= 10;
// To print 8 spaces before 
printf("........%d\n",num);
//........10

// To print 8 spaces before 
printf("%10d\n",num);
//        10 
//..........

// To print 8 spaces after
printf("%-10d\n",num); 
//10        
//..........


    return 0;
}
