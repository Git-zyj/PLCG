#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 371250420U;
int var_3 = -1452352970;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)124;
signed char var_15 = (signed char)73;
short var_16 = (short)-8740;
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
