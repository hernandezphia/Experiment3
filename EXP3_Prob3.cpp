#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char arr[50];
    int size;
    cout << "Enter array size: ";
    cin >> size;
    
    cout << "Input characters: ";
    for(int a = 0; a < size; a++)
    {
        cin >> arr[a];
    }
    
    cout << endl;
    cout << "Reversing..." << endl;
    
    for(int a = size - 1; a >= 0; a--)
    {
        cout << arr[a];
    }
    
    cout << "\n\nArray Size: " << size << endl << endl;
    
    _getch();
    return 0;
}
