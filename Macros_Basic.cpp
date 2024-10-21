#include <iostream>
#include <string>
using namespace std;

#define ABS(num) ((num)<(0)? (-num) : (num))
#define MAX(a,b) ((a)>(b)? (a) : (b))
#define MIN(a,b) ((a)<(b)? (a) : (b))

int main()
{
	cout << ABS(-3) << endl;
	cout << ABS(3) << endl;
        cout << MAX(2,3) << endl;
	cout << MIN(2,3) << endl;
}
