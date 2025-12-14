#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
short var_3 = (short)23275;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5756959452229085950ULL;
unsigned char var_18 = (unsigned char)55;
unsigned int var_19 = 2064457556U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
