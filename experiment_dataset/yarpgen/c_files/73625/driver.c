#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)61524;
unsigned char var_4 = (unsigned char)91;
int var_6 = 1800810141;
short var_11 = (short)30207;
short var_12 = (short)-18957;
short var_14 = (short)-4739;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-11726;
short var_17 = (short)-7951;
unsigned int var_18 = 2259296727U;
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
