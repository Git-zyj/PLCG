#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-102;
unsigned char var_10 = (unsigned char)168;
unsigned int var_13 = 2315098532U;
unsigned int var_14 = 934090680U;
int zero = 0;
short var_15 = (short)23210;
signed char var_16 = (signed char)-26;
unsigned short var_17 = (unsigned short)19630;
int var_18 = 2126242593;
void init() {
}

void checksum() {
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
