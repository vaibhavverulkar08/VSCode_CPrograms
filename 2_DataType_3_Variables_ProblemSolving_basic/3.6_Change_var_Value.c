// Here we discuss a program : if we change variable value, what should be output?

// Try out :

#include <stdio.h>
int main(){
int value;

value =20; 
printf("%d\n", value); // print: 20

value=25;
printf("%d\n", value);  // Output ..???  print: 25

// Uncomment below code to try out , comments previous two line of code
//int value = 30; // NOt OK
//printf("%d\n", value);

// Here we can't Declare  same variable on multiple times it gives Runtime Error

return 0;
}

// Remember:
// if we write code , Outside main function it will give comiple time Error:
// Always Write code inside main() function within body 
//i.e.  inside curly bracket {..} of main() function

// Try out:Uncomment below code & Run , it gives Error:
//int num=10;
//num=20;
 
