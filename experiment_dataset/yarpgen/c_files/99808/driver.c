#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53917;
unsigned int var_2 = 1289963249U;
unsigned short var_5 = (unsigned short)56728;
short var_8 = (short)11338;
short var_9 = (short)30435;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 283695554U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)22326;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
