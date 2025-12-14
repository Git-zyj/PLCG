#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 750337014;
unsigned char var_7 = (unsigned char)207;
int var_8 = 1662845861;
unsigned char var_11 = (unsigned char)234;
unsigned short var_15 = (unsigned short)23261;
unsigned short var_16 = (unsigned short)36028;
int zero = 0;
unsigned short var_20 = (unsigned short)20007;
unsigned char var_21 = (unsigned char)89;
void init() {
}

void checksum() {
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
