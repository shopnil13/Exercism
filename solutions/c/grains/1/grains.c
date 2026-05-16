#include "grains.h"

uint64_t square(uint8_t index){
    if (index < 1 || index > 64){
        return 0;
    }
    uint64_t grains = 1;

    for (uint8_t i = 1; i < index; i++){
        grains = grains * 2;
    }
    return grains;
}

uint64_t total(void){
    uint64_t sum = 0;

    for (uint8_t i = 1; i <= 64; i++){
        sum = sum + square(i);
    }
    return sum;
}