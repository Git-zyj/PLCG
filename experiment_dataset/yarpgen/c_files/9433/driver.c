#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5293305358845694871LL;
short var_6 = (short)-6559;
unsigned int var_11 = 3186239962U;
int zero = 0;
unsigned short var_14 = (unsigned short)22389;
unsigned short var_15 = (unsigned short)35690;
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
