#include <iostream>
using namespace std;
int find_largest(int elements)
{
    int number[elements];
    cout<<"Enter "<<elements<<" numbers ,one per line:";
    cout<<endl;
    int idx;
    for(idx=0;idx<elements;idx=idx+1)
    {
        cin>>number[idx];
        
    }
    int largest = number[0];
    for(idx=0;idx<elements;idx=idx+1)
    {
      if(number[idx] > largest)
        {
            largest = number[idx];
        }
    }
    return largest;
     
}
int main() 
{
    int elements;
    cout<<"Enter the number of elements : ";
    cin>>elements;
    int largest=find_largest(elements);
    cout<<"The largest number entered is:"<<largest;
}
