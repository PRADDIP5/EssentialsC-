#include <iostream>
#include <string>
using namespace std;

void fun(string data) { 
    data = "fun_data";
}

// void fun(string *data) {  
//     *data = "fun_data";
// }

int main() {
    string data = "Main_Data";
    fun(data); // pass/call by value 
    //fun(&data); // pass/call by reference
    cout << data << endl;
    
    return 0;
}
