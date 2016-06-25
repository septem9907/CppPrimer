#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vec;
	string s;
	
	while (cin >> s)
	    vec.push_back(s);
	
	for (auto &strItem : vec)
	{
		for (auto &charItem : strItem)
		    charItem = toupper(charItem);
	    cout << item << endl;
	}    
	return 0;
	    
}
