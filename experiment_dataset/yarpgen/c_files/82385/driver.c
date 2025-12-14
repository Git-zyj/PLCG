#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2712102082314446184ULL;
unsigned short var_1 = (unsigned short)33244;
int var_4 = 987700476;
signed char var_7 = (signed char)-69;
unsigned short var_10 = (unsigned short)54855;
signed char var_11 = (signed char)6;
short var_12 = (short)23666;
unsigned short var_13 = (unsigned short)3875;
unsigned int var_15 = 414588243U;
int zero = 0;
signed char var_16 = (signed char)-88;
signed char var_17 = (signed char)-93;
int var_18 = 724126120;
signed char var_19 = (signed char)44;
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
