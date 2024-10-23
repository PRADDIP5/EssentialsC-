#include <iostream>
#include <string>

class Printer {
private:
    std::string name;
    std::string location;
    std::string model;
    std::string type;
public:
    // Default constructor
    Printer() : name("Unknown"), location("Unknown"), model("Unknown"), type("Unknown") {}

    // Constructor with name and location
    Printer(const std::string& name, const std::string& location)
        : name(name), location(location), model("Unknown"), type("Unknown") {}

    // Constructor with all parameters
    Printer(const std::string& name, const std::string& location, const std::string& model, const std::string& type)
        : name(name), location(location), model(model), type(type) {}

    void display() const {
        std::cout << "Printer Info: " << name << ", " << location << ", " << model << ", " << type << std::endl;
    }
};

class Scanner {
private:
    std::string name;
    std::string location;
    std::string model;

public:
    // Default constructor
    Scanner() : name("Unknown"), location("Unknown"), model("Unknown") {}

    // Constructor with name and location
    Scanner(const std::string& name, const std::string& location)
        : name(name), location(location), model("Unknown") {}

    // Constructor with all parameters
    Scanner(const std::string& name, const std::string& location, const std::string& model)
        : name(name), location(location), model(model) {}

    void display() const {
        std::cout << "Scanner Info: " << name << ", " << location << ", " << model << std::endl;
    }
};

int main() {
    Printer printer1;
    Printer printer2("HP LaserJet", "Office", "M404dn", "Laser");
    Printer printer3("Canon Pixma", "Home", "MG3620", "Inkjet");

    Scanner scanner1;
    Scanner scanner2("Epson Perfection", "Office");
    Scanner scanner3("Canon CanoScan", "Home", "LiDE 300");

    printer1.display();
    printer2.display();
    printer3.display();

    scanner1.display();
    scanner2.display();
    scanner3.display();

    return 0;
}
