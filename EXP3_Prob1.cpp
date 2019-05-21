#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main ()
{
    int index, lIndex, sIndex, integer[10], l, s, sum;
    double average;
    
    cout << "Enter 10 values: " << endl;
    
    for (index = 0; index < 10; index++)
        integer[index] = 0.0;
    
    for (index = 0; index < 10; index++)
        cin >> integer[index];
    
    sum = 0;
    for (index = 0; index < 10; index++)
        sum = sum + integer[index];
    
    average = sum / 10.0;
    
    lIndex = 0;
    for (index = 1; index < 10; index++)
        if (integer[lIndex] < integer[index])
            lIndex = index;
    l = integer[lIndex];
    
    sIndex = 0;
    for (index = 0; index < 10; index++)
        if (integer[sIndex] > integer[index])
            sIndex = index;
    s = integer[sIndex];
    
    cout << "\nSmallest integer = " << s << endl;
    cout << "Largest integer = " << l << endl;
    cout << "Total = " <<  sum << endl;
    cout << "Average = " << fixed << setprecision(2) << average << endl << endl;
    
    _getch();
    return 0;
}
