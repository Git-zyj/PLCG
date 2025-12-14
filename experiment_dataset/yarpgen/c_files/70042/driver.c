#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1082102475U;
int var_3 = -967570817;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)16;
int zero = 0;
unsigned int var_11 = 1155179026U;
unsigned long long int var_12 = 11084288001924552680ULL;
unsigned short var_13 = (unsigned short)22854;
signed char var_14 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
