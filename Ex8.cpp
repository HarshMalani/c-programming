#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int i,j,temp;
    char str[100]={"This is a pattern matching"};
    char substr[20]={"pattern"};

     for(i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==substr[j])
        {
            temp=i+1;
            while(str[i]==substr[j])
            {
                i++;
                j++;
            }

            if(substr[j]=='\0')
            {
                cout<<"The substring is present in given string at position "<<temp<<"n";
                exit(0);
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
    }

    if(temp==0)
        cout<<"The substring is not present in given stringn";

    return 0;
}


#include<iostream>
using namespace std;

void seek(char str1[],char str2[]){

     //char str1[80], str2[80
    int l = 0; //Hold length of second string

                                        //finding length of second string
    for(l = 0; str2[l] != '\0'; l++);

    int i, j;
    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == l)
        cout<<"Substring found at position "<< i - j + 1;
    else
        cout<<"Substring not found";


}

    char str1[80], str2[80];
    cout<<"Enter  string: "<<endl;
    cin.getline(str1, 80);

    cout<<"Enter second string: "<<endl;
  cin.getline(str2, 80);
    seek(str1,str2);
}
