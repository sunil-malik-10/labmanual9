#include<iostream>
using namespace std;
main()
{
    int i = 0;
    string word;
    cout<<"Enter a string: ";
    getline(cin,word);

    for(i = 0; word[i] != '\0'; i++)
    {
        if(word[i] != 'z' || word[i] != 'Z')
        {
        int asciiCode = word[i];
        char nextAlpha = asciiCode + 1;
        cout<<nextAlpha;
        }
        if(word[i] == 'Z')
        {
            char nextAlpha = 65;
            cout<<nextAlpha;
        }
        if(word[i] == 'z')
        {
            char nextAlpha = 97;
            cout<<nextAlpha;
        }
    }

}