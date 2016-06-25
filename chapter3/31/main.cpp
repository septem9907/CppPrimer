#include <iostream>

using namespace std;

int main()
{
	constexpr size_t n = 10;
	int ia[n];
	
	cout << "array ia: ";
	for (unsigned i = 0; i < n; ++i)
	{
	    ia[i] = i;
	    cout << ia[i] << ' ';	
	}
	
	/* exercise 3.32 */
    cout << endl;
    
	int ib[n];
	cout << "array ib: ";	
	for (unsigned j = 0; j < n; ++j)
	{
		ib[j] = ia[j];
		cout << ib[j] << ' ';
	}
	
	return 0;
}

