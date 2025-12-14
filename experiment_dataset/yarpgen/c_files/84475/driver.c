#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8870;
signed char var_6 = (signed char)-5;
signed char var_12 = (signed char)-97;
signed char var_14 = (signed char)1;
int zero = 0;
unsigned long long int var_16 = 8195885782008307436ULL;
signed char var_17 = (signed char)88;
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
