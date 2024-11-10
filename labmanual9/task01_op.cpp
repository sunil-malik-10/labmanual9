#include <iostream>
using namespace std;
int printPosition(string word)
{
    
    for(int idx=0; word[idx] != '\0'; idx=idx+1)
    {
     cout<<word[idx]<<" is on the position "<<idx<<endl;
        
    }
}
int main() 
{
    string word;
    cout<<"Enter a word:";
    cin>>word;
    printPosition(word);
}
