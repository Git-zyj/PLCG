#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61952;
short var_2 = (short)-6164;
unsigned int var_3 = 3045044802U;
unsigned int var_8 = 2820960082U;
int zero = 0;
unsigned char var_10 = (unsigned char)25;
unsigned long long int var_11 = 11897488167520192619ULL;
unsigned short var_12 = (unsigned short)18440;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
