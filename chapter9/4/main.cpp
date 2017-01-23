#include <iostream>
#include <vector>

using namespace std;

bool findNum(vector<int>::iterator itBeg, vector<int>::iterator itEnd, int num)
{
	while (itBeg != itEnd)
	{
		if (*itBeg == num)
		    return true;
		else
		    ++itBeg;
	}	
	return false;
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
	
	bool flag = findNum(vec.begin(), vec.end(), num);
	flag ? cout << "number is found in the vector" : cout << "number is not in the vector";
	
	return 0;
}
