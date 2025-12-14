#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4547677040416379019ULL;
unsigned char var_4 = (unsigned char)77;
int var_6 = -1534921080;
unsigned int var_9 = 3800770547U;
int zero = 0;
unsigned char var_20 = (unsigned char)186;
int var_21 = -2136930236;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
