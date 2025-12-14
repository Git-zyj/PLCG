#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21820;
short var_4 = (short)-18299;
unsigned int var_17 = 3562115557U;
int zero = 0;
unsigned int var_18 = 2756964783U;
int var_19 = 887340246;
unsigned short var_20 = (unsigned short)26846;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
