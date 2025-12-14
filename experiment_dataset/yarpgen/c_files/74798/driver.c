#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8244207240431934518ULL;
unsigned short var_3 = (unsigned short)59632;
long long int var_10 = 7491298956295564078LL;
unsigned char var_12 = (unsigned char)7;
unsigned long long int var_13 = 3220782489349111680ULL;
unsigned int var_14 = 1747158424U;
int zero = 0;
unsigned short var_15 = (unsigned short)30512;
unsigned int var_16 = 2521723589U;
long long int var_17 = -7858604773554530138LL;
long long int var_18 = -1842470013095469913LL;
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
