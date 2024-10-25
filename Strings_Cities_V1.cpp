#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> filter(vector<string> source){
       std::vector<std::string> filteredStrings;

    // Loop through the array and check each city
    for (const string& item : source) {
        // Check if the city starts with "New"
        if ( !item.empty() && item.substr(0, 1) == "N") {
            filteredStrings.push_back(item);
        }
    }
    return filteredStrings;
}
int main() {
    // Create an array of cities
    vector<std::string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    // Create a vector to hold cities that start with "New"
  vector<string> newCities=filter(cities);
  std::cout << "Cities that start with 'New':" << std::endl;
    for (const string& newCity : newCities) {
        std::cout << newCity << std::endl;
    }

    return 0;
}
