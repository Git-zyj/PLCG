#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18320;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-9770;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)29623;
int zero = 0;
unsigned int var_18 = 1924716660U;
signed char var_19 = (signed char)63;
short var_20 = (short)11653;
short var_21 = (short)-19459;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
