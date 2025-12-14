#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)1536;
unsigned int var_9 = 1266687183U;
short var_10 = (short)25335;
unsigned int var_13 = 2438837425U;
int zero = 0;
unsigned long long int var_16 = 9828357231245010000ULL;
short var_17 = (short)25626;
unsigned char var_18 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
