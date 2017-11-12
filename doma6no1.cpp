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
			//или a[9] = -1;  без count-- и последния for
			i--;
			count--;
		}
	}	
	for (int i = 0; i < count; i++) {
		cout << a[i] << " ";
	}
	for (;count < 10;count++) {
		cout << -1 << " ";
	}
	cout << endl;

	system("PAUSE");
	return 0;
}
