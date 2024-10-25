#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to check if the city contains the search substring
bool containsSubstring(string city,string searchSubstring) {
    // Loop through the city string
    for (int i = 0; ; ++i) {
        if (city[i] == '\0') {
            break;
        }

        bool match = true;
        for (int j = 0; ; ++j) {
            if (searchSubstring[j] == '\0') {
                return true; 
            }

            // If city character or search substring character is null, no match
            if (city[i + j] == '\0' || city[i + j] != searchSubstring[j]) {
                match = false;
                break;
            }
        }

        // If no match was found, continue checking
        if (!match) {
            continue;
        }
    }
    return false; 
}

int main() {

    vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    string searchSubstring;
    cout << "Enter substring to search for cities (New York, Los Angeles, Chicago, New Jersey): ";
    cin >> searchSubstring;

    vector<string> matchedCities;

    for (string city : cities) {
        if (containsSubstring(city, searchSubstring)) {
            matchedCities.push_back(city);
        }
    }

    if (matchedCities.empty()) {
        cout << "No cities found matched with the searched string." << endl;
    } 
    else {
        cout << "Cities found with the searched string:" << endl;
        for (string cityName : matchedCities) {
            cout << cityName << endl;
        }
    }

    return 0;
}

