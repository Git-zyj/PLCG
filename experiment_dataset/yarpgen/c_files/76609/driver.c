#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3668533803548560128ULL;
unsigned int var_1 = 2191162123U;
long long int var_8 = 1682631953198859000LL;
int var_11 = 1282240004;
long long int var_13 = -5629314226311734248LL;
short var_14 = (short)-32243;
signed char var_17 = (signed char)-40;
int zero = 0;
unsigned short var_18 = (unsigned short)60866;
unsigned long long int var_19 = 11756276699758721935ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
