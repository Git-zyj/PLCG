#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3486284573687712033LL;
_Bool var_7 = (_Bool)0;
unsigned int var_12 = 1011563988U;
int var_14 = -428512227;
unsigned short var_16 = (unsigned short)15360;
unsigned short var_18 = (unsigned short)62280;
int zero = 0;
unsigned short var_19 = (unsigned short)47335;
signed char var_20 = (signed char)58;
signed char var_21 = (signed char)72;
void init() {
}

void checksum() {
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
