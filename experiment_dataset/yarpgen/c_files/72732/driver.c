#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)61661;
int var_11 = -1211193391;
int zero = 0;
unsigned short var_16 = (unsigned short)65024;
signed char var_17 = (signed char)19;
signed char var_18 = (signed char)3;
void init() {
}

void checksum() {
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
