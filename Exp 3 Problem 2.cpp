#include <iostream>
using namespace std;


int main()
{
	const int province = 1;
    const int week = 7;
    string letters[3]={"A", "B", "C"};
    
	int temperature[province][week];

    cout << "Enter all temperature for a week of Province A, Province B, and Province C. \n";

    for (int i = 0; i < province; ++i)
    {
        for(int j = 0; j < week; ++j)
        {
            cout << "Province " << letters[0] << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }
    for (int k = 0; k < province; ++k)
    {
        for(int l = 0; l < week; ++l)
        {
            cout << "Province " << letters[1] << ", Day " << l + 1 << " : ";
            cin >> temperature[k][l];
        }
    }
    for (int m = 0; m < province; ++m)
    {
        for(int n = 0; n < week; ++n)
        {
            cout << "Province " << letters[2] << ", Day " << n + 1 << " : ";
            cin >> temperature[m][n];
        }
    }


    cout << "\n\nDisplaying Values:\n";

    for (int i = 0; i < province; ++i)
    {
        for(int j = 0; j < week; ++j)
        {
            cout << "Province " << letters[0] << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
    for (int k = 0; k < province; ++k)
    {
        for(int l = 0; l < week; ++l)
        {
            cout << "Province B" << letters[1] << ", Day " << l + 1 << " = " << temperature[k][l] << endl;
        }
    }
    for (int m = 0; m < province; ++m)
    {
        for(int n = 0; n < week; ++n)
        {
            cout << "Province C" << letters[2] << ", Day " << n + 1 << " = " << temperature[m][n] << endl;
        }
    }
    return 0;
}
