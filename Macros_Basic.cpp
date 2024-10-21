#include <iostream>
#include <string>
using namespace std;

#define ABS(Num) ((Num)<(0)? (-Num) : (Num))
#define MAX(a,b) ((a)>(b)? (a) : (b))

int main()
{
	cout << ABS(-3) << endl;
	cout << ABS(3) << endl;
	cout << MAX(2,5) << endl;
        cout << MAX(2,3) << endl;
}
