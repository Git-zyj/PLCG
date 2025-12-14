#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6384923549894847423ULL;
unsigned int var_5 = 2438409510U;
unsigned short var_12 = (unsigned short)22484;
short var_13 = (short)30343;
int zero = 0;
int var_15 = -2017130853;
long long int var_16 = 378040121881956453LL;
unsigned char var_17 = (unsigned char)207;
short var_18 = (short)32040;
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
