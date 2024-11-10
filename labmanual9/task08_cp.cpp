#include <iostream>
using namespace std;
int main() {
    int elements1, elements2;

    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> elements1;
    
    int number1[elements1];
    cout << "Enter " << elements1 << " elements for the first array, one per line:" << endl;
    for (int idx1 = 0; idx1 < elements1; idx1++) 
    {
        cin >> number1[idx1];
    }

    cout << "Enter the number of elements for the second array: ";
    cin >> elements2;
    
    int number2[elements2];
    cout << "Enter " << elements2 << " elements for the second array, one per line:" << endl;
    for (int idx2 = 0; idx2 < elements2; idx2++)
    {
        cin >> number2[idx2];
    }

    int totalSize = elements1 + elements2;
    int resultingArray[totalSize];
    int midIndex = elements1 / 2;

    for (int i = 0; i < midIndex; i++)
    {
        resultingArray[i] = number1[i];
    }

    for (int i = 0; i < elements2; i++) 
    {
        resultingArray[midIndex + i] = number2[i];
    }

    for (int i = midIndex; i < elements1; i++) 
    {
        resultingArray[elements2 + i] = number1[i];
    }

    cout << "Resulting array: [";
     for (int i = 0; i <= 0; i++) 
    {
        cout << resultingArray[i];
    }
    for (int i = 1; i < totalSize; i++) 
    {
        cout<<",";
        cout << resultingArray[i];
    }
    cout<<"]";
    

    return 0;
}