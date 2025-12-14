#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22925;
short var_5 = (short)-25149;
unsigned short var_6 = (unsigned short)47249;
int var_7 = 1781681975;
unsigned short var_9 = (unsigned short)47630;
unsigned int var_10 = 3392116284U;
short var_12 = (short)-30033;
unsigned long long int var_13 = 12334282232153368845ULL;
long long int var_17 = -2824445887710671968LL;
int zero = 0;
unsigned short var_20 = (unsigned short)44067;
unsigned int var_21 = 739872253U;
int var_22 = 229539749;
signed char var_23 = (signed char)99;
short var_24 = (short)30663;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
