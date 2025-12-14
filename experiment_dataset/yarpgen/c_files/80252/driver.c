#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)119;
unsigned char var_3 = (unsigned char)233;
_Bool var_10 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1558831591U;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
unsigned int var_18 = 2569125829U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
