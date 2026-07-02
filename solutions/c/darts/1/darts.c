#include "darts.h"

int score(coordinate_t landing_position) {
    // Access the members of the struct
    float x = landing_position.x;
    float y = landing_position.y;
    
    // Calculate squared distance
    float squared_distance = (x * x) + (y * y);

    if (squared_distance <= 1.0F * 1.0F) {
        return 10;
    } else if (squared_distance <= 5.0F * 5.0F) {
        return 5;
    } else if (squared_distance <= 10.0F * 10.0F) {
        return 1;
    } else {
        return 0;
    }
}