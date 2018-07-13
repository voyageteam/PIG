#ifndef PLAYERCLASS_HEADER
#define PLAYERCLASS_HEADER

#include "Item.h"

struct PlayerClass final {
// FIELDS
    union {
        // This and the info are the same thing!
        struct {
            unsigned int type : 4;
            unsigned int rank : 12;
        };

        unsigned short class_id;
    }

    // All items the player has.
    ItemList        heldItem;
};

#endif
