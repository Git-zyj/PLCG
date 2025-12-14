#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28154;
int var_2 = -685534954;
_Bool var_8 = (_Bool)0;
short var_9 = (short)14702;
short var_10 = (short)-9450;
int var_12 = 178529424;
int zero = 0;
short var_18 = (short)-6395;
_Bool var_19 = (_Bool)0;
short var_20 = (short)10167;
unsigned int var_21 = 4156858100U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
