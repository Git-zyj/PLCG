#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
short var_1 = (short)-6169;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)158;
int var_7 = -1284387381;
unsigned char var_13 = (unsigned char)110;
signed char var_15 = (signed char)-14;
int zero = 0;
unsigned int var_16 = 2052489252U;
unsigned long long int var_17 = 4143068806917665759ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
