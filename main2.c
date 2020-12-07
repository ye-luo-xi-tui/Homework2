#include <stdio.h>
int main()
{
 int i; 
 int q;
 int a=15,b=15;
 for(i=1;i<=7;i++)
 {
   for(q=1;q<=i;q++)
   {
    printf("%d*%d=%d ",a,b,a*b);
    a+=10;
   }
   printf("\n");
   a=15;
   b+=10;
 }
 return 0;
}
