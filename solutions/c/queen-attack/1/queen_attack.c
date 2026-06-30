#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    // Check if positions are within the 8x8 board bounds (0-7)
    if (queen_1.row >= 8 || queen_1.column >= 8 || 
        queen_2.row >= 8 || queen_2.column >= 8) {
        return INVALID_POSITION;
    }

    // A queen cannot "attack" itself; check if positions are the same
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
        return INVALID_POSITION;
    }

    // Check same row or same column
    if (queen_1.row == queen_2.row || queen_1.column == queen_2.column) {
        return CAN_ATTACK;
    }

    // Check same diagonal
    // The absolute difference between rows equals absolute difference between columns
    int row_diff = abs((int)queen_1.row - (int)queen_2.row);
    int col_diff = abs((int)queen_1.column - (int)queen_2.column);

    if (row_diff == col_diff) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}