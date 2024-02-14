//WAP in c++ to Swap values of 2 numbers without using third variable

#include<iostream>
using namespace std ;
int main ()
{
    int x , y ;
    cout<<"Enter two numbers : " ;
    cin>>x>>y ;
    cout<<"x="<<x<<" y="<<y<<endl ;

    x = x+y ;
    y = x-y ;
    x = x-y ;

    cout<<"x="<<x<<" y="<<y ;
    return 0 ;

}
