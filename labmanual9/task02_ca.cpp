#include <iostream>
using namespace std;
int main() 
{
    cout<<"        ENTER 5 ELEMENTS    "<<endl;
    int element[5];
    for(int idx=0;idx<5;idx=idx+1)
    {
    cout<<"ENTER "<<idx+1<<" ELEMENT:";
    cin>>element[idx];
    }
cout<<"THE 2ND ELEMENT IS :"<<element[1]<<endl;
cout<<"THE 4TH ELEMENT IS :"<<element[3]<<endl;
}