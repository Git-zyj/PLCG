#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)29172;
unsigned char var_4 = (unsigned char)211;
unsigned char var_6 = (unsigned char)248;
int zero = 0;
unsigned char var_17 = (unsigned char)110;
short var_18 = (short)20821;
unsigned char var_19 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
