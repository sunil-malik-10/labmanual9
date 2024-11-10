#include <iostream>
using namespace std;
int main() 
{
   int number[5];
   for(int idx=1;idx<5;idx=idx+1)
   {
       cout<<"Enter "<<idx<<"st number:";
       cin>>number[idx];
   }
   cout<<"The 1st number you entered is :"<<number[1]<<endl;
   cout<<"The last number you entered is:"<<number[4];
    
}