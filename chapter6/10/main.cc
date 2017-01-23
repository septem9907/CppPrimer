#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2)
{
	int tmp;
	tmp = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = tmp; 
}

int main()
{
	int val1, val2;
	cout << "input 2 numbers: ";
	cin >> val1 >> val2;
	cout << "original numbers are " << val1 << " " << val2 << endl;
	swap(&val1, &val2);
	cout << "after swap: " << val1 << " " << val2 << endl;
	return 0;
}
