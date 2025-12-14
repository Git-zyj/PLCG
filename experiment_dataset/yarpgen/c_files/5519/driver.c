#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8832;
unsigned short var_1 = (unsigned short)56454;
unsigned int var_4 = 778393100U;
unsigned short var_9 = (unsigned short)6307;
long long int var_14 = 2867532279500677565LL;
signed char var_16 = (signed char)88;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-5136;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
