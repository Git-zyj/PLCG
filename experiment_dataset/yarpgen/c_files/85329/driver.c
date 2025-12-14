#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_8 = 164200946;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-18246;
short var_13 = (short)4862;
int zero = 0;
unsigned char var_16 = (unsigned char)99;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
