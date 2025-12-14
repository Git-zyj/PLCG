#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -2047135252;
signed char var_5 = (signed char)17;
int zero = 0;
unsigned char var_10 = (unsigned char)253;
long long int var_11 = 6336674360105476794LL;
unsigned char var_12 = (unsigned char)108;
signed char var_13 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
