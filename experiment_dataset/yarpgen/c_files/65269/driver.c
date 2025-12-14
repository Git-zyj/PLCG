#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48989;
int var_7 = -2006495894;
unsigned long long int var_13 = 16346238355166860786ULL;
int zero = 0;
signed char var_15 = (signed char)-95;
unsigned short var_16 = (unsigned short)18495;
unsigned long long int var_17 = 9284234412926120799ULL;
unsigned long long int var_18 = 8609813810695029335ULL;
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
