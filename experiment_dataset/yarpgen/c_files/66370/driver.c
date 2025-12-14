#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2141574028265798087LL;
unsigned long long int var_8 = 252421220269906717ULL;
unsigned short var_10 = (unsigned short)45882;
short var_12 = (short)15392;
int zero = 0;
unsigned int var_17 = 4116062565U;
unsigned long long int var_18 = 8201865428295890779ULL;
void init() {
}

void checksum() {
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
