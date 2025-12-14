#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_6 = (unsigned char)184;
unsigned long long int var_7 = 15068399272417288754ULL;
unsigned char var_12 = (unsigned char)172;
unsigned char var_15 = (unsigned char)120;
unsigned short var_16 = (unsigned short)30694;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2970468648U;
void init() {
}

void checksum() {
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
