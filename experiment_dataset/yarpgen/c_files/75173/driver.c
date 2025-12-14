#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_5 = 644334422U;
int var_7 = -1470901166;
short var_8 = (short)-14686;
int zero = 0;
unsigned char var_13 = (unsigned char)206;
unsigned short var_14 = (unsigned short)24744;
_Bool var_15 = (_Bool)1;
short var_16 = (short)7959;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
