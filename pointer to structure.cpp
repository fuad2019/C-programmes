#include <stdio.h>
#include <stdlib.h>

struct rectangle{
int length;
int breath;

};
int main()
{
   struct rectangle r={10,15};
   struct rectangle *p=&r;


   printf("b is %d and l is %d",p->breath,p->length);
   return 0;
}

