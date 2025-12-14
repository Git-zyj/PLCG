#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20298;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1157738295U;
signed char var_8 = (signed char)-2;
unsigned int var_9 = 2423841484U;
signed char var_10 = (signed char)38;
int zero = 0;
unsigned int var_16 = 654131666U;
short var_17 = (short)-4087;
unsigned int var_18 = 1595195033U;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2035198326650766172ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
