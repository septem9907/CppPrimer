#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    s1 = "XJ";
    s2 = "MJ";

    if (s1 == s2){
        cout << "Two strings are same: " << s1 << endl;
    }
    else{
        if (s1 > s2){
            cout << "The larger string is: " << s1 << endl;
        }
        else{
            cout << "The larger string is: " << s2 << endl;
        }
    }

    int a;
    cin >> a;

    return 0;
}