#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43499;
signed char var_5 = (signed char)54;
unsigned long long int var_8 = 13774785170172719179ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_12 = (short)-29017;
short var_13 = (short)6298;
short var_14 = (short)14764;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
