#include <iostream>
#include <vector>
#include <string>
using namespace std;

void GetPentagonalSeries(vector<int> &vec)
{
    // check
    threshold = 50;
    if vec.size() > threshold
    {
        return;
    }

    double val;
    
    for (int i=0; i<vec.size(); ++i)
    {
        val = i * (3 * i - 1) / 2;
        vec.push_back(val);
    }

    return;
}

void DispVec(const vector<int> &vec)
{
    for(int i=0; i<vec.size(); ++i)
    {
        cout << "The " << i << " element is: "
        cout << item << '\n';
    }
    return;
}

int main()
{
    vector<int> vec;
    
    GetPentagonalSeries(vec);
    
    DispVec(vec);

    return 0;
}