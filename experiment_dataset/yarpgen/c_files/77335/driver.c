#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5830461495663235358LL;
long long int var_4 = 5354667196260234295LL;
unsigned int var_5 = 167200885U;
unsigned long long int var_10 = 779368473142428335ULL;
unsigned int var_12 = 2867716591U;
int zero = 0;
unsigned int var_14 = 195282243U;
unsigned char var_15 = (unsigned char)55;
short var_16 = (short)-32173;
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
