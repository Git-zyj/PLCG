#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15108;
unsigned long long int var_6 = 3792713212492911583ULL;
unsigned int var_7 = 105137022U;
unsigned short var_11 = (unsigned short)23707;
signed char var_13 = (signed char)2;
int zero = 0;
int var_16 = -2069219888;
_Bool var_17 = (_Bool)1;
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
