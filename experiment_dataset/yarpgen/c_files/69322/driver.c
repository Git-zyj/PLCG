#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4281368956669957944ULL;
unsigned char var_16 = (unsigned char)99;
signed char var_17 = (signed char)101;
int zero = 0;
signed char var_19 = (signed char)-61;
short var_20 = (short)-32459;
void init() {
}

void checksum() {
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
