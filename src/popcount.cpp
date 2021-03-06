#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>
#include <stdint.h>

#include "common.hpp"

//Forward declaration required due to CFFI's requirement to have unmangled symbols
extern "C" {
    int popcount8(uint8_t* dst, const uint8_t* src, int size);
    int popcount16(uint8_t* dst, const uint16_t* src, int size);
    int popcount32(uint8_t* dst, const uint32_t* src, int size);
    int popcount64(uint8_t* dst, const uint64_t* src, int size);
}

int popcount8(uint8_t* dst, const uint8_t* src, int size) {
    for (int i = 0; i < size; ++i) {
        dst[i] = __builtin_popcount(src[i]);
    }
    return 0;
}

int popcount16(uint8_t* dst, const uint16_t* src, int size) {
    for (int i = 0; i < size; ++i) {
        dst[i] = __builtin_popcount(src[i]);
    }
    return 0;
}

int popcount32(uint8_t* dst, const uint32_t* src, int size) {
    for (int i = 0; i < size; ++i) {
        dst[i] = __builtin_popcount(src[i]);
    }
    return 0;
}

int popcount64(uint8_t* dst, const uint64_t* src, int size) {
    for (int i = 0; i < size; ++i) {
        dst[i] = __builtin_popcountll(src[i]);
    }
    return 0;
}
