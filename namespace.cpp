#include <iostream>
using  namespace std;

namespace area
{
    
    const double PI =3.14;
    double x =PI;
   
    
    
}
      
namespace circumference
{
    
    const double PI =3.14;
 double x = 2*PI;

}
int main()
{
    double x ;

    cout<<"want to proceed function for a circle?\n";
    cout<<"then\n";
    cout<<"type the following no. with the functions\n";
    cout<<"1. area\n";
    cout<<"2. circumference\n";
    cout<<"type 1 for area or 2 for circumference : -";
    cin >> x;

    
    if (x==1)
    {
       
     using namespace area;
       double radius;
       cout<<"radius :-";
       cin>>radius;
       
       cout <<" area of the circle is "<< area::x*radius*radius<<" cm sq.";
    
    }
    
    else if (x==2)
    
    {
       using namespace circumference;
       double radius;
       cout<<"radius :-";
       cin>>radius;
       
    
       cout<<" circumference of the circle is "<< circumference::x*radius<<" cm";
 
     

    }
    else
    {
        cout<<"enter the correct no.\n";
        cout<<"dont try to test me !!\n";
    }
    
    return 0;
}