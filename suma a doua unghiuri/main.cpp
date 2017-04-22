#include <iostream>

using namespace std;

int main()
{
   unsigned g, m, s, g2, m2, s2, gt, mt, st;
   
   cout << "g= "; cin>>g;
   cout << "m= "; cin>>m;
   cout << "s= "; cin>>s;
   
   cout << "g2= "; cin>>g2;
   cout << "m2= "; cin>>m2;
   cout << "s2= "; cin>>s2;
   
   if(g > 360 || g2 > 360){ 
       cout<<"Un unghi nu poate avea mai mult de 360 grade."<<endl;
    } else if (m > 60 || m2 > 60) cout<<"Un unghi nu poate avea mai mult de 60 de minute."<<endl;
    else if (s > 60 || s2 > 60) cout<<"Un unghi nu poate avea mai mult de 60 de secunde."<<endl;
    else {
        cout << "Unghiul dvs. este "<<g<<" grade "<<m<<"\' "<<s<<"\" "<<endl;
        cout << "Unghiul dvs. este "<<g2<<" grade "<<m2<<"\' "<<s2<<"\" "<<endl;
        
        st = (s+s2)%60;
        mt = (s+s2)/60 + (m+m2)%60;
        gt = (m+m2)/60 + g+g2;
        
        cout << "Suma celor doua unghiuri este "<<gt<<" grade "<<mt<<"\' "<<st<<"\" "<<endl;
    }
   return 0;
}