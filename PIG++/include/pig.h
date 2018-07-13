#ifndef PIG_HEADER
#define PIG_HEADER

#include "PlayerClass.h"
#include "reqres.hpp"

// Stores all inbound requests for the PIG.
extern std::vector<Request>     inbound;
// Stores all outbound responses from the PIG.
extern std::vector<Response>    outbound;

namespace PIGPEEPEE {
    // Class for the Procedural Item Generator.
    class PIG final {
        // METHODS
    private:
        // Default constructor.
        PIG() = default;

    public:
        // Default Destructor.
        ~PIG() = default;

        // Initializes PIG
        void        Initialize();

        // Generates a list of items that can be made by a player.
        ItemList    GenerateItemsFor(PlayerClass* player);

        // Generates a Item that hasn't already been generated.
        Item        GenerateItem(ItemList materials);

        // Describes an Item that hasn't already been described.
        void        DescribeItem(Item itemToDescribe);

        // Gets information on an Item.
        Item        GetItem(std::string itemName);
    };
}

#endif
