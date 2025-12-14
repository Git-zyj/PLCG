#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)110;
unsigned short var_9 = (unsigned short)23391;
signed char var_10 = (signed char)43;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2660955125U;
unsigned short var_14 = (unsigned short)56311;
long long int var_15 = -7090452717048671520LL;
int var_16 = -328100512;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
