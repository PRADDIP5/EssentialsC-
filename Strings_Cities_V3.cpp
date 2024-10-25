#include <iostream>
#include <string>
#include <vector>

using namespace std;

class IPredicateStratergy{

    public:
	virtual ~IPredicateStratergy(){}
	virtual bool predicate(const string& item)=0;
};

class StartsWithStratergy:public IPredicateStratergy {
    char firstAlp;
public:
    setFirstAlp(char alp){
		this->firstAlp=alp;
	}

    bool predicate(const string& item) const {
        return !item.empty() && item[0] == firstAlp;
    }
};


vector<string> filter(const vector<string>& source, const IPredicateStratergy& strategy) {
    vector<string> filteredStrings;
    for (const string& item : source) {
        if (strategy.predicate(item)) {
            filteredStrings.push_back(item);
        }
    }
    return filteredStrings;
}

int main() {
    vector<string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};
	StartsWithStratergy strategy;
	strategy.setFirstAlp('L');
    
   vector<string> filteredCitiesByStart = filter(cities, strategy);

    cout << "Cities that start with '" << firstAlp << "':" << endl;
    for (const string& city : filteredCitiesByStart) {
        cout << city << endl;
    }
	strategy.setFirstAlp('N');
	filteredCitiesByStart = filter(cities, strategy);

    cout << "Cities that start with '" << firstAlp << "':" << endl;
    for (const string& city : filteredCitiesByStart) {
        cout << city << endl;
    }
    return 0;
}
