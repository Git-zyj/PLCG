#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19563;
short var_2 = (short)24854;
short var_3 = (short)27347;
unsigned int var_4 = 2510520797U;
unsigned int var_11 = 245439477U;
int zero = 0;
unsigned long long int var_12 = 2523172381387255975ULL;
unsigned long long int var_13 = 9766365492318809513ULL;
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
