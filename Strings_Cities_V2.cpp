bool containsSubstring(const string& city, const string& searchSubstring) {
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
