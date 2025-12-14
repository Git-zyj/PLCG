#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3301125771U;
signed char var_7 = (signed char)-68;
unsigned int var_8 = 2016662330U;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-22537;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)19075;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
