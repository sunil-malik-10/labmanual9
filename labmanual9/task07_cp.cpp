#include <iostream>
using namespace std;
float totalResistance(int numberOfresistors)
{
     cout<<"Enter the resistance values (in ohms) of the "<<numberOfresistors<<" resistors, one per line : ";
     cout<<endl;
    float number[numberOfresistors];
    float sum=0;
    int i;
     for(i = 0; i < numberOfresistors; i++) 
    {
        cin >> number[i];
        sum+=number[i];
    }
    return sum;
 
}
int main() 
{
    int numberOfresistors;
    cout<<"Enter a number of resistors in the series circuit: ";
    cin>>numberOfresistors;
    float RT=totalResistance(numberOfresistors);
    cout<<"The total resistance of the series circuit is "<<RT<<" ohms.";
}
