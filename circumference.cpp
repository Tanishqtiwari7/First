#include <iostream>
using namespace std;
int main()
{
    double radius,circumference;
    const double PI = 3.14; 
    cout<<"radii :-";
    cin>>radius;
    
    circumference = 2* PI* radius;
    cout<<circumference<<" cm";
    return 0;

}