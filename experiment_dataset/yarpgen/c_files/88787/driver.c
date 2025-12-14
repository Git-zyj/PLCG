#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -736645274;
int var_2 = -849992377;
short var_5 = (short)16590;
short var_17 = (short)23094;
int zero = 0;
int var_20 = -1462663847;
int var_21 = -1604070857;
int var_22 = 1453467254;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
