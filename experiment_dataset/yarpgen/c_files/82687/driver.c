#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)8347;
int var_12 = -229419866;
int zero = 0;
unsigned short var_14 = (unsigned short)32065;
_Bool var_15 = (_Bool)1;
int var_16 = -1191808235;
int var_17 = 1513477848;
unsigned short var_18 = (unsigned short)58545;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
