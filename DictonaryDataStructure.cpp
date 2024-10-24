#include <iostream>
#include <string>

template<typename K, typename V>
class Dictionary {
private:
    static const int MAX_SIZE = 100; // Define maximum size for the dictionary
    K keys[MAX_SIZE]; // Array to store keys
    V values[MAX_SIZE]; // Array to store values
    int size; // Current number of items

public:
    // Constructor to initialize the dictionary
    Dictionary() : size(0) {}

    // Method to add a key-value pair
    bool add(K key, V value) {
        if (size >= MAX_SIZE) {
            std::cout << "Error: Dictionary capacity exceeded." << std::endl;
            return false; // Indicate failure
        }
        keys[size] = key; // Store the key
        values[size] = value; // Store the value
        size++; // Increment the size
        return true; // Indicate success
    }

    // Method to access value by key
    bool get(K key, V& value) {
        for (int i = 0; i < size; ++i) {
            if (keys[i] == key) {
                value = values[i]; // Assign the corresponding value
                return true; // Indicate success
            }
        }
        return false; // Indicate failure
    }

    // Method to dump all items in the dictionary
    void dump() const {
        std::cout << "Key : Value\n";
        for (int i = 0; i < size; ++i) {
            std::cout << "   " << keys[i] << " : " << values[i] << "\n";
        }
    }
};

int main() {
    Dictionary<int, std::string> deviceCodeMap; // Create a dictionary
    deviceCodeMap.add(1, "D1");
    deviceCodeMap.add(2, "D2");
    deviceCodeMap.add(3, "D3");
    deviceCodeMap.add(4, "D4");

    // Dump all the items from deviceCodeMap
    deviceCodeMap.dump();

    return 0;
}
