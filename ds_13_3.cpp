#include<iostream>
using namespace std;
int main()
{
    string user_name;
    int password;

    cout<<"Enter User name : ";cin>>user_name;
    cout<<"Enter Password  : ";cin>>password;

    if(user_name=="sw43"&&password==123)
    {
        cout<<"OK\n";
    }
    else{
        if(user_name=="sw43")
        {
            cout<<"Invalid Password\n";
        }
        else{
            if(password==123)
            {
                cout<<"Invalid User Name\n";
            }
            else{
                cout<<"Invalid Both\n";
            }
        }
    }
    return 0;
}