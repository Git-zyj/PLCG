#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28237;
unsigned short var_5 = (unsigned short)57651;
_Bool var_7 = (_Bool)0;
long long int var_15 = -5095318385430600881LL;
int zero = 0;
unsigned char var_18 = (unsigned char)173;
unsigned long long int var_19 = 4686673136903738655ULL;
void init() {
}

void checksum() {
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
