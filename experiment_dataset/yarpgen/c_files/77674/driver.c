#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2453454036U;
unsigned short var_6 = (unsigned short)27442;
unsigned long long int var_11 = 7309830060533657870ULL;
int zero = 0;
short var_14 = (short)-17284;
unsigned int var_15 = 357776392U;
unsigned long long int var_16 = 14377703785112456137ULL;
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
