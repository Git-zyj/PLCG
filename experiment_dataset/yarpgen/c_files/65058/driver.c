#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)12826;
signed char var_4 = (signed char)21;
int var_12 = -2135261582;
short var_14 = (short)457;
int var_17 = 742409452;
int zero = 0;
short var_18 = (short)-17796;
unsigned char var_19 = (unsigned char)55;
signed char var_20 = (signed char)34;
unsigned long long int var_21 = 13226087618968848187ULL;
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
