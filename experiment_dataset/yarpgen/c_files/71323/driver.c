#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7681;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-9019;
int zero = 0;
int var_15 = -1268961420;
short var_16 = (short)28485;
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
