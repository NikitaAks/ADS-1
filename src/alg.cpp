// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
for (int i = 2; i < value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
int noo = 0;
uint64_t j = value;
while (true) {
    j += 1;
    for (uint64_t i = 2; i < j; ++i) {
        if ((j % i) == 0) {
            noo = 1;
            break;
        }
    }
    if (noo == 0) {
        break;
    }
    noo = 0;
}
return j;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
