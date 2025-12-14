#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
long long int var_6 = 7123931290111915878LL;
long long int var_7 = 9095709337326098843LL;
unsigned int var_14 = 2999486819U;
int zero = 0;
unsigned int var_16 = 894635197U;
unsigned short var_17 = (unsigned short)9807;
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
