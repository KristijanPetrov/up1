#include <iostream>

using namespace std;

int main()
{
	int a[10], x;
	int count = 10;
	for (int i = 0; i < count; i++)
	{
		cout << "Element #" << i << " = ";
		cin >> a[i];
	}
	cout << "Number = ";
	cin >> x;
	int index;
	for (int i = 0; i < count; i++) {
		index = i;
		if (a[i] == x) {
			for (;index < count - 1;index++) {
				a[index] = a[index + 1];	
			}
			a[9] = -1;
			i--;
		}
	}	
	for (int i = 0; i < count; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	system("PAUSE");
	return 0;
}