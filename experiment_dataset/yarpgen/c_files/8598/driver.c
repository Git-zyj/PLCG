#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 2951523929072891335ULL;
unsigned int var_3 = 4097398155U;
int var_6 = -1203156947;
int var_11 = 648917212;
unsigned char var_15 = (unsigned char)24;
int var_16 = -536286075;
int zero = 0;
signed char var_18 = (signed char)-61;
long long int var_19 = -8493517276179681784LL;
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
