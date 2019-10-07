#include<iostream>

using namespace std;

int main()
{
	int count;
	cout << "Enter Number of rows : " ;
	cin >> count;
	int columns = 2 * count + 1;
	
	for (int i=0;i<count;i++)
	{
		for  (int j=0;j<columns;j++)
		{
			if (j<=(count-i) || j > (count+i+1))
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
}
