#include<stdio.h>
int main(void)
{
char c1='Z';
printf("%d\n",c1);
printf("%c\n",c1);
printf("%c\n",57);
printf("%d\n",'9');
printf("%d\n",32);

printf("%d\t%c\t%o",c1-57,c1-'9',c1-32);

return 0;
}
//Output:
//65      A       132