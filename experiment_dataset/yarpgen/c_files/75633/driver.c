#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 2181606313U;
short var_5 = (short)11666;
unsigned int var_7 = 2401908655U;
unsigned short var_11 = (unsigned short)57532;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)7329;
unsigned char var_14 = (unsigned char)197;
_Bool var_15 = (_Bool)1;
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
