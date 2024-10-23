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
    printer(const string& name, const string& location): name(name), location(location), model("Unknown"), type("Unknown") {}

    // Constructor with name,location,model and type
    printer(const string& name, const string& location, const string& model, const string& type): name(name), location(location), model(model), type(type) {}

    void display() const {
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
    scanner(const string& name, const string& location): name(name), location(location), model("Unknown") {}

    // Constructor with name,location and model
    scanner(const string& name, const string& location, const string& model): name(name), location(location), model(model) {}

    void display() const {
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

    p1.display();
    p2.display();
    p3.display();
    cout << "----------- " << endl;
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
