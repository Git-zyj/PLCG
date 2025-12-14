#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)28530;
short var_14 = (short)23213;
int zero = 0;
long long int var_20 = 6549992476545906775LL;
long long int var_21 = -1210222197979341509LL;
long long int var_22 = 3770844615701898711LL;
long long int var_23 = -527713891221092732LL;
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
