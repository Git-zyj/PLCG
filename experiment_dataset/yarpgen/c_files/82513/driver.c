#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1919664694U;
int var_14 = 443125846;
unsigned int var_17 = 556178344U;
int zero = 0;
unsigned long long int var_19 = 11188960480097198471ULL;
unsigned long long int var_20 = 963853315075858730ULL;
void init() {
}

void checksum() {
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
