#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool SearchingCity(string city, string SearchcityName) {
    return city.find(SearchcityName) != string::npos; 
}

int main() {
	
    vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    string SearchcityName;
    cout << "Enter a substring to search for cities: ";
    cin >> SearchcityName; 

    vector<string> searchedCityNames;

    for (string city : cities) {
        if (SearchingCity(city, SearchcityName)) {
            searchedCityNames.push_back(city); 
        }
    }

    if (searchedCityNames.empty()) {
        cout << "No cities found matching the cityName." << endl;
    } 
    else {
        cout << "Cities found:" << std::endl;
        for (string SearchcityName : searchedCityNames) {
            cout << SearchcityName << endl;
        }
    }

    return 0;
}
