#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6330913126222926966LL;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)21979;
short var_10 = (short)-18587;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -8175356869602151550LL;
long long int var_17 = 6327586392005866017LL;
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
