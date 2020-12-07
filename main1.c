#include <stdio.h>
int main()
{
  unsigned char mess;
  while( scanf("%hhu",&mess)==1)
 {
  if(mess<=127)
  {
    printf("male %d",mess);
  }
  else
    {
    printf("female %d",mess-128);
    }	  
 }
  return 0;
}
