#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6618237827030815489ULL;
unsigned int var_6 = 2054290205U;
short var_7 = (short)-29469;
unsigned int var_9 = 2557333592U;
unsigned short var_12 = (unsigned short)9260;
int zero = 0;
short var_13 = (short)21782;
unsigned int var_14 = 1451715828U;
void init() {
}

void checksum() {
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
