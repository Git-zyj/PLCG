#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4318;
unsigned short var_2 = (unsigned short)22206;
int var_4 = 1088084641;
unsigned int var_6 = 1880510400U;
unsigned short var_7 = (unsigned short)48054;
unsigned char var_9 = (unsigned char)20;
int zero = 0;
short var_10 = (short)21970;
short var_11 = (short)26920;
int var_12 = -2133649642;
unsigned long long int var_13 = 16207281813307236596ULL;
unsigned short var_14 = (unsigned short)37517;
int var_15 = -2038135263;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
