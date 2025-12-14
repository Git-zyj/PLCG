#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 354886340U;
short var_6 = (short)22371;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)42607;
int zero = 0;
unsigned short var_13 = (unsigned short)6673;
int var_14 = -1431936629;
unsigned char var_15 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
