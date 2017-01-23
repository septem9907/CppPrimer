#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	string s;
	list<string> l;

	cout << "input string to generate deque: ";
	while (cin >> s)
	{
		l.push_back(s);
	}
	cout << "list is ready" << endl;

    //for (auto s : deq)
	//
		//cout << s << " ";
	//
	
	for (list<string>::iterator iter = l.cbegin(); iter != l.cend(); ++iter)
	{
		cout << *iter << " ";	
	}
	
	return 0;
		 

}
