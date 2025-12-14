#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)230;
unsigned short var_10 = (unsigned short)29159;
unsigned char var_14 = (unsigned char)230;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 6374524712562950478ULL;
unsigned int var_17 = 99254197U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
