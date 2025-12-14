#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2095;
_Bool var_3 = (_Bool)1;
short var_10 = (short)-11306;
unsigned char var_15 = (unsigned char)171;
int zero = 0;
unsigned int var_16 = 1875475419U;
short var_17 = (short)26169;
void init() {
}

void checksum() {
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
