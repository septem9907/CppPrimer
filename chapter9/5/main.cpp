#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator findNum(vector<int>::iterator itBeg, vector<int>::iterator itEnd, int num)
{
	while (itBeg != itEnd)
	{
		if (*itBeg == num)
		    return itBeg;
		else
		    ++itBeg;
	}	
	return itEnd;
}

int main()
{
	int num = 5;
	
	vector<int> vec;
	cout << "please initilize the vector: ";
	int iNum;
	while (cin >> iNum)
	{
		vec.push_back(iNum);
	} 
	cout << "\n" << "vector is ready." << endl;
	
	vector<int>::iterator it = findNum(vec.begin(), vec.end(), num);
	it == vec.end() ? cout << "number is not found in the vector" : cout << "number is in the vector";
	
	return 0;
}
