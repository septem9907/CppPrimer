#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Keep it simple, stupid!!!";
    for (auto &c : s){
        if (!ispunct(c)){
            cout << c;
        }
    }
    cout << endl;
 
    int a;
    cin >> a;

    return 0;
}