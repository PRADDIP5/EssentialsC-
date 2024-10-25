#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if the city contains the search substring
bool containsSubstring(string city, string searchString) {
    size_t cityLength = city.length();
    size_t searchLength = searchString.length();

    // Loop through the city string
    for (size_t i = 0; i <= cityLength - searchLength; ++i) {
        // Check for a match
        bool match = true;
        for (size_t j = 0; j < searchLength; ++j) {
            if (city[i + j] != searchString[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true; // Found a match
        }
    }
    return false; // No match found
}

int main() {
    // Vector of cities
    vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    string searchString;
    cout << "Enter a substring to search for cities: ";
    cin >> searchString; 

    vector<string> matchedCities;

    // Search for cities containing the specified substring
    for (string city : cities) {
        if (containsSubstring(city, searchString)) {
            matchedCities.push_back(city); 
        }
    }

    // Output results
    if (matchedCities.empty()) {
        cout << "No cities found matching the search string." << endl;
    } else {
        cout << "Cities found:" << endl;
        for (string cityName : matchedCities) {
            cout << cityName << endl;
        }
    }

    return 0;
}
