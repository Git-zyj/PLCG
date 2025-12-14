#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
short var_7 = (short)467;
unsigned char var_12 = (unsigned char)14;
int zero = 0;
unsigned char var_13 = (unsigned char)49;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)61851;
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
