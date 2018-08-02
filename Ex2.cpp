#include<iostream>
using namespace std;
struct time
 {
     int hours;
     int minutes;
     int seconds;
     long totalsecs;
 };
int main()
{
    time t1;
    cout<<"Enter the number of hours in 12 hour clock format:"<<endl;
    cin>>t1.hours;
    cout<<"Enter the number of minutes:"<<endl;
    cin>>t1.minutes;
    cout<<"Enter the number of seconds:"<<endl;
    cin>>t1.seconds;
    t1.totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    cout<<"The time in 12 hour format is "<<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds<<endl;
    cout<<"The total number of seconds is "<<t1.totalsecs<<" sec"<<endl;
    cout<<"Thank you";
    return 0;
}
