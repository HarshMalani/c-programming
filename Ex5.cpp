#include<iostream>
using namespace std;
class Student
{
    int stdId;
    string stdName;
    static int count;

public:
    Student(){
    count++;
    }
    getCountOfObjects(){
    return count;
    }
};
int Student::count=0;
int main()
{
    Student s1,s2;
    cout<<"No. of objects:"<<s1.getCountOfObjects()<<endl;
    cout<<"No. of objects:"<<s2.getCountOfObjects()<<endl;
}
