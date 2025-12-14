#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2782992099U;
unsigned int var_3 = 1719764543U;
signed char var_5 = (signed char)-89;
unsigned short var_13 = (unsigned short)46093;
signed char var_14 = (signed char)-108;
int zero = 0;
unsigned short var_16 = (unsigned short)45891;
signed char var_17 = (signed char)-84;
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
