#include <iostream>
#include <string>
using namespace std;

bool myIsUpper(const string s)
{
	for (auto item : s)
		if (isupper(item))
		    return true;		    
	return false;
}

void myToLower(string &s)
{
	for (auto &item: s)
	    if (isupper(item))
	        item = tolower(item);
}

int main()
{
	string s;
	bool flag;
	cout << "input a string: ";
	while (cin >> s)
	{
	    cout << "original string: " << s << endl;
	    
	    flag = myIsUpper(s);
	    
	    if (flag)
	    {
	        cout << "this string is with upper case" << endl;
	        myToLower(s);
	        cout << "new string: " << s;
	    }
	    else
	        cout << "no upper letter in this string";
	}
	    
	return 0;
}

