#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17864249371049963600ULL;
unsigned long long int var_2 = 3925755249401579953ULL;
int zero = 0;
int var_16 = 542026073;
unsigned long long int var_17 = 5737257697650198433ULL;
unsigned char var_18 = (unsigned char)158;
void init() {
}

void checksum() {
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
