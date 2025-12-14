#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_7 = -268325015;
short var_8 = (short)3263;
short var_11 = (short)14692;
unsigned long long int var_12 = 6182782794283199536ULL;
unsigned char var_15 = (unsigned char)88;
int zero = 0;
unsigned char var_18 = (unsigned char)167;
int var_19 = -156702126;
unsigned int var_20 = 939128314U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
