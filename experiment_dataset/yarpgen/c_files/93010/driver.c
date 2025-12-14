#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)49432;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)26887;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
short var_21 = (short)-12654;
unsigned char var_22 = (unsigned char)39;
short var_23 = (short)-14310;
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
