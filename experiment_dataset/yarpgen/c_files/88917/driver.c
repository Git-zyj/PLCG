#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)29308;
unsigned int var_10 = 4220988507U;
int var_11 = 841886114;
unsigned short var_12 = (unsigned short)10243;
unsigned short var_15 = (unsigned short)37424;
int zero = 0;
unsigned int var_16 = 3561616318U;
int var_17 = -1191315451;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
