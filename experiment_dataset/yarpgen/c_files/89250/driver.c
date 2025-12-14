#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14375505058271088575ULL;
int var_3 = 1499236888;
int var_6 = 1643735419;
unsigned int var_7 = 805585041U;
signed char var_8 = (signed char)55;
signed char var_10 = (signed char)-94;
int var_11 = -1991714556;
int zero = 0;
signed char var_12 = (signed char)-32;
unsigned long long int var_13 = 12652613641566536922ULL;
void init() {
}

void checksum() {
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
