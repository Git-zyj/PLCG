#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_13 = 396864710;
unsigned char var_14 = (unsigned char)204;
int zero = 0;
unsigned long long int var_18 = 5129978203345055631ULL;
unsigned char var_19 = (unsigned char)144;
int var_20 = 721797124;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
