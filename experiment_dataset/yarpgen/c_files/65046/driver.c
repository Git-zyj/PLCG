#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4075555256U;
unsigned char var_7 = (unsigned char)77;
long long int var_15 = -4239443548669553746LL;
int zero = 0;
unsigned int var_16 = 2904140556U;
long long int var_17 = -322704265006843232LL;
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
