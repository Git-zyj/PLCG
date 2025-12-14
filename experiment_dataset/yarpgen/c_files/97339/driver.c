#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55097;
unsigned long long int var_5 = 9859620451917972491ULL;
unsigned short var_6 = (unsigned short)4609;
unsigned int var_7 = 2979461873U;
unsigned int var_12 = 2729794196U;
unsigned long long int var_13 = 4280051731865151075ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)172;
signed char var_16 = (signed char)-40;
unsigned long long int var_17 = 10833130314946129261ULL;
unsigned short var_18 = (unsigned short)45645;
short var_19 = (short)20287;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
