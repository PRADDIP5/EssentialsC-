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

// #include <iostream>

// int main() {
//     // Print the header
//     std::cout << "Key : Value" << std::endl;

//     // Print the key-value pairs
//     for (int i = 1; i <= 4; ++i) {
//         std::cout << "   " << i << " : D" << i << std::endl;
//     }

//     return 0;
// }

// #include <iostream>

// template <typename Key, typename Value>
// class Dictionary {
// private:
//     Key* keys;
//     Value* values;
//     size_t capacity;
//     size_t size;

// public:
//     Dictionary(size_t cap) : capacity(cap), size(0) {
//         keys = new Key[capacity];
//         values = new Value[capacity];
//     }

//     ~Dictionary() {
//         delete[] keys;
//         delete[] values;
//     }

//     void add(const Key& key, const Value& value) {
//         if (size < capacity) {
//             keys[size] = key;
//             values[size] = value;
//             size++;
//         } else {
//             std::cerr << "Dictionary capacity exceeded!" << std::endl;
//         }
//     }

//     Value operator[](const Key& key) const {
//         for (size_t i = 0; i < size; i++) {
//             if (keys[i] == key) {
//                 return values[i];
//             }
//         }
//         throw std::out_of_range("Key not found");
//     }

//     void dump() const {
//         std::cout << "Key : Value\n";
//         for (size_t i = 0; i < size; i++) {
//             std::cout << "   " << keys[i] << " : " << values[i] << "\n";
//         }
//     }
// };

// int main() {
//     Dictionary<int, std::string> deviceCodeMap(4);
//     deviceCodeMap.add(1, "D1");
//     deviceCodeMap.add(2, "D2");
//     deviceCodeMap.add(3, "D3");
//     deviceCodeMap.add(4, "D4");

//     std::string deviceName = deviceCodeMap[2];
//     std::cout << deviceName << std::endl; // Output: D2

//     // Dump all the items from deviceCodeMap
//     deviceCodeMap.dump();
//     /*
//      Output:
//      Key : Value
//         1 : D1
//         2 : D2
//         3 : D3
//         4 : D4
//     */

//     return 0;
// }

