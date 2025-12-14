#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13933353083442392225ULL;
long long int var_2 = -1099831143545747210LL;
unsigned short var_4 = (unsigned short)33393;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10736160851579167229ULL;
unsigned short var_11 = (unsigned short)37975;
unsigned short var_12 = (unsigned short)13887;
int var_13 = 669499315;
unsigned long long int var_16 = 12066678698393132597ULL;
int zero = 0;
unsigned long long int var_19 = 5819153443060765402ULL;
unsigned int var_20 = 989061863U;
unsigned int var_21 = 4216490470U;
signed char var_22 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
