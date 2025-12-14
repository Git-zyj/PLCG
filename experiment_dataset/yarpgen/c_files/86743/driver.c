#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3336;
short var_3 = (short)-14410;
int var_6 = -1027565432;
long long int var_8 = -3684440651548631252LL;
unsigned char var_10 = (unsigned char)231;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 1085807673;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
