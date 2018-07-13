#ifndef ITEM_HEADER
#define ITEM_HEADER

#include <string>
#include <vector>

// Typedef for Item list vector.
using ItemList  = std::vector<Item>;

// Struct for items.
struct Item final {
    std::string     itemName;
    unsigned int    id;
    ItemList        listOfItems;
};

#endif
