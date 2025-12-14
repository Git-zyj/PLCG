#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8985;
unsigned short var_4 = (unsigned short)26486;
unsigned long long int var_6 = 13684386536192420428ULL;
long long int var_7 = -7355300707485758947LL;
unsigned long long int var_13 = 14590661961553540750ULL;
short var_14 = (short)-5191;
long long int var_15 = -7968931101305075130LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-62;
unsigned long long int var_21 = 2633140531263413517ULL;
void init() {
}

void checksum() {
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
