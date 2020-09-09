
#include <iostream>
   using namespace std;
#include <assert.h>
#include "string"
//Cambio manual dentro del código
#define Foo 0
#define Bar 1

#ifdef Foo
#ifdef Bar
#endif
#endif

       #if Bar
              #define DEBUG 
       #endif       
       #if Foo
              #define NDEBUG
       #endif


int main()
{
       int x, y;

       //intento de generar cambios en la definición
       /*int n;
       string n2="me";
     
       cout<<"Quieres activar el NDEBUG: [Yes] or [No]"<<endl;
       cin>>n;
       if(n ==1){
              n2 = "NDEBUG";
       }else if(n=='0'){
              n2= "DEBUG";
       }
       cout<<"0w0/"<<n2<<endl;

       #define n2
       */


     #if defined(NDEBUG)
     cout<<"NDEBUG is defined. Assert disabled,\n";
     #else
            cout<<"NDEBUG is not defined. Assert enabled.\n";
     #endif
    

     cout<<"Insert two integers: ";
     cin>>x>>y;
     cout<<"Do the assert(x < y)\n";
    

     assert(x < y);
     if(x<y)
     {
            cout<<"Assertion not invoked because "<<x<<" < "<<y<<endl;
            cout<<"Try key in x > y, assertion will be invoked!"<<endl;
     }
     else
            cout<<"Assertion invoked, program terminated!"<<endl;
            
     return 0;
}

