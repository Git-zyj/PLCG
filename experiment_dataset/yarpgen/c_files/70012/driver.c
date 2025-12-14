#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4258;
unsigned char var_12 = (unsigned char)54;
int zero = 0;
signed char var_15 = (signed char)-86;
unsigned long long int var_16 = 7996689516965815372ULL;
long long int var_17 = -3129542257341217076LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
