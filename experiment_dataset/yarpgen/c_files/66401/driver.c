#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -730181946;
unsigned short var_7 = (unsigned short)11331;
unsigned short var_8 = (unsigned short)50093;
int zero = 0;
int var_15 = 1783770564;
unsigned long long int var_16 = 5671980192242941759ULL;
void init() {
}

void checksum() {
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
