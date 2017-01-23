#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
	string s;
	deque<string> deq;

	cout << "input string to generate deque: ";
	while (cin >> s)
	{
		deq.push_back(s);
	}
	cout << "deque is ready" << endl;

    //for (auto s : deq)
	//
		//cout << s << " ";
	//
	
	for (deque<string>::iterator iter = deq.cbegin(); iter != deq.cend(); ++iter)
	{
		cout << *iter << " ";	
	}
	
	return 0;
		 

}
