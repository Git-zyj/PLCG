#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_8 = (short)27772;
unsigned int var_11 = 183244428U;
long long int var_12 = 5047012305310173546LL;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
unsigned short var_15 = (unsigned short)58052;
long long int var_16 = -8267068597826537047LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
