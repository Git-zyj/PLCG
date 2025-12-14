#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3407766085U;
int var_4 = 1612722340;
unsigned long long int var_6 = 7866402690970892963ULL;
int zero = 0;
unsigned int var_15 = 450127917U;
unsigned short var_16 = (unsigned short)51532;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
