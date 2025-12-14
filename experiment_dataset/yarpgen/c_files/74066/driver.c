#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)96;
short var_9 = (short)-25647;
int var_11 = -1928512462;
int var_15 = 1308613276;
int zero = 0;
int var_16 = 388476914;
int var_17 = -709246641;
unsigned char var_18 = (unsigned char)239;
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
