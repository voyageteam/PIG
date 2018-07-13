#ifndef REQRES_HEADER
#define REQRES_HEADER

#include "PlayerClass.hpp"

// Outgoing response
struct Response final {
    std::string& dest;

    unsigned int* items[];

    Response(std::string& destination) {
        this.dest = destination;
    }
};

// Incoming request
struct Request final {
    std::string& dest;

    unsigned short* class_id[];

    Request (std::string& destination) {
        dest = destination;
    }

    Response* toRes() {
        return new Response(dest);
    }
};

#endif
