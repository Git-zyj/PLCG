#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6312;
int var_4 = -3993711;
_Bool var_6 = (_Bool)1;
short var_13 = (short)-19054;
int zero = 0;
unsigned short var_14 = (unsigned short)2797;
unsigned char var_15 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
