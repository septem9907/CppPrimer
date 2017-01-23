#include <iostream>
using namespace std;

unsigned myCnt();

int main()
{
	cout << "enter a letter: " << endl;
	char c;
	while (cin >> c)
	{
		cout << "number of times for this function: " << myCnt() << endl;
	}
	return 0;
}

unsigned myCnt()
{
	static unsigned counter = -1;
	++counter;
	return counter;
}
