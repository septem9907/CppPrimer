#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	cout << "please enter 10 integers: ";
	int item;
	while (cin >> item){
		vec.push_back(item);
	}
	
	cout << "original vector: ";
	for (auto iter = vec.begin(); iter != vec.cend(); ++iter){
		cout << *iter << ' ';
	}
	cout << endl;
	
	cout << "new vector: ";
	for (auto iter = vec.begin(); iter != vec.cend(); ++iter){
		*iter *= 2;
		cout << *iter << ' ';
	}
	cout << endl;
	
	int a;
	cin >> a;
	
	return 0;
}