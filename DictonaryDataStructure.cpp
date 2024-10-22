#include <iostream>
#include <string>
#include <stdexcept> // For std::out_of_range>
#include <utility>   // For std::pair>

class SimpleDictionary {
private:
    std::pair<int, std::string>* data; // Array of key-value pairs
    int capacity;                      // Total capacity of the array
    int size;                          // Current number of elements

    // Function to resize the array when needed
    void resize(int new_capacity) {
        auto* temp = new std::pair<int, std::string>[new_capacity];

        // Copy old data to the new array
        for (int i = 0; i < size; ++i) {
            temp[i] = data[i];
        }

        // Delete old array and assign new array
        delete[] data;
        data = temp;
        capacity = new_capacity;
    }

public:
    // Constructor
    SimpleDictionary(int initial_capacity = 2) : capacity(initial_capacity), size(0) {
        data = new std::pair<int, std::string>[capacity]; // Allocate initial memory
    }

    // Destructor
    ~SimpleDictionary() {
        delete[] data;  // Free allocated memory
    }

    // Function to add key-value pairs
    void add(int key, const std::string& value) {
        if (size == capacity) {
            resize(capacity * 2);  // Double the capacity when full
        }
        data[size++] = std::make_pair(key, value); // Add the new pair and increment size
    }

    // Overload the << operator to print the dictionary
    friend std::ostream& operator<<(std::ostream& os, const SimpleDictionary& dict) {
        os << "Key : Value" << std::endl; // Print header
        for (int i = 0; i < dict.size; ++i) {
            os << dict.data[i].first << " : " << dict.data[i].second << std::endl;
        }
        return os; // Return the output stream
    }
};

int main() {
    SimpleDictionary deviceCodeMap(2);
    deviceCodeMap.add(1, "D1");
    deviceCodeMap.add(2, "D2");
    deviceCodeMap.add(3, "D3");
    deviceCodeMap.add(4, "D4");

    std::cout << deviceCodeMap; // Print the dictionary

    return 0;
}
