#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1428781504;
unsigned char var_2 = (unsigned char)205;
unsigned char var_3 = (unsigned char)87;
int var_8 = 712586885;
unsigned char var_9 = (unsigned char)251;
signed char var_10 = (signed char)-53;
int zero = 0;
int var_13 = -623341285;
unsigned char var_14 = (unsigned char)65;
signed char var_15 = (signed char)55;
void init() {
}

void checksum() {
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
