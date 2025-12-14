#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17783;
unsigned long long int var_5 = 16366707181615873605ULL;
unsigned int var_7 = 35160501U;
unsigned long long int var_9 = 10119289094706596446ULL;
unsigned long long int var_10 = 7421568384235742309ULL;
unsigned long long int var_11 = 8875158350864120773ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)52991;
unsigned short var_13 = (unsigned short)19888;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7131253179008333312LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
