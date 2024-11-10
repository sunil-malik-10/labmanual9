#include <iostream>
using namespace std;
int reverse_num(int number)
{
    int count=0;
    int x;
    while(x[number]!= '\0')
    {
        count=count+1;
        
    }
    count=count-1;
    
    for(int idx=count; number[idx] != '\0'; idx=idx-1)
    {
     cout<<number[idx];
        
    }
    return 0;
}
int main() 
{
    int elements;
    int number;
    cout<<"Enter a number of elements:";
    cin>>elements;
    cout<<"Enter " << elements<<"numbers,one per line:";
    cin>>number;
    reverse_num(number);
}
