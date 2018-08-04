#include<iostream>
using namespace std;

class PhoneCall{
    string pNumb;
    float minute;
    float rate;
public:
    void setPNumb(string n){
        pNumb = n;
    }
    void setMinute(float m){
        minute = m;
    }
    string getPNumb(){
        return pNumb;
    }
    PhoneCall(){
        rate = 0.60;
    }
    float Rate(float temp2){
        float R;
        R = rate * temp2;
        return R;
    }
    int operator== (PhoneCall p){
        int k;
        k = bool(p.pNumb == pNumb);
        return k;
    }
};

int main(){
    PhoneCall p[10],p1;
    string temp,temp1;
    float temp2;
    for(int i=0;i<10;i++){
        cout<<"Call to Phone Number "<<i+1<<" : ";
        cin>>temp;
        p1.setPNumb(temp);
        temp1 = temp;
        p[i].setPNumb(temp1);
        for(int j=i-1;j>=0;j--){
            if(p1 == p[j]){
                Again:
                cout<<"You have already called this Phone Number "<<endl;
                cout<<"Enter a new number : ";
                cin>>temp;
                p1.setPNumb(temp);
                temp1 = temp;
                p[i].setPNumb(temp1);
                for(int j=i-1;j>=0;j--){
                    if(p1 == p[j])
                        goto Again;
                }
            }
        }
        cout<<"Call Duration : ";
        cin>>temp2;
        p[i].setMinute(temp2);
        cout<<"\nCall done\n"<<endl;
        cout<<"Last Call Charge : Rs."<<p[i].Rate(temp2)<<"\n\n";
        cout<<"\t\t******************\n"<<endl;
    }
}

