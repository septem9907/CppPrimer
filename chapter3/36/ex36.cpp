#include <iostream>
#include <vector>

using namespace std;

bool CompareArray(int* arr1, int* arr2)
{
	bool flag = 0;
	/*compare length*/
	auto sz1 = sizeof(arr1) / sizeof(*arr1);
	auto sz2 = sizeof(arr2) / sizeof(*arr2);
	if (sz1 != sz2){
		return flag;
	}
	else{
		for (unsigned i = 0; i < sz1; ++i){
			if ( *(arr1 + i) != *(arr2 + i) ){
				cout << *(arr1 + i) << ' ';
				cout << *(arr2 + i) << ' '; 
				return flag;
			}
		}
		flag = 1;
		return flag;
	}
}

bool CompareVector(vector<int> vec1, vector<int> vec2)
{
	bool flag = 0;
	if (vec1.size() != vec2.size()){
		return flag;
	}
	else{
		return flag;
	}
}

int main()
{
	constexpr size_t sz = 5;
	int arr1[sz] = {1, 2, 2, 4, 5};
	int arr2[sz] = {1, 2, 3, 4, 6};
	bool flag1 = CompareArray(arr1, arr2);
	if (flag1){
		cout << "same array";
	}
	else{
		cout << "different array";
	}
	vector<int> vec1(5, 1);
	vector<int> vec2(5, 1);
	bool flag2 = CompareVector(vec1, vec2);
	
	int a;
	cin >> a;
	return 0; 
}