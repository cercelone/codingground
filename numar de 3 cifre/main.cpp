#include <iostream>

using namespace std;

int main()
{
   int x, a, b, c, aux, counter, test;
   
   cout << "x= "; cin>>x;
   
   test = x;
   while(test){
       test/=10;
       counter++;
   }
   
   if(counter !=3) {
       cout<<"Numarul trebuie sa fie format din 3 cifre."<<endl;
    }   else {
   
   c = x%10;
   x= x/10;
   b=x%10;
   a=x/10;
   
   if(b>a) {
       aux=a;
       a=b;
       b=aux;
   }
   
   if(c>b){
       aux = b;
       b = c;
       c = aux;
   }
   
   if(b>a){
       aux = a;
       a = b;
       b = aux;
   }
   
   x = a*10 + b;
   
   cout<<"x= "<<x<<endl;
       }
   
   return 0;
}

