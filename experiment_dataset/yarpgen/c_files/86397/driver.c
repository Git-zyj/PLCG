#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1321537935U;
short var_1 = (short)-10676;
unsigned short var_2 = (unsigned short)25691;
unsigned int var_8 = 903158594U;
unsigned short var_10 = (unsigned short)55849;
int zero = 0;
unsigned long long int var_11 = 749316244325770453ULL;
short var_12 = (short)9741;
void init() {
}

void checksum() {
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
