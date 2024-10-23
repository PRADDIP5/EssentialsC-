#include <iostream>
#include <string>

class printer {
private:
    std::string name;
    std::string location;
    std::string model;
    std::string type;
public:
    // Default constructor
    printer() : name("Unknown"), location("Unknown"), model("Unknown"), type("Unknown") {}

    // Constructor with name and location
    printer(const std::string& name, const std::string& location)
        : name(name), location(location), model("Unknown"), type("Unknown") {}

    // Constructor with all parameters
    printer(const std::string& name, const std::string& location, const std::string& model, const std::string& type)
        : name(name), location(location), model(model), type(type) {}

    void display() const {
        std::cout << "Printer Info: " << name << ", " << location << ", " << model << ", " << type << std::endl;
    }
};

class scanner {
private:
    std::string name;
    std::string location;
    std::string model;

public:
    // Default constructor
    scanner() : name("Unknown"), location("Unknown"), model("Unknown") {}

    // Constructor with name and location
    scanner(const std::string& name, const std::string& location)
        : name(name), location(location), model("Unknown") {}

    // Constructor with all parameters
    scanner(const std::string& name, const std::string& location, const std::string& model)
        : name(name), location(location), model(model) {}

    void display() const {
        std::cout << "Scanner Info: " << name << ", " << location << ", " << model << std::endl;
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
