#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)161;
int var_6 = -677000404;
unsigned char var_7 = (unsigned char)202;
int var_8 = -2050959245;
int var_12 = 1385027142;
int zero = 0;
int var_14 = 1177277460;
int var_15 = 734916901;
void init() {
}

void checksum() {
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
