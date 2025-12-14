#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19741;
unsigned short var_3 = (unsigned short)16783;
unsigned short var_5 = (unsigned short)64105;
int var_8 = -1184919328;
int zero = 0;
unsigned int var_12 = 1462647417U;
unsigned int var_13 = 233033092U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
