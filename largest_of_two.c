#include <stdio.h>
int main(){
  int a ,b;
printf("enter two numbers:");
scanf("%d %d", &a,&b);

if (a > b)
{
printf("%d is greater\n ,a");
}
else if (b > a)
{
printf("%d is greater\n ,b");
}
else
{
printf(" both number are equal\n");
}
return 0;
}
  
