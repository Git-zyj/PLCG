#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)85;
int var_4 = 1420755961;
_Bool var_5 = (_Bool)0;
int var_6 = -496331698;
unsigned long long int var_7 = 2122849429905225506ULL;
unsigned int var_12 = 896292628U;
int zero = 0;
unsigned long long int var_13 = 8472786596114660605ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
