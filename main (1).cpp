#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Structure to hold a coworker's information and their availability schedule
struct Coworker {
    std::string name;
    std::vector<std::pair<int, int>> availableTimes;  // Available time slots (start, end)

    // Method to add availability times
    void addAvailability(int start, int end) {
        availableTimes.push_back({start, end});
    }
};

// Function to check if two time slots overlap
bool isOverlapping(const std::pair<int, int>& slot1, const std::pair<int, int>& slot2) {
    // Returns true if times overlap, false otherwise
    return !(slot1.second <= slot2.first || slot2.second <= slot1.first);
}

// Function to find coworkers with matching availability
std::vector<Coworker> findMatchingCoworkers(const Coworker& target, const std::vector<Coworker>& allCoworkers) {
    std::vector<Coworker> matchingCoworkers;

    // Loop through all coworkers and compare their availability
    for (const auto& coworker : allCoworkers) {
        if (coworker.name == target.name) continue; // Skip self

        for (const auto& timeSlot1 : target.availableTimes) {
            for (const auto& timeSlot2 : coworker.availableTimes) {
                if (isOverlapping(timeSlot1, timeSlot2)) {
                    matchingCoworkers.push_back(coworker); // Found a match
                    break;
                }
            }
        }
    }

    return matchingCoworkers;
}

// Function to display the matches found
void displayMatches(const std::vector<Coworker>& matches) {
    if (matches.empty()) {
        std::cout << "No available coworkers found that match the criteria." << std::endl;
    } else {
        std::cout << "Matching coworkers:" << std::endl;
        for (const auto& coworker : matches) {
            std::cout << coworker.name << std::endl;
        }
    }
}

int main() {
    // Create some sample coworkers
    Coworker alice = {"Alice"};
    alice.addAvailability(9, 12);
    alice.addAvailability(14, 16);

    Coworker bob = {"Bob"};
    bob.addAvailability(10, 12);
    bob.addAvailability(13, 15);

    Coworker charlie = {"Charlie"};
    charlie.addAvailability(8, 10);
    charlie.addAvailability(15, 17);

    std::vector<Coworker> coworkers = {alice, bob, charlie};

    // The target coworker to search for matches
    Coworker target = {"Alice"};

    // Find and display the matching coworkers
    auto matches = findMatchingCoworkers(target, coworkers);
    displayMatches(matches);

    return 0;
}
