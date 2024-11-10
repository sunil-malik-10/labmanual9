#include <iostream>
using namespace std;
int special_array(int elements)
{
     cout<<"Enter "<<elements<<" elements of the array:";
     cout<<endl;
     int number[elements];
     int i;
     for(i = 0; i < elements; i++) {
        cin >> number[i];
    }
    
    for(i = 0; i < elements; i++) {
        if(number[i] % 2==0) {
            return true;
        }
    }
    return false;
}
int main() 
{
    int elements;
    int number;
    cout<<"Enter a number of elements:";
    cin>>elements;
     if (special_array(elements)) {
        cout << "This is a special array";
    } else {
        cout << "This is not a special array";
    }
    
    return 0;
    
}
