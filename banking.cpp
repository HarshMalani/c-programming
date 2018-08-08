#include<iostream>
using namespace std;
class account
{
int balance,acc_no;

public:
account()
{

     balance=500;


}

void createacc(int a)
{

    acc_no=1000+a;
    cout<<"\nAccount created with account number : "<<acc_no;
}
int get_no()
{
     return acc_no;
}

void bal_enq()
{
    cout<<"\nAccount Balance : "<<balance;
}



void deposit()
{
    int money;
    cout<<"\nEnter the amount you wish to deposit : ";
    cin>>money;
    balance+=money;
}


void withdraw()
{
    int money;
    cout<<"\nEnter the amount you wish to withdraw : ";
    cin>>money;

    if((balance-money)<=500)
        cout<<"minimum balance";
    else
       balance-=money;
}

}A[10];

int main()
{
int choice=0,acc_number,temp,i=0,j;
    do
    {
        cout<<"\n\n\t\tBANK MENU\n\n1.Account Creation\n2.Balance enquiry\n3.Deposit\n4.Withdrawal\n5.Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;


        switch(choice)
        {
            case 1:
                A[i].createacc(i);
                i++;
                break;
            case 2:
            cout<<"Enter your account number : ";
                cin>>acc_number;
                for(j=0;j<=i;j++)
                    {
                        temp=A[j].get_no();
                        if(temp==acc_number)
                            A[j].bal_enq();
                    }
                break;
            case 3:
                cout<<"Enter your account number : ";
                cin>>acc_number;
                for(j=0;j<=i;j++)
                    {
                        temp=A[j].get_no();
                        if(temp==acc_number)
                            A[j].deposit();
                    }
                break;
        case 4:
                cout<<"Enter your account number : ";
                cin>>acc_number;
                for(j=0;j<=i;j++)
                    {
                        temp=A[j].get_no();
                        if(temp==acc_number)
                            A[j].withdraw();
                    }
                break;
        case 5:
            break;
        default:
            cout<<"\nInvalid input. Try again";
        }
    }while(choice!=5);
}
