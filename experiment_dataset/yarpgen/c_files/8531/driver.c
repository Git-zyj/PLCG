#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2058397693U;
unsigned long long int var_8 = 2312965609047017487ULL;
unsigned short var_9 = (unsigned short)20423;
int zero = 0;
unsigned char var_15 = (unsigned char)114;
signed char var_16 = (signed char)43;
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
