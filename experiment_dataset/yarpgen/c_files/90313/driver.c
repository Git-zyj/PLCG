#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned short var_3 = (unsigned short)14862;
signed char var_6 = (signed char)62;
signed char var_10 = (signed char)87;
short var_11 = (short)-30639;
int zero = 0;
unsigned short var_12 = (unsigned short)47048;
int var_13 = 2019167792;
unsigned short var_14 = (unsigned short)26594;
unsigned long long int var_15 = 17483247612971185414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
