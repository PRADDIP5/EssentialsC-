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

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// class IPredicateStrategy {
// public:
//     virtual ~IPredicateStrategy() {}
//     virtual bool predicate(const string& item) const = 0;
// };

// class StartsWithStrategy : public IPredicateStrategy {
// private:
//     char startingCharacter;

// public:
//     void setStartingCharacter(char character) {
//         this->startingCharacter = character;
//     }

//     bool predicate(const string& item) const override {
//         return !item.empty() && item[0] == startingCharacter;
//     }
// };

// vector<string> filter(const vector<string>& source, const IPredicateStrategy& strategy) {
//     vector<string> filteredStrings;
//     for (const string& item : source) {
//         if (strategy.predicate(item)) {
//             filteredStrings.push_back(item);
//         }
//     }
//     return filteredStrings;
// }

// void printFilteredCities(const vector<string>& cities, const IPredicateStrategy& strategy, char prefix) {
//     vector<string> filteredCities = filter(cities, strategy);
//     cout << "Cities that start with '" << prefix << "':" << endl;
//     if (filteredCities.empty()) {
//         cout << "No cities found." << endl;
//     } else {
//         for (const string& city : filteredCities) {
//             cout << city << endl;
//         }
//     }
//     cout << endl; // Add space for better readability
// }

// int main() {
//     vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};
//     StartsWithStrategy strategy;

//     strategy.setStartingCharacter('L');
//     printFilteredCities(cities, strategy, 'L');

//     strategy.setStartingCharacter('N');
//     printFilteredCities(cities, strategy, 'N');
    
//      strategy.setStartingCharacter('C');
//     printFilteredCities(cities, strategy, 'C');

//     return 0;
// }

