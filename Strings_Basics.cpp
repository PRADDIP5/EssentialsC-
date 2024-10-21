#include <iostream>
#include <string>
using namespace std;

// int main() {
//     // Array of city names
//     std::string cities[4] = {"New york", "los angles", "chicago", "New jersey"};

//     // Loop through the array and find cities that start with "New"
//     cout << "Name of the cities that start with character 'N' are:" << endl;
//     for(int i = 0; i < 4; i++) {
//         if(cities[i].substr(0, 3) == "N") {
//             cout << cities[i] << endl;
//         }
//     }

//     return 0;
// }

void filterCitiesStartingWithN(const string cities[], int size, string results[], int& resultCount) {
    resultCount = 0; // Initialize the count

    for (int i = 0; i < size; ++i) {
        if (cities[i].front() == 'N' && resultCount < 4) { // Check if the first letter is 'N'
            results[resultCount] = cities[i]; // Store in the results array
            resultCount++; // Increment the count
        }
    }
}

int main() {
    // Array of cities
    string cities[] = {"New York", "Los Angeles", "Chicago", "New Jersey"};
    
    // Array to store cities starting with 'N'
    string citiesStartingWithN[4];
    int count = 0; // To keep track of the number of cities found

    // Get the number of elements in the array
    int size = sizeof(cities) / sizeof(cities[0]);

    // Call the filter function
    filterCitiesStartingWithN(cities, size, citiesStartingWithN, count);

    // Output the results
    cout << "Cities starting with 'N':" << endl;
    for (int i = 0; i < count; ++i) {
        cout << citiesStartingWithN[i] << endl;
    }

    return 0;
}
