#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6858;
short var_2 = (short)-9182;
signed char var_6 = (signed char)47;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1320339659U;
signed char var_9 = (signed char)-78;
short var_10 = (short)19677;
int zero = 0;
unsigned long long int var_12 = 3124106172417505394ULL;
unsigned short var_13 = (unsigned short)23522;
signed char var_14 = (signed char)63;
short var_15 = (short)-31693;
void init() {
}

void checksum() {
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
