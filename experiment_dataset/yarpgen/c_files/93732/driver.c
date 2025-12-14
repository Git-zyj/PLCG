#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -780005009;
int var_1 = 1942602210;
unsigned long long int var_2 = 8469811078994377273ULL;
unsigned short var_3 = (unsigned short)21836;
short var_4 = (short)-4471;
unsigned int var_5 = 3220693835U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = 1953153998;
int zero = 0;
unsigned int var_10 = 1103520911U;
int var_11 = -1907586248;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13999214896545934376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
