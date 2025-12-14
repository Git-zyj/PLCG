#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
short var_3 = (short)7151;
unsigned int var_6 = 2151606432U;
unsigned char var_12 = (unsigned char)211;
int zero = 0;
unsigned long long int var_14 = 6840847115280771702ULL;
int var_15 = 1965021260;
unsigned int var_16 = 2899555297U;
short var_17 = (short)17431;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
