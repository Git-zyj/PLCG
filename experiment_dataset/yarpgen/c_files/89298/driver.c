#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49323;
unsigned short var_6 = (unsigned short)23971;
short var_7 = (short)-20193;
unsigned char var_11 = (unsigned char)3;
int zero = 0;
unsigned long long int var_16 = 8493408839391149046ULL;
unsigned int var_17 = 4039760590U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
