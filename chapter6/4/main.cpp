#include <iostream>
using namespace std;

int fact(int);

int main()
{
	int val;
	cout << "please input an integer: " << endl;
	cin >> val;
	cout << "the result is: " << fact(val) << endl;
	return 0;
}

int fact(int val)
{
	int r;
	if (val > 1) 
		r = fact(val - 1) * val;
    else
        r = 1;
	return r;
}
