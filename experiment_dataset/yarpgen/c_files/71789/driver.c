#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4335;
unsigned short var_2 = (unsigned short)32074;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_13 = 4225100125U;
int zero = 0;
unsigned short var_14 = (unsigned short)5324;
unsigned long long int var_15 = 6449683807421592257ULL;
short var_16 = (short)5521;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
