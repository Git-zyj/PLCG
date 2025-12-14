#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52822;
_Bool var_3 = (_Bool)1;
unsigned short var_12 = (unsigned short)63873;
short var_13 = (short)28971;
long long int var_14 = -1186069437276722609LL;
int zero = 0;
unsigned int var_20 = 3168552878U;
long long int var_21 = 5945608251123339975LL;
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
