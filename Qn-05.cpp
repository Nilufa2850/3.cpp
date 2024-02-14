//WAP in c++ to add all the numbers of an array of size 10.

#include<iostream>
using namespace std ;
int main ()
{
    int ary[10] ;
    int i, sum=0 ; 

    cout<<"Enter 10 values of an array : "<<endl ;
    for (i=0 ; i<10 ; i++)
        cin>>ary[i] ;
    
    for (i=0 ; i<=9 ; i++)
        sum+=ary[i] ;
    
    cout<<"Sum is "<<sum ;
    return 0 ;

}
