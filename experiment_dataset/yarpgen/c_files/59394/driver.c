#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1092193963985588326LL;
long long int var_3 = -7361369093045752345LL;
long long int var_4 = -8767687833760487098LL;
unsigned char var_8 = (unsigned char)81;
int zero = 0;
int var_16 = -1703878459;
long long int var_17 = -1936825402330163507LL;
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
