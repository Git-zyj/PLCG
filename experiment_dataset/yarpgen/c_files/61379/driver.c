#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -878862882;
unsigned char var_5 = (unsigned char)222;
unsigned char var_11 = (unsigned char)207;
unsigned long long int var_13 = 12132983953358399588ULL;
int zero = 0;
signed char var_14 = (signed char)32;
unsigned char var_15 = (unsigned char)209;
signed char var_16 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
