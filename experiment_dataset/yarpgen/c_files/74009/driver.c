#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 11715750309436405204ULL;
unsigned long long int var_12 = 340460196292138633ULL;
int zero = 0;
int var_14 = -1451418825;
signed char var_15 = (signed char)60;
unsigned long long int var_16 = 14389967908504873351ULL;
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
