#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_6 = 1249780415U;
signed char var_7 = (signed char)37;
unsigned char var_10 = (unsigned char)116;
int zero = 0;
short var_13 = (short)31793;
short var_14 = (short)-4805;
unsigned int var_15 = 1546952352U;
long long int var_16 = 5037988401137228766LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
