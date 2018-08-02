#include<iostream>
using namespace std;
class polygon
 {
   public:
     virtual void area()=0;
 };
class triangle:public polygon
 {
   public:
     int b,h;
     float ar;
   void area()
    {
      cout<<"\nENTER THE BASE:";
      cin>>b;

      cout<<"\nENTER THE HEIGHT:";
      cin>>h;

      ar=0.5*b*h;
      cout<<"\nAREA IS:"<<ar;

    }
 };
class rect:public polygon
 {
    public:
     int b,l;
     float ar;
   void area()
    {
      cout<<"\nENTER THE LENGTH:";
      cin>>l;

      cout<<"\nENTER THE BREADTH:";
      cin>>b;

      ar=l*b;
      cout<<"\nAREA IS:"<<ar;

    }
 } ;
 int main()
 {
     polygon *p;
     int ch=1;

     while(ch>0&&ch<3)
     {
        cout<<"\n1.for area of triangle \n2.area of rectangle \n3.Exit\n";
        cin>>ch;
        switch(ch)
        {
          case 1:
            cout<<"area of triangle \n"<<endl;
            p=new triangle();
            p->area();
            break;
          case 2:
            cout<<"area of rectangle \n"<<endl;
            p=new rect();
            p->area();
            break;
        }
     }


 }
