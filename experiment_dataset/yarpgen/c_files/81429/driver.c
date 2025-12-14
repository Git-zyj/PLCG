#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3741;
int var_2 = -1727636190;
short var_4 = (short)18752;
long long int var_6 = -7278172210080687737LL;
short var_10 = (short)5024;
signed char var_12 = (signed char)86;
int zero = 0;
unsigned short var_15 = (unsigned short)51830;
long long int var_16 = -240721923263091163LL;
long long int var_17 = -6232331229700476961LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
