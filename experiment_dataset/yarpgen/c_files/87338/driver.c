#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3002315357U;
unsigned short var_4 = (unsigned short)64336;
unsigned char var_6 = (unsigned char)215;
int var_7 = 1424531981;
signed char var_8 = (signed char)-23;
short var_10 = (short)15561;
long long int var_12 = -556570263409826089LL;
int zero = 0;
unsigned char var_16 = (unsigned char)214;
long long int var_17 = -2027178170373000580LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1626146442490438874ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
