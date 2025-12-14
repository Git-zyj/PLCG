#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 677870125U;
unsigned char var_2 = (unsigned char)33;
unsigned short var_6 = (unsigned short)7711;
unsigned char var_8 = (unsigned char)182;
int zero = 0;
unsigned int var_13 = 1134351825U;
unsigned long long int var_14 = 8498021832195581527ULL;
void init() {
}

void checksum() {
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
