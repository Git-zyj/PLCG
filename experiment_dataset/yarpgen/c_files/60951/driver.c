#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16125684439077163624ULL;
unsigned int var_3 = 4100077687U;
int var_5 = -2016629560;
int zero = 0;
unsigned short var_15 = (unsigned short)54992;
unsigned short var_16 = (unsigned short)58071;
short var_17 = (short)21327;
unsigned char var_18 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
