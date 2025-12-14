#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10474;
short var_5 = (short)9780;
unsigned int var_7 = 3362899991U;
signed char var_11 = (signed char)-61;
short var_12 = (short)13044;
unsigned int var_15 = 3097050704U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 355962932363105670ULL;
int var_20 = -717985285;
unsigned int var_21 = 2560719109U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
