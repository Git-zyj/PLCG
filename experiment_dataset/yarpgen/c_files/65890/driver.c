#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1133317143042523734LL;
short var_2 = (short)13917;
unsigned long long int var_3 = 11082568091353591138ULL;
short var_7 = (short)-30416;
long long int var_8 = -148425486074714755LL;
unsigned long long int var_9 = 12140083007443480306ULL;
int zero = 0;
signed char var_13 = (signed char)-42;
short var_14 = (short)-6532;
unsigned int var_15 = 4150528885U;
long long int var_16 = 1937487287983064485LL;
unsigned int var_17 = 841316894U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
