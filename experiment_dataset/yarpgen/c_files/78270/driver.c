#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23407;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)79;
unsigned int var_7 = 3937534033U;
unsigned short var_8 = (unsigned short)784;
unsigned char var_9 = (unsigned char)32;
unsigned int var_12 = 2777495213U;
int zero = 0;
short var_15 = (short)-14595;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)17231;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
