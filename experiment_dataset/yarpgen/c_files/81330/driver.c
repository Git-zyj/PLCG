#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1873299833;
unsigned char var_7 = (unsigned char)86;
signed char var_12 = (signed char)9;
signed char var_13 = (signed char)78;
unsigned char var_15 = (unsigned char)164;
int var_17 = -167196809;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
unsigned char var_20 = (unsigned char)113;
signed char var_21 = (signed char)100;
unsigned char var_22 = (unsigned char)209;
signed char var_23 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
