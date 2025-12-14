#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1709768081U;
unsigned int var_1 = 1346871223U;
unsigned int var_3 = 3634316693U;
unsigned int var_5 = 12635825U;
unsigned short var_9 = (unsigned short)62689;
unsigned short var_10 = (unsigned short)62454;
int zero = 0;
unsigned short var_15 = (unsigned short)9484;
unsigned int var_16 = 168518589U;
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
