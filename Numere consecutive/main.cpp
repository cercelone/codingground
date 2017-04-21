#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int a, b;
   
cout <<"a= "; cin>>a;
cout <<"b= "; cin>>b;

   if(a==b+1 || a==b-1) cout<<"Numerele sunt consecutive."<<endl;
   else cout<<"Numerele nu sunt consecutive."<<endl;
   
   return 0;
}