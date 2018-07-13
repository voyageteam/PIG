#include <cstdlib>
#include <ctime>
#include "../include/pig.h"

// Initializes the PIG.
void PIG::Initialize() { srand(time(NULL)); }

// Generates items for a given player's player class.
ItemList PIG::GenerateItemsFor(PlayerClass* player) {
    // Analyzes the PlayerClass for type, rank, and ItemList
    // Sends a request for available items to generate from given result.
    // Essentially a DB call.
    // Sends the DB contents back as a response.
}

// Generates a single item based on the materials, success
// is variale.
Item PIG::GenerateItem(ItemList materials) {
    // Decide the success of the Item generation.
    // Analyzes ItemList materials and makes a decision on whether
    // a item can be created from it.
}

// Describes an item if it hasn't already been.
void PIG::DescribeItem(Item item) {
    // gives an item a description.
}
