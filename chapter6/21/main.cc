#include <iostream>
using namespace std;

int compareNum(const int num, const int *ptr)
{
	return (num > *ptr) ? num : *ptr;
}


int main()
{
	int num1, num2, bigNum;
	cin >> num1 >> num2;
	bigNum = compareNum(num1, &num2);
	cout << bigNum;
	return 0;	
}
