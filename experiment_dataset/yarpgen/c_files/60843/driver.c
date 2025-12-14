#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned char var_3 = (unsigned char)108;
int var_9 = -2101733630;
unsigned int var_10 = 2905372565U;
int var_11 = 1027268891;
int zero = 0;
int var_14 = -1626788145;
int var_15 = -525261014;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
