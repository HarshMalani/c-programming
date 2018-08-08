#include<iostream>
using namespace std;
#define cm 2.54
#define inch 12
main()
{
    int f,n,s,p,t;
    cout<<"enter the length in feet and inches";
    cin>>f>>n;
    s=f*inch;
    p=s+n;
    t=p*cm;
    cout<<"your length is"<<t<<"centimeter";
    return 0;

}
