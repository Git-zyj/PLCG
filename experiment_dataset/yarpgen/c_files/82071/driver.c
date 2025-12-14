#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-25421;
short var_9 = (short)3703;
_Bool var_11 = (_Bool)1;
short var_19 = (short)8923;
int zero = 0;
short var_20 = (short)-7020;
signed char var_21 = (signed char)73;
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
