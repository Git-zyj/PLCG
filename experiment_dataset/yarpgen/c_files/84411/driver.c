#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23189;
unsigned int var_2 = 431170005U;
int var_3 = -1196197843;
unsigned int var_6 = 1230442631U;
unsigned long long int var_13 = 17942532329553662086ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)57;
signed char var_16 = (signed char)-38;
unsigned char var_17 = (unsigned char)160;
void init() {
}

void checksum() {
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
