#include <iostream>

using namespace std;

int main()
{
   double a, b, c, delta;
   
   cout << "a= "; cin>>a;
   if(a==0){ 
       cout<<"Termenul a trebuie sa fie diferit de 0."<<endl;
    } else {
   
   cout<<"b= ";cin>>b;
   cout<<"c= ";cin>>c;
   
   delta = b*b-4*a*c;
   
   if(delta<0) cout<<"Ecuatia nu are solutii reale."<<endl;
    if(delta==0) cout<<"Ecuatia are doua solutii reale egale."<<endl;
    if(delta>0) cout<<"Ecuatia are doua solutii reale distincte."<<endl;
    }
   return 0;
}

