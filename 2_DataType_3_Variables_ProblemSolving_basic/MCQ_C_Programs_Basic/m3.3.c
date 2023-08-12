//What will be the output of the following code?
#include<stdio.h>
int main(void)
{
printf("%u\n",sizeof(34.45));  //8 

printf("%-10.2lf",42.5648979);//42.56.... 
printf("%10.2lf",42.5648979);//.....42.56
return 0;
}

//Solution: Ans. size for double data type is  - 8 byte.
// %u :  for unsign  (Only positive numbers)