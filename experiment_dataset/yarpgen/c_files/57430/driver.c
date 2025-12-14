#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -302043756;
unsigned long long int var_1 = 16657807335953296476ULL;
long long int var_2 = -1227885875096611162LL;
int var_4 = -1950777921;
int var_5 = 1709031545;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2552405788U;
_Bool var_9 = (_Bool)1;
long long int var_10 = -3004698801044273655LL;
short var_11 = (short)-16808;
long long int var_12 = 4875400030413496923LL;
int zero = 0;
short var_13 = (short)-24405;
long long int var_14 = 6130713830138438729LL;
signed char var_15 = (signed char)-108;
unsigned long long int var_16 = 7835771751724552471ULL;
int var_17 = -1681674626;
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
