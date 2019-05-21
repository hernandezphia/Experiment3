#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    double tempPA[7], tempPB[7], tempPC[7];
    
    cout << "Enter all temperature for a week of Province A, Province B, and then Province C." << endl << endl;
    
    for(int i = 0; i < 7; i++)
    {
        cout << "Province A, Day " << i + 1 << ": ";
        cin >> tempPA[i];
    }
    
    for(int i = 0; i < 7; i++)
    {
        cout << "Province B, Day " << i + 1 << ": ";
        cin >> tempPB[i];
    }
    
    for(int i = 0; i < 7; i++)
    {
        cout << "Province C, Day " << i + 1 << ": ";
        cin >> tempPC[i];
    }
    
    cout << "\nDisplaying Values: " << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << "Province A, Day " << i + 1 << " = " << tempPA[i] << endl;
    }
    for(int i = 0; i < 7; i++)
    {
        cout << "Province B, Day " << i + 1 << " = " << tempPB[i] << endl;
    }
    for(int i = 0; i < 7; i++)
    {
        cout << "Province C, Day " << i + 1 << " = " << tempPC[i] << endl;
    }
    
    cout << endl;
    
    _getch();
    return 0;
}
