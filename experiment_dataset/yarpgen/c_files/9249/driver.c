#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63136;
unsigned char var_2 = (unsigned char)0;
unsigned int var_4 = 2656321489U;
unsigned short var_6 = (unsigned short)23009;
int zero = 0;
unsigned long long int var_10 = 2686045030408033178ULL;
int var_11 = 438411173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
