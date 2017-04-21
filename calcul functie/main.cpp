#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double x, t1, t2;
   
   cout << "x= "; cin>>x;
   
   t1=fabs(2*x-1);
   t2=9-x*x;
   
   cout<<max(t1,t2)<<endl;
   
   return 0;
}