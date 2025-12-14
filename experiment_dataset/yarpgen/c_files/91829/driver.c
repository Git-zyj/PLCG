#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19241;
unsigned int var_3 = 2319831747U;
unsigned int var_4 = 2902001486U;
int var_6 = -261818753;
unsigned long long int var_8 = 2959208690564389489ULL;
unsigned short var_10 = (unsigned short)40020;
int zero = 0;
unsigned int var_12 = 2854909018U;
unsigned int var_13 = 2148517015U;
unsigned long long int var_14 = 11389703202375263500ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
