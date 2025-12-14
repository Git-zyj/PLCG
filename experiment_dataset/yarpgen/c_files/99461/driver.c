#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1231182991U;
unsigned short var_6 = (unsigned short)38911;
unsigned char var_8 = (unsigned char)232;
int zero = 0;
unsigned short var_10 = (unsigned short)40194;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29716;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
