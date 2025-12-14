#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12481534436130717350ULL;
unsigned long long int var_7 = 8768445162433389685ULL;
short var_8 = (short)28761;
unsigned int var_9 = 3446611955U;
int zero = 0;
int var_12 = -111867385;
unsigned long long int var_13 = 2282572370641595775ULL;
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
