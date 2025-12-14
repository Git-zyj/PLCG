#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1396934540;
unsigned short var_2 = (unsigned short)29882;
unsigned int var_4 = 3378829469U;
unsigned long long int var_8 = 654645836634663242ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)38539;
unsigned short var_12 = (unsigned short)37379;
unsigned short var_13 = (unsigned short)62316;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
