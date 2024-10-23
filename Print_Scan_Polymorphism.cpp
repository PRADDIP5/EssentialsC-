#include <iostream>
#include <string>
using namespace std;

class printer {
private:
    string name;
    string location;
    string model;
    string type;
public:
    // Default constructor
    printer() : name("Unknown"), location("Unknown"), model("Unknown"), type("Unknown") {}

    // Constructor with name and location
    printer(const string& name, const string& location)
        : name(name), location(location), model("Unknown"), type("Unknown") {}

    // Constructor with all parameters
    printer(const string& name, const string& location, const string& model, const string& type)
        : name(name), location(location), model(model), type(type) {}

    void display() const {
        cout << "Printer Info: " << name << ", " << location << ", " << model << ", " << type << endl;
    }
};

class scanner {
private:
    string name;
    string location;
    string model;

public:
    // Default constructor
    scanner() : name("Unknown"), location("Unknown"), model("Unknown") {}

    // Constructor with name and location
    scanner(const string& name, const string& location)
        : name(name), location(location), model("Unknown") {}

    // Constructor with all parameters
    scanner(const string& name, const string& location, const string& model)
        : name(name), location(location), model(model) {}

    void display() const {
        cout << "Scanner Info: " << name << ", " << location << ", " << model << endl;
    }
};

int main() {
    printer p1;
    printer p2("HP LaserJet", "Office", "M404dn", "Laser");
    printer p3("Canon Pixma", "Home", "MG3620", "Inkjet");

    scanner s1;
    scanner s2("Epson Perfection", "Office");
    scanner s3("Canon CanoScan", "Home", "LiDE 300");

    p1.display();
    p2.display();
    p3.display();

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
