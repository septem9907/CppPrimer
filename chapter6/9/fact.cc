# include "Chapter6.h"
using namespace std;

int fact(int val)
{
	int r;
	if (val > 1) 
		r = fact(val - 1) * val;
    else
        r = 1;
	return r;
}
