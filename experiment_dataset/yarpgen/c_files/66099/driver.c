#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_10 = 4139831071U;
int var_12 = -422876679;
short var_13 = (short)31424;
unsigned char var_15 = (unsigned char)250;
unsigned char var_16 = (unsigned char)205;
int zero = 0;
int var_18 = 942160071;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)15611;
void init() {
}

void checksum() {
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
