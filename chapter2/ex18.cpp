#include <iostream>
using namespace std;

int main()
{
  int i = 42;
  int *p = &i;
  *p = *p * *p;
  cout << "i = " << i << endl;

  int a;
  cin >> a;

  return 0;
}
