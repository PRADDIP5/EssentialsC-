#include <iostream>
#include <string>
using namespace std;

void fun(string data) { // call by value 
    data = "fun_data";
}

// void fun(string *data) {  // call by reference
//     *data = "fun_data";
// }

int main() {
    string data = "Main_Data";
    fun(data);
    //fun(&data);
    cout << data << endl;
    
    return 0;
}
