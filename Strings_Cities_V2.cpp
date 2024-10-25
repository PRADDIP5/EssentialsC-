bool containsSubstring(string city,string searchSubstring) {
    // Loop through the city string
    for (int i = 0; ; ++i) {
        // If we've reached the end of the city string, break
        if (city[i] == '\0') {
            break;
        }

        // Assume a match initially
        bool match = true;
        for (int j = 0; ; ++j) {
            // If we've reached the end of the search substring
            if (searchSubstring[j] == '\0') {
                return true; // Found a match
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
    return false; // No match found
}

int main() {
    // Vector of cities
    vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    string searchSubstring;
    cout << "Enter substring to search for cities (New York, Los Angeles, Chicago, New Jersey): ";
    cin >> searchSubstring;

    vector<string> matchedCities;

    // Search for cities containing the specified substring
    for (string city : cities) {
        if (containsSubstring(city, searchSubstring)) {
            matchedCities.push_back(city);
        }
    }

    // Output results
    if (matchedCities.empty()) {
        cout << "No cities found matching the searched string." << endl;
    } else {
        cout << "Cities found with the searched string:" << endl;
        for (string cityName : matchedCities) {
            cout << cityName << endl;
        }
    }

    return 0;
}
