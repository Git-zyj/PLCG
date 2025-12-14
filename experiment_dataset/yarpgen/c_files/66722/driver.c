#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18185;
long long int var_2 = 2014256718292805627LL;
unsigned int var_3 = 3081146002U;
unsigned long long int var_4 = 10295915596579242844ULL;
unsigned long long int var_5 = 17701495090444299528ULL;
short var_15 = (short)-14758;
short var_16 = (short)1232;
int zero = 0;
int var_17 = 975240806;
unsigned int var_18 = 1621757245U;
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
