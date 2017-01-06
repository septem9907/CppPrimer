#include <iostream>
#include <string>
#include <vector>
using namespace std;


inline bool CheckValidity(vector<int> &vec, int threshold)
{
	if (vec.size() > threshold)
	{
		cout << "invalid input!";
		return false;
	}
	return true;
}


void GetPentagonalSeries(vector<int> &vec, int threshold)
{
	bool flag = CheckValidity(vec, threshold);
	if (!flag)
	{
		cout << "see you.";
	}
	else
	{
        int val;

        for (int i=0; i!=vec.size(); ++i)
        {
            vec[i] = i * (3 * i - 1) / 2;
        }		
	}
	return;
	    
}

void DispVec(vector<int> &vec)
{
    for(int i=0; i<vec.size(); ++i)
    {
        cout << "The " << i << " element is: ";
        cout << vec[i] << '\n';
    }
    return;
}

int main()
{
    vector<int> vec(10, 0);

    int threshold = 50;
    GetPentagonalSeries(vec, threshold);

    DispVec(vec);

    int a;
    cin >> a;
    
    return 0;
}
