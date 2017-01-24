#include <iostream>
using namespace std;

int main()
{
	constexpr size_t sz = 5;
	int a[sz] = {2, 4, 6, 8, 10};
	for (unsigned i = 0; i < sz; ++i){
		cout << a[i] << ' ';
		*(a + i) = 0;
	}
	cout << endl;
	
	for (auto item : a){
		cout << item << ' ';
	}
	
	int b;
	cin >> b;
	
	return 0;
}