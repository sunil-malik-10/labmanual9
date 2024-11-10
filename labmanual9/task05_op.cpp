#include <iostream>
using namespace std;
int main() 
{
    int limit;
    cout<<"ENTER HOW MUCH NUMBER YOU WANT TO ENTER:";
    cin>>limit;
   int number[limit];
   int idx;
   
   for(idx=1;idx<=limit;idx=idx+1)
   {
       cout<<"Enter "<<idx<<" number:";
       cin>>number[idx];
      
   }
   for(int x=1;x<=limit;x=x+1)
   {
       cout << "The "<<x<<" number you entered is: " << number[x] <<endl;
       
   }
}