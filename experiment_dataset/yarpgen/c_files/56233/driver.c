#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
short var_9 = (short)-16375;
unsigned long long int var_12 = 44963862488936982ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)2142;
short var_15 = (short)-23736;
unsigned long long int var_16 = 13852416240182584637ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
