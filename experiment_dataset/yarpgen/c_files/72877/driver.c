#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1231046548U;
unsigned short var_1 = (unsigned short)52272;
long long int var_2 = -3865528903952817530LL;
int var_3 = -973084245;
unsigned int var_6 = 3483334710U;
unsigned int var_7 = 841667961U;
int zero = 0;
unsigned short var_11 = (unsigned short)29440;
unsigned char var_12 = (unsigned char)95;
short var_13 = (short)-10520;
unsigned long long int var_14 = 11596367375627094267ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
