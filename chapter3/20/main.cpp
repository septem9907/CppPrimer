#include <iostream>
#include <vector>

using namespace std;

void func1(vector<int> &vec_), func2(vector<int> &vec_);

int main()
{
	vector<int> vec;
	int num;
	while (cin >> num)
	    vec.push_back(num);
	cout << endl;
	
	/* question1 */
	func1(vec);	
	cout << endl;
	
	/* question2 */
	func2(vec);
	
	return 0;
}

void func1(vector<int> &vec_)
{
	for (unsigned i = 0; i < vec_.size() - 1; i++)
	    cout << vec_[i] + vec_[i + 1] << endl;
}

void func2(vector<int> &vec_)
{
	for (unsigned i = 0; i < vec_.size()/2; i++)
	    cout << vec_[i] + vec_[vec_.size() - 1 - i] << endl;
}
