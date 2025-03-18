#include<iostream>
using namespace std;

int main()
{
    int score;
    cout<<"Enter score : ";cin>>score;
    if(score>=0&&score<=100)
        cout<<"OK\n";
    else
        cout<<"Invalid\n";
    return 0;
}