#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-27189;
unsigned long long int var_8 = 3663189306740361423ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)41462;
unsigned short var_12 = (unsigned short)60790;
int var_13 = 1645264937;
int var_14 = -280247180;
unsigned int var_15 = 1320054347U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
