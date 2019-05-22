#include <iostream>
using namespace std;

int main()
{
    int i;
	double values[10];
    double sum = 0;
    double average, highest, lowest;
    
    
    cout << "Enter 10 Values: \n";
     
    for (int i = 0; i < 10; i++)
    {	
		cin >> values[i];
		sum = sum + values[i];	
    }
    
    average = sum/10;
   
    highest = values[0];
    lowest = values[0];
    
    for (int i = 0; i < 10; i++)
    {	
		if (values[i] <= lowest)
		lowest = values[i];
		
		if (values[i] >= highest)
		highest = values[i];
    }	
    
    cout << "\n\nLowest Integer: " << lowest << endl;
    cout << "Largest Integer: " << highest << endl;
	cout << "Total: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}
