#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13512928276126458366ULL;
unsigned short var_2 = (unsigned short)10769;
unsigned char var_5 = (unsigned char)198;
_Bool var_6 = (_Bool)1;
long long int var_9 = -758267318257483049LL;
long long int var_11 = 7250988875345991816LL;
int zero = 0;
unsigned int var_12 = 2421349185U;
int var_13 = -433103407;
int var_14 = 1664099811;
void init() {
}

void checksum() {
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
