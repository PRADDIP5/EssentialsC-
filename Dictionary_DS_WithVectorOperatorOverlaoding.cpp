#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename K, typename V>
class Dictionary {
private:
    vector<K> keys;   // Vector to store keys
    vector<V> values; // Vector to store values

public:
    // Constructor to initialize the dictionary
    Dictionary() {}

    // Method to add a key-value pair
    bool add(K key, V value) {
        keys.push_back(key);   // Store the key
        values.push_back(value); // Store the value
        return true;           // Indicate success
    }

    // Operator overloading for adding key-value pairs
    Dictionary operator+(const pair<K, V>& kv) const {
        Dictionary result = *this; // Create a copy of the current dictionary
        result.add(kv.first, kv.second); // Add the new key-value pair
        return result; // Return the new dictionary
    }

    // Method to access value by key
    bool get(K key, V& value) const {
        for (size_t i = 0; i < keys.size(); ++i) {
            if (keys[i] == key) {
                value = values[i]; // Assign the corresponding value
                return true;       // Indicate success
            }
        }
        return false; // Indicate failure
    }

    // Method to dump all items in the dictionary
    void dump() const {
        cout << "Key : Value\n";
        for (size_t i = 0; i < keys.size(); ++i) {
            cout << "   " << keys[i] << " : " << values[i] << "\n";
        }
    }
};

int main() {
    Dictionary<int, std::string> deviceCodeMap; // Create a dictionary
    deviceCodeMap.add(1, "D1");
    deviceCodeMap.add(2, "D2");
    deviceCodeMap.add(3, "D3");
    deviceCodeMap.add(4, "D4");

    // Using operator overloading to add a new entry
    deviceCodeMap = deviceCodeMap + make_pair(5, "D5");

    // Dump all the items from deviceCodeMap
    deviceCodeMap.dump();

    return 0;
}
