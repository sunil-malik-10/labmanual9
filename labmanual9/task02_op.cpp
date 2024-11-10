#include <iostream>
using namespace std;
int reverse_string(string word)
{
    int count=0;
    
    while(word[count]!= '\0')
    {
        count=count+1;
        
    }
    count=count-1;
    
    for(int idx=count; word[idx] != '\0'; idx=idx-1)
    {
     cout<<word[idx];
        
    }
    return 0;
}
int main() 
{
    string word;
    cout<<"Enter a word:";
    cin>>word;
    cout<<"Reverse string:";
    reverse_string(word);
}
