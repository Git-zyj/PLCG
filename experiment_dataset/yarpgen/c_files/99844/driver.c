#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)76;
short var_8 = (short)-6165;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 1762627233U;
unsigned int var_16 = 3357696233U;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-75;
unsigned int var_21 = 1440408715U;
short var_22 = (short)-7874;
unsigned int var_23 = 2777755546U;
unsigned char var_24 = (unsigned char)209;
unsigned int var_25 = 66231444U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
