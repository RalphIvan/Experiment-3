#include<iostream>
using namespace std;

int main()
{
	char element[50];
	int i, j, n, temp;
	
	cout << "Enter No. of Elements: ";
	cin >> n;
	cout << "\r" << endl;
	
	for (i=0; i<n; i++)
	{
		cout << "Enter Element No." << i+1 << ": ";
		cin >> element [i];
	}
	
	j=i-1;
	
	for (i=0; i<j; i++)
	{
	temp = element [i];
	element [i] = element [j];
	element [j] = temp;
	j--;
    }
    
    cout << "\r" << endl;
    cout << "Reverse of Array Elements: ";
    
    for (i=0; i<n; i++)
    {
    	cout << element[i] << "  ";
	}
	cout << "\n";
	cout << "Array Size: " << n << endl;
	

	return 0;
}
