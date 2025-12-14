#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2850350910U;
unsigned int var_6 = 3844980105U;
int var_8 = 442500211;
unsigned long long int var_9 = 11742645410858343357ULL;
int zero = 0;
long long int var_10 = -2021073260015332747LL;
unsigned short var_11 = (unsigned short)49419;
int var_12 = -2111715305;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
