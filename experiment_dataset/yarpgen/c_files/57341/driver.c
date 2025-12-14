#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2185;
short var_3 = (short)18741;
long long int var_4 = -7812156895843984627LL;
unsigned short var_6 = (unsigned short)30029;
signed char var_8 = (signed char)16;
int zero = 0;
long long int var_10 = 8342020805382739854LL;
long long int var_11 = 8089835210171530883LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
