#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-23039;
unsigned int var_10 = 1735613379U;
short var_11 = (short)-21354;
int zero = 0;
signed char var_16 = (signed char)-16;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)49;
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
