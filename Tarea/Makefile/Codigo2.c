
#include <stdio.h>
#define NDEBUG

#include <assert.h>
 
int main()
{
     int    x, y;
    

     #if defined(NDEBUG)
     printf("NDEBUG is defined. Assert disabled,\n");
     #else
            printf("NDEBUG is not defined. Assert enabled.\n");
     #endif
    

     printf("Insert two integers: ");
     scanf("%i", &x);scanf("%i", &y);

     printf("Do the assert(x < y)\n");
    

     assert(x < y);
     if(x<y)
     {
            printf("Assertion not invoked because %i",x);printf(" < %i",y);
            printf("\nTry key in x > y, assertion will be invoked!\n");
     }
     else
            printf("Assertion invoked, program terminated!\n");
     return 0;
}

