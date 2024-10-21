#include <iostream>
#include <string>
using namespace std;

void fun(string* data) {
    *data = "Mutate data using pointer";
}
void foo(string& data) { // lvalue reference i.e., alias
     data = "Mutate data using reference";
 }

int main() {
    
    string data = "Main_Data";
    fun(&data);
    cout << "data in fun \n" << data << endl;
    foo(data);
    cout << "data in foo \n " << data << endl;
    
    return 0;
}
