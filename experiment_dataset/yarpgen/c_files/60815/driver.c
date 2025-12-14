#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
unsigned int var_7 = 1020414168U;
int var_8 = 2030331935;
unsigned long long int var_10 = 3103260594730905852ULL;
int var_12 = 345157646;
int zero = 0;
signed char var_15 = (signed char)-27;
signed char var_16 = (signed char)-67;
unsigned char var_17 = (unsigned char)91;
short var_18 = (short)-5928;
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
