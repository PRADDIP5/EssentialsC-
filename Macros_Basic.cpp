#include <iostream>
#include <string>
using namespace std;
#define ABS(N) ((N)<(0)? (-N) : (N))
#define MAX(a,b) ((a)>(b)? (a) : (b))

int main()
{
	cout << ABS(-3) << endl;
	cout << ABS(3) << endl;
	cout << MAX(2,5) << endl;
  cout << MAX(2,3) << endl;

}
