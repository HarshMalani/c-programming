#include<iostream>
using namespace std;
  int main(){
        int x,y,z,i,j;
        x=4;
        y=1;
        z=0;
        while(z<5)
        {
        i=0;
        while(i<x)
        {
        cout<<" ";
        i++;
        }
        j=0;
        while(j<y)
             {

            cout<<"* ";
            j++;
            }
            x--;
            y++;
            z++;
            cout<<"\n";
         }
         return 0;
}

