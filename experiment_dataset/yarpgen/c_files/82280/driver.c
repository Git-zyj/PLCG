#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8314;
long long int var_3 = 8147299973725457109LL;
unsigned char var_6 = (unsigned char)19;
int var_10 = -1714009573;
signed char var_11 = (signed char)-36;
int var_14 = -1655109547;
int var_15 = 1926275830;
int zero = 0;
unsigned short var_16 = (unsigned short)64137;
signed char var_17 = (signed char)-50;
void init() {
}

void checksum() {
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
