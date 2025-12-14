#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3124695859U;
short var_3 = (short)6354;
int var_4 = -548831959;
int var_10 = 116006870;
short var_13 = (short)24498;
unsigned short var_14 = (unsigned short)52635;
int zero = 0;
long long int var_16 = 6774976716642801643LL;
short var_17 = (short)15396;
int var_18 = 188781379;
void init() {
}

void checksum() {
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
