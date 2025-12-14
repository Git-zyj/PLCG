#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
short var_1 = (short)22802;
int var_5 = -1529567323;
unsigned int var_8 = 2117773589U;
unsigned short var_9 = (unsigned short)56394;
unsigned short var_10 = (unsigned short)44573;
signed char var_12 = (signed char)8;
signed char var_13 = (signed char)13;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 239918212U;
short var_16 = (short)32682;
short var_17 = (short)12203;
void init() {
}

void checksum() {
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
