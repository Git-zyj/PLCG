#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
signed char var_4 = (signed char)6;
short var_7 = (short)1412;
unsigned char var_11 = (unsigned char)236;
int zero = 0;
unsigned char var_15 = (unsigned char)36;
short var_16 = (short)-21013;
unsigned char var_17 = (unsigned char)66;
unsigned char var_18 = (unsigned char)251;
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
