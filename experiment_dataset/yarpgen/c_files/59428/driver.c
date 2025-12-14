#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 136442595U;
unsigned char var_4 = (unsigned char)81;
unsigned short var_5 = (unsigned short)63231;
short var_6 = (short)-21184;
unsigned long long int var_9 = 12322313488274753464ULL;
signed char var_10 = (signed char)-76;
unsigned char var_11 = (unsigned char)97;
int zero = 0;
unsigned short var_14 = (unsigned short)13996;
unsigned int var_15 = 4138582881U;
signed char var_16 = (signed char)24;
long long int var_17 = 219447828078589606LL;
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
