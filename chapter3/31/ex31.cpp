#include <iostream>
#include <vector>

using namespace std;

int* SetArray(const int numOfArray)
{
	//const int numOfArray = 10;
	int a[numOfArray];
	for (unsigned i = 0; i < numOfArray; ++i){
		a[i] = i;
		cout << a[i] << ' ';
	}
	cout << endl;
	
	return a;
	
}

vector<int> SetVector(int* a, const int numOfArray)
{
	vector<int> vec;
	for (unsigned i = 0; i < numOfArray; ++i){
		vec.push_back( *(a+i) );
		cout << vec[i] << ' ';
	}
	cout << endl;
	
	return vec;
}


int main()
{
	const int numOfArray = 10;
	
	int *aptr;
	aptr = SetArray(numOfArray);
	
	vector<int> vec = SetVector(aptr, numOfArray);
	
	int a;
	cin >> a;
	
	return 0;
}