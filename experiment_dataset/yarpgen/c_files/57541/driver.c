#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)31;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 2191099531383190267ULL;
_Bool var_11 = (_Bool)1;
long long int var_15 = -7952871247064906314LL;
int var_16 = 1864317125;
int var_17 = 1825113863;
short var_19 = (short)-4863;
int zero = 0;
unsigned int var_20 = 2033475075U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-495;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
