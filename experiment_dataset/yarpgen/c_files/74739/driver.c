#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15311;
short var_5 = (short)-28945;
int var_8 = -2111546754;
unsigned short var_11 = (unsigned short)23775;
long long int var_12 = -2795338564900588259LL;
unsigned int var_15 = 1309251910U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3183389268U;
unsigned short var_19 = (unsigned short)52651;
unsigned short var_20 = (unsigned short)59919;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
