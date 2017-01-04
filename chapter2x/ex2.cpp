#include <iostream>
#include <vector>
#include <string>
using namespace std;

void GetPentagonalSeries(vector<int> &vec)
{
    // check
    int threshold = 50;
    if (vec.size() > threshold)
    {
        cout << "invalid input";
        return;
    }

    int val;

    for (int i=0; i!=vec.size(); ++i)
    {
        vec[i] = i * (3 * i - 1) / 2;
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

    GetPentagonalSeries(vec);

    DispVec(vec);

    int a;
    cin >> a;
    
    return 0;
}
