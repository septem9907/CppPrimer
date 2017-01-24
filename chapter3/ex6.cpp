#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "WhatTheFuck";
    
    for (auto &c : s){
        c = 'X';
    }
    
    cout << "What the fuck! " << s << endl;

    int a;
    cin >> a;

    return 0;
}