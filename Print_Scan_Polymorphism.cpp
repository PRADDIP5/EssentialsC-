#include <iostream>
#include <string>
using namespace std;

class printer {
private:
    string name,location,model,type;
public:
    // Default constructor
    printer() : name("Unknown"), location("Unknown"), model("Unknown"), type("Unknown") {}

    // Constructor with name and location
    printer(string name,string location): name(name), location(location), model("Unknown"), type("Unknown") {}

    // Constructor with name,location,model and type
    printer(string name,string location,string model,string type): name(name), location(location), model(model), type(type) {}

    void output() {
        cout << "Printer Info: " << name << ", " << location << ", " << model << ", " << type << endl;
    }
};


class scanner {
private:
    string name,location,model;
public:
    // Default constructor
    scanner() : name("Unknown"), location("Unknown"), model("Unknown") {}

    // Constructor with name and location
    scanner(string name,string location): name(name), location(location), model("Unknown") {}

    // Constructor with name,location and model
    scanner(string name,string location,string model): name(name), location(location), model(model) {}

    void output(){
        cout << "Scanner Info: " << name << ", " << location << ", " << model << endl;
    }
};

int main() {
    printer p1;
    printer p2("HP", "Office", "Pr123", "Laser");
    printer p3("Canon", "Home", "Pr234", "Inkjet");

    scanner s1;
    scanner s2("Epson", "Office");
    scanner s3("Canon", "Home", "Sc123");

    p1.output();
    p2.output();
    p3.output();
    cout << "----------- " << endl;
    s1.output();
    s2.output();
    s3.output();

    return 0;
}
