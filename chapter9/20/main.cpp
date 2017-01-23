#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
	list<int> l;
	deque<int> deq1, deq2;
	
	// initialize list l
	cout << "initialize list l: ";
	int num;
	while (cin >> num) 
		l.push_back(num);
	cout << "list l is ready" << endl;
	
	// distribute the elements of l to deq1 and deq2
	for (auto num : l)
		(num%2 == 0) ? deq2.push_back(num) : deq1.push_back(num);		
	cout << "distribute process is done" << endl;
	
	// output
	cout << "odd numbers: ";
	for (auto num : deq1)
		cout << num << " ";
	cout << endl;
	cout << "even numbers: ";
	for (auto num : deq2)
		cout << num << " ";
	
	return 0;
	
	
}
