#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11750;
unsigned char var_3 = (unsigned char)232;
unsigned int var_4 = 4264404724U;
unsigned short var_8 = (unsigned short)21623;
short var_11 = (short)24159;
unsigned short var_13 = (unsigned short)5987;
int zero = 0;
unsigned int var_14 = 4123645956U;
_Bool var_15 = (_Bool)0;
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
