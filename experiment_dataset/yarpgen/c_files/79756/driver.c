#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20874;
signed char var_6 = (signed char)-14;
short var_11 = (short)11689;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 11467608825767901782ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 18196055836187301091ULL;
short var_17 = (short)-31057;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
