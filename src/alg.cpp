// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
    int flag = 0;
    for (int i = 2; i < value; i++)
        if (value % i == 0) {
            flag = 1;
            break;
        }
    if (flag == 0) return true;
    else 
        return false;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    int flag, k = 0, number = 1;
    while (k != n) {
        number++;
        flag = 0;
        for (int i = 2; i < number; i++)
            if (number % i == 0) {
                flag = 1;
                break;
            }
        if (flag == 0) k++;
    }
    return number;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    int flag, k = 0;
    while (k != 1) {
        value++;
        flag = 0;
        for (int i = 2; i < value; i++)
            if (value % i == 0) {
                flag = 1;
                break;
            }
        if (flag == 0) k++;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    int flag, sum = 0, number = 1;
    if (hbound < 2) return 0;
    while (number != (hbound - 1)) {
        number++;
        flag = 0;
        for (int i = 2; i < number; i++)
            if (number % i == 0) {
                flag = 1;
                break;
            }
        if (flag == 0) sum += number;
    }
    return sum;
}
