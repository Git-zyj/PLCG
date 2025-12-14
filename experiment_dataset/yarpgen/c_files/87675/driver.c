#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)61;
long long int var_10 = -3336638549364575701LL;
long long int var_11 = -3937603029792769269LL;
int zero = 0;
short var_13 = (short)-14274;
unsigned int var_14 = 2477264886U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
