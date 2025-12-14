#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-636;
unsigned long long int var_2 = 11825739345726343557ULL;
short var_3 = (short)25881;
unsigned short var_5 = (unsigned short)27682;
unsigned long long int var_7 = 12375449579040723870ULL;
short var_10 = (short)2024;
unsigned int var_11 = 2707043232U;
short var_13 = (short)-14001;
unsigned short var_14 = (unsigned short)7839;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)213;
unsigned long long int var_18 = 10053946955002396289ULL;
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
