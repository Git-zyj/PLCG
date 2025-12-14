#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)11;
signed char var_4 = (signed char)-75;
signed char var_5 = (signed char)74;
signed char var_6 = (signed char)121;
int var_7 = 773495858;
short var_8 = (short)29098;
signed char var_12 = (signed char)24;
int var_13 = -2087597603;
int zero = 0;
short var_14 = (short)24262;
short var_15 = (short)30884;
signed char var_16 = (signed char)31;
signed char var_17 = (signed char)69;
signed char var_18 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
