#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4922;
short var_3 = (short)-6346;
unsigned long long int var_10 = 5440868935055147034ULL;
int zero = 0;
short var_12 = (short)3847;
unsigned int var_13 = 1012144829U;
short var_14 = (short)12466;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
