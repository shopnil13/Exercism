#ifndef DARTS_H
#define DARTS_H

// Define the structure expected by the tests
typedef struct {
    float x;
    float y;
} coordinate_t;

// Update the function signature to accept the struct
int score(coordinate_t landing_position);

#endif